#include "opengpt.h"
#include "ui_opengpt.h"

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QTimer>

// db
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
// db

#include <QString>

#include "signon.h"
#include "about.h"
#include <QMessageBox>

OpenGPT::OpenGPT(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OpenGPT)
{
    ui->setupUi(this);
    //ui->chatgptAnswer1->setWordWrapMode(QTextOption::WordWrap);
    ui->sendRequestBtn->setEnabled(true); // Делаем кнопку доступной при запуске приложения
}

OpenGPT::~OpenGPT()
{
    delete ui;
}


void OpenGPT::on_sendRequestBtn_clicked()
{
    ui->sendRequestBtn->setEnabled(false); // Делаем кнопку недоступной для нажатия
    QTimer::singleShot(20000, this, [this](){
        ui->sendRequestBtn->setEnabled(true); // Через 20 секунд делаем кнопку снова доступной
    });

    QString requestText = ui->requestField->toPlainText().trimmed();
    if (requestText.isEmpty()) {
        ui->chatgptAnswer->setText("Error! You entered an empty request / invalid api token. Try again in 20 seconds.");
    }
    else {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("open-gpt.db");
        if (!db.open()) {
            qDebug() << "Error";
            return;
        }

        // Выполнить SELECT-запрос, чтобы получить значение токена из базы данных
        QSqlQuery query;
        if (!query.exec("SELECT token FROM tokens")) {
            QMessageBox::critical(this, "Error", "Failed to execute select query");
            return;
        }
        QString apiKey;
        if (query.next()) {
            apiKey = query.value(0).toString();
        }

        // Использовать полученное значение токена вместо жестко заданного токена при отправке запроса в OpenAI API
        QByteArray requestBody = QString("{\"prompt\":\"%1\",\"temperature\":0.7,\"max_tokens\":150}").arg(requestText).toUtf8();
        QNetworkRequest request(QUrl("https://api.openai.com/v1/engines/text-davinci-003/completions?model=text-davinci-003"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        request.setRawHeader("Authorization", ("Bearer " + apiKey).toUtf8());

        QNetworkAccessManager *nam = new QNetworkAccessManager(this);
        QNetworkReply *reply = nam->post(request, requestBody);

        while (!reply->isFinished()) {
            qApp->processEvents();
        }

        QByteArray response = reply->readAll();

        // Parse JSON response
        QJsonDocument jsonResponse = QJsonDocument::fromJson(response);
        QJsonObject jsonObject = jsonResponse.object();
        QJsonArray choicesArray = jsonObject.value("choices").toArray();
        QJsonObject choiceObject = choicesArray.first().toObject();
        QString textValue = choiceObject.value("text").toString();

        ui->chatgptAnswer->setText(textValue);

        reply->deleteLater();
        nam->deleteLater();
    }
}


/*
 */


void OpenGPT::on_signOnBtn_clicked()
{
    signIn signOnDialog(this);

    if (signOnDialog.exec() == QDialog::Accepted) {
        QMessageBox::information(this, "Hooray!", "Success!");
        update();
    }
}


void OpenGPT::on_aboutBtn_clicked()
{
    about aboutDialog(this);
    aboutDialog.exec();
}

