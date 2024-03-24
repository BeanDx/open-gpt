/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *aboutLabel;
    QLabel *descLablel;
    QLabel *Llinkslabel;
    QLabel *githubLabel;
    QPushButton *githubBtn;
    QLabel *gmailLabel;
    QPushButton *gmailBtn;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(400, 300);
        about->setMinimumSize(QSize(400, 300));
        about->setMaximumSize(QSize(400, 300));
        about->setStyleSheet(QString::fromUtf8("background-color: #303030;\n"
"/* lolz - #303030  */\n"
"/* my - #191a1e */"));
        aboutLabel = new QLabel(about);
        aboutLabel->setObjectName(QString::fromUtf8("aboutLabel"));
        aboutLabel->setGeometry(QRect(90, 20, 211, 41));
        aboutLabel->setLayoutDirection(Qt::LeftToRight);
        aboutLabel->setStyleSheet(QString::fromUtf8("font: 21pt \"Open Sans\";\n"
"color: #D6D6D6;"));
        descLablel = new QLabel(about);
        descLablel->setObjectName(QString::fromUtf8("descLablel"));
        descLablel->setGeometry(QRect(20, 80, 361, 91));
        descLablel->setStyleSheet(QString::fromUtf8("font: 13px \"Open Sans\";\n"
"color: #D6D6D6;"));
        descLablel->setWordWrap(true);
        Llinkslabel = new QLabel(about);
        Llinkslabel->setObjectName(QString::fromUtf8("Llinkslabel"));
        Llinkslabel->setGeometry(QRect(150, 200, 71, 21));
        Llinkslabel->setStyleSheet(QString::fromUtf8("font: 21pt \"Open Sans\";\n"
"color: #D6D6D6;"));
        githubLabel = new QLabel(about);
        githubLabel->setObjectName(QString::fromUtf8("githubLabel"));
        githubLabel->setGeometry(QRect(20, 240, 31, 31));
        githubLabel->setPixmap(QPixmap(QString::fromUtf8(":/githubLogo.png")));
        githubLabel->setTextInteractionFlags(Qt::TextEditable|Qt::TextSelectableByMouse);
        githubBtn = new QPushButton(about);
        githubBtn->setObjectName(QString::fromUtf8("githubBtn"));
        githubBtn->setGeometry(QRect(70, 240, 71, 31));
        githubBtn->setStyleSheet(QString::fromUtf8("#githubBtn {\n"
"	background-color: rgb(34, 142, 93);\n"
"	\n"
"	font: 10pt \"Open Sans\";\n"
"}\n"
"\n"
"\n"
"#githubBtn:hover {\n"
"    background-color: #1a6b46;\n"
"}"));
        gmailLabel = new QLabel(about);
        gmailLabel->setObjectName(QString::fromUtf8("gmailLabel"));
        gmailLabel->setGeometry(QRect(240, 240, 31, 31));
        gmailLabel->setPixmap(QPixmap(QString::fromUtf8(":/gmailLogo.png")));
        gmailBtn = new QPushButton(about);
        gmailBtn->setObjectName(QString::fromUtf8("gmailBtn"));
        gmailBtn->setGeometry(QRect(290, 240, 71, 31));
        gmailBtn->setStyleSheet(QString::fromUtf8("#gmailBtn {\n"
"	background-color: rgb(34, 142, 93);\n"
"	\n"
"	font: 10pt \"Open Sans\";\n"
"}\n"
"\n"
"\n"
"#gmailBtn:hover {\n"
"    background-color: #1a6b46;\n"
"}"));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QCoreApplication::translate("about", "Dialog", nullptr));
        aboutLabel->setText(QCoreApplication::translate("about", "About OpenGPT", nullptr));
        descLablel->setText(QCoreApplication::translate("about", "OpenGPT is an unofficial application using the openai api. With it, you can make a request to chatgpt and get a response.", nullptr));
        Llinkslabel->setText(QCoreApplication::translate("about", "Links", nullptr));
        githubLabel->setText(QString());
        githubBtn->setText(QCoreApplication::translate("about", "GitHub", nullptr));
        gmailLabel->setText(QString());
        gmailBtn->setText(QCoreApplication::translate("about", "Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
