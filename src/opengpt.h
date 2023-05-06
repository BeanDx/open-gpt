#ifndef OPENGPT_H
#define OPENGPT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class OpenGPT; }
QT_END_NAMESPACE

class OpenGPT : public QMainWindow
{
    Q_OBJECT

public:
    OpenGPT(QWidget *parent = nullptr);
    ~OpenGPT();

private slots:
    void on_sendRequestBtn_clicked();

    void on_signOnBtn_clicked();

private:
    Ui::OpenGPT *ui;
};
#endif // OPENGPT_H
