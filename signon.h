#ifndef SIGNON_H
#define SIGNON_H

#include <QDialog>

namespace Ui {
class signIn;
}

class signIn : public QDialog
{
    Q_OBJECT

public:
    explicit signIn(QWidget *parent = nullptr);
    ~signIn();

private slots:
    void on_cancelBtn_clicked();

    void on_okBtn_clicked();

    void on_viewTokenBtn_clicked();

private:
    Ui::signIn *ui;
};

#endif // SIGNON_H
