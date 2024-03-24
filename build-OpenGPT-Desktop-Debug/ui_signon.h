/********************************************************************************
** Form generated from reading UI file 'signon.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNON_H
#define UI_SIGNON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signIn
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *openAiTokenTitle;
    QLineEdit *openAiTokenTextEdit;
    QPushButton *viewTokenBtn;
    QLabel *signOnLabel;
    QPushButton *cancelBtn;
    QPushButton *okBtn;

    void setupUi(QDialog *signIn)
    {
        if (signIn->objectName().isEmpty())
            signIn->setObjectName(QString::fromUtf8("signIn"));
        signIn->resize(300, 300);
        signIn->setMinimumSize(QSize(300, 300));
        signIn->setMaximumSize(QSize(300, 300));
        signIn->setStyleSheet(QString::fromUtf8("background-color: #303030;"));
        gridLayoutWidget = new QWidget(signIn);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 100, 281, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        openAiTokenTitle = new QLabel(gridLayoutWidget);
        openAiTokenTitle->setObjectName(QString::fromUtf8("openAiTokenTitle"));
        openAiTokenTitle->setStyleSheet(QString::fromUtf8("color: #fff;"));

        gridLayout->addWidget(openAiTokenTitle, 0, 0, 1, 1);

        openAiTokenTextEdit = new QLineEdit(gridLayoutWidget);
        openAiTokenTextEdit->setObjectName(QString::fromUtf8("openAiTokenTextEdit"));
        openAiTokenTextEdit->setLayoutDirection(Qt::LeftToRight);
        openAiTokenTextEdit->setStyleSheet(QString::fromUtf8("background-color: #cdb3d0;\n"
"color: black;\n"
"font-size: 18px;"));

        gridLayout->addWidget(openAiTokenTextEdit, 0, 1, 1, 1);

        viewTokenBtn = new QPushButton(gridLayoutWidget);
        viewTokenBtn->setObjectName(QString::fromUtf8("viewTokenBtn"));
        viewTokenBtn->setStyleSheet(QString::fromUtf8("#viewTokenBtn {\n"
"	font: 10pt \"UbuntuMono Nerd Font\";\n"
"	background-color: #bca8a8;\n"
"}\n"
"#viewTokenBtn:hover {\n"
"	background-color: #8b7d7d;\n"
"}"));

        gridLayout->addWidget(viewTokenBtn, 1, 0, 1, 1);

        signOnLabel = new QLabel(signIn);
        signOnLabel->setObjectName(QString::fromUtf8("signOnLabel"));
        signOnLabel->setGeometry(QRect(100, 50, 141, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("UbuntuMono Nerd Font"));
        font.setPointSize(18);
        signOnLabel->setFont(font);
        signOnLabel->setStyleSheet(QString::fromUtf8("color: #D6D6D6;"));
        cancelBtn = new QPushButton(signIn);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setGeometry(QRect(90, 250, 80, 22));
        cancelBtn->setStyleSheet(QString::fromUtf8("#cancelBtn {\n"
"	font: 10pt \"UbuntuMono Nerd Font\";\n"
"	background-color: #bca8a8;\n"
"}\n"
"#cancelBtn:hover {\n"
"	background-color: #8b7d7d;\n"
"}"));
        okBtn = new QPushButton(signIn);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setGeometry(QRect(200, 250, 80, 22));
        okBtn->setStyleSheet(QString::fromUtf8("#okBtn {\n"
"	font: 10pt \"UbuntuMono Nerd Font\";\n"
"	background-color: #bca8a8;\n"
"}\n"
"#okBtn:hover {\n"
"	background-color: #8b7d7d;\n"
"}"));

        retranslateUi(signIn);

        QMetaObject::connectSlotsByName(signIn);
    } // setupUi

    void retranslateUi(QDialog *signIn)
    {
        signIn->setWindowTitle(QCoreApplication::translate("signIn", "Dialog", nullptr));
        openAiTokenTitle->setText(QCoreApplication::translate("signIn", "Openai token :", nullptr));
        viewTokenBtn->setText(QCoreApplication::translate("signIn", "View token", nullptr));
        signOnLabel->setText(QCoreApplication::translate("signIn", "SIGN ON", nullptr));
        cancelBtn->setText(QCoreApplication::translate("signIn", "CANCEL", nullptr));
        okBtn->setText(QCoreApplication::translate("signIn", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signIn: public Ui_signIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNON_H
