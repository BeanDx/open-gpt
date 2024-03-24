/********************************************************************************
** Form generated from reading UI file 'opengpt.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENGPT_H
#define UI_OPENGPT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenGPT
{
public:
    QAction *actionAbout_program;
    QWidget *centralwidget;
    QLabel *requestFieldTitle;
    QTextEdit *chatgptAnswer;
    QLabel *requestAnswerTitle;
    QPushButton *sendRequestBtn;
    QTextEdit *requestField;
    QPushButton *signOnBtn;
    QLabel *label;
    QPushButton *aboutBtn;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OpenGPT)
    {
        if (OpenGPT->objectName().isEmpty())
            OpenGPT->setObjectName(QString::fromUtf8("OpenGPT"));
        OpenGPT->resize(600, 640);
        OpenGPT->setMinimumSize(QSize(600, 640));
        OpenGPT->setMaximumSize(QSize(600, 640));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        OpenGPT->setWindowIcon(icon);
        OpenGPT->setStyleSheet(QString::fromUtf8("background-color: #303030;\n"
"/* lolz - #303030  */\n"
"/* my - #191a1e */"));
        actionAbout_program = new QAction(OpenGPT);
        actionAbout_program->setObjectName(QString::fromUtf8("actionAbout_program"));
        centralwidget = new QWidget(OpenGPT);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        requestFieldTitle = new QLabel(centralwidget);
        requestFieldTitle->setObjectName(QString::fromUtf8("requestFieldTitle"));
        requestFieldTitle->setGeometry(QRect(210, 40, 221, 32));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans"));
        font.setPointSize(21);
        font.setBold(false);
        font.setItalic(false);
        requestFieldTitle->setFont(font);
        requestFieldTitle->setStyleSheet(QString::fromUtf8("font: 21pt \"Open Sans\";\n"
"color: #D6D6D6;"));
        chatgptAnswer = new QTextEdit(centralwidget);
        chatgptAnswer->setObjectName(QString::fromUtf8("chatgptAnswer"));
        chatgptAnswer->setEnabled(true);
        chatgptAnswer->setGeometry(QRect(20, 350, 561, 251));
        chatgptAnswer->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        chatgptAnswer->setStyleSheet(QString::fromUtf8("background-color: #cdb3d0;\n"
"color: black;\n"
"font-size: 18px;"));
        chatgptAnswer->setLineWidth(50);
        chatgptAnswer->setReadOnly(false);
        requestAnswerTitle = new QLabel(centralwidget);
        requestAnswerTitle->setObjectName(QString::fromUtf8("requestAnswerTitle"));
        requestAnswerTitle->setGeometry(QRect(200, 310, 241, 32));
        requestAnswerTitle->setFont(font);
        requestAnswerTitle->setStyleSheet(QString::fromUtf8("font: 21pt \"Open Sans\";\n"
"color: #D6D6D6;"));
        sendRequestBtn = new QPushButton(centralwidget);
        sendRequestBtn->setObjectName(QString::fromUtf8("sendRequestBtn"));
        sendRequestBtn->setGeometry(QRect(200, 260, 241, 31));
        sendRequestBtn->setCursor(QCursor(Qt::PointingHandCursor));
        sendRequestBtn->setStyleSheet(QString::fromUtf8("#sendRequestBtn {\n"
"	background-color: rgb(34, 142, 93);\n"
"	\n"
"	font: 12pt \"Open Sans\";\n"
"}\n"
"\n"
"\n"
"#sendRequestBtn:hover {\n"
"    background-color: #1a6b46;\n"
"}\n"
"\n"
"\n"
""));
        requestField = new QTextEdit(centralwidget);
        requestField->setObjectName(QString::fromUtf8("requestField"));
        requestField->setGeometry(QRect(20, 100, 561, 141));
        requestField->setStyleSheet(QString::fromUtf8("background-color: #cdb3d0;\n"
"color: black;\n"
"font-size: 18px;"));
        signOnBtn = new QPushButton(centralwidget);
        signOnBtn->setObjectName(QString::fromUtf8("signOnBtn"));
        signOnBtn->setGeometry(QRect(500, 60, 80, 22));
        signOnBtn->setStyleSheet(QString::fromUtf8("#signOnBtn {\n"
"	font: 10pt \"Sans Serif\";\n"
"	background-color: #228E5D;\n"
"}\n"
"#signOnBtn:hover {\n"
"	background-color: #1a6b46;\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 91, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logo.png")));
        label->setScaledContents(true);
        aboutBtn = new QPushButton(centralwidget);
        aboutBtn->setObjectName(QString::fromUtf8("aboutBtn"));
        aboutBtn->setGeometry(QRect(500, 30, 80, 22));
        aboutBtn->setStyleSheet(QString::fromUtf8("#aboutBtn {\n"
"	\n"
"	font: 10pt \"Sans Serif\";\n"
"	background-color: #228E5D;\n"
"}\n"
"#aboutBtn:hover {\n"
"	background-color: #1a6b46;\n"
"}"));
        OpenGPT->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(OpenGPT);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        OpenGPT->setStatusBar(statusbar);

        retranslateUi(OpenGPT);

        QMetaObject::connectSlotsByName(OpenGPT);
    } // setupUi

    void retranslateUi(QMainWindow *OpenGPT)
    {
        OpenGPT->setWindowTitle(QCoreApplication::translate("OpenGPT", "OpenGPT", nullptr));
        actionAbout_program->setText(QCoreApplication::translate("OpenGPT", "About program", nullptr));
        requestFieldTitle->setText(QCoreApplication::translate("OpenGPT", "ENTER REQUEST", nullptr));
        chatgptAnswer->setHtml(QCoreApplication::translate("OpenGPT", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:18px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
        chatgptAnswer->setPlaceholderText(QString());
        requestAnswerTitle->setText(QCoreApplication::translate("OpenGPT", "CHATGPT ANSWER", nullptr));
        sendRequestBtn->setText(QCoreApplication::translate("OpenGPT", "SEND", nullptr));
        requestField->setPlaceholderText(QCoreApplication::translate("OpenGPT", "Enter your request here...", nullptr));
        signOnBtn->setText(QCoreApplication::translate("OpenGPT", "Sign on", nullptr));
        label->setText(QString());
        aboutBtn->setText(QCoreApplication::translate("OpenGPT", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenGPT: public Ui_OpenGPT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENGPT_H
