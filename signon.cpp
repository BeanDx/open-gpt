#include "signon.h"
#include "ui_signon.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

signIn::signIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signIn)
{
    ui->setupUi(this);
}

signIn::~signIn()
{
    delete ui;
}

void signIn::on_cancelBtn_clicked()
{
    reject();
}


void signIn::on_okBtn_clicked()
{
    QString token = ui->openAiTokenTextEdit->text();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("open-gpt.db");

    if (!db.open()) { // если какие то ошибки
        QMessageBox::critical(this, "Error", "Failed to open database");
        return;
    }

    QSqlQuery query;
    if (!query.exec("CREATE TABLE IF NOT EXISTS tokens (token TEXT)")) {
        QMessageBox::critical(this, "Error", "Failed to create table");
        return;
    }

    if (!query.prepare("SELECT COUNT(*) FROM tokens")) {
        QMessageBox::critical(this, "Error", "Failed to prepare select query");
        return;
    }
    if (!query.exec() || !query.next()) {
        QMessageBox::critical(this, "Error", "Failed to get count of rows");
        return;
    }
    int count = query.value(0).toInt();

    if (count == 0) {
        if (!query.prepare("INSERT INTO tokens (token) VALUES (:token)")) {
            QMessageBox::critical(this, "Error", "Failed to prepare insert query");
            return;
        }
    } else {
        if (!query.prepare("UPDATE tokens SET token = :token")) {
            QMessageBox::critical(this, "Error", "Failed to prepare update query");
            return;
        }
    }
    query.bindValue(":token", token);
    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to update data");
        return;
    }

    if (!query.exec("SELECT token FROM tokens")) {
        QMessageBox::critical(this, "Error", "Failed to execute select query");
        return;
    }
    if (query.next()) {
        QString token = query.value(0).toString();
//        ui->label->setText(token);
    }
    accept();
}

// рабочее
/*

*/

void signIn::on_viewTokenBtn_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("open-gpt.db");
    if (!db.open()) {
        QMessageBox::critical(this, "Error", "Failed to open database");
        return;
    }

    QSqlQuery query;
    if (!query.exec("SELECT token FROM tokens")) {
        QMessageBox::critical(this, "Error", "Failed to execute select query");
        return;
    }
    if (query.next()) {
        QString token = query.value(0).toString();
        ui->viewTokenLabel->setText(token);
    }
}

