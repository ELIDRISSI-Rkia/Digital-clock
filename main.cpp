#include <QApplication>
#include "dijitalclock.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 auto *d = new dijitalClock;
 d->show();
    return a.exec();
}
