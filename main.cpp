#include "captioningwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CaptioningWindow w;
    w.show();
    return a.exec();
}
