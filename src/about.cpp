#include "about.h"
#include "ui_about.h"

// for links
#include <QDesktopServices>
#include <QUrl>
// for links

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
}

about::~about()
{
    delete ui;
}

void about::on_githubBtn_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/BeanDx/open-gpt"));
}


void about::on_gmailBtn_clicked()
{
    QDesktopServices::openUrl(QUrl("https://mail.google.com/mail/u/0/?fs=1&tf=cm&to=opengptdev@gmail.com"));
}

