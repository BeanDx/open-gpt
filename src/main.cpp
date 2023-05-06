#include "opengpt.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpenGPT w;
    w.show();
    return a.exec();
}
