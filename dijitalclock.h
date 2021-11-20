#ifndef DIJITALCLOCK_H
#define DIJITALCLOCK_H

#include <QWidget>
#include <QLCDNumber>

class dijitalClock : public QWidget
{
public:
    dijitalClock(QWidget *parent=0);


protected:
    void createWedgets();
    void placeWidgets();

   void timerEvent(QTimerEvent *e)override;
private slots:
    void updateTime();

private:
     QLCDNumber *hour;
     QLCDNumber *minute;
     QLCDNumber *second;

};

#endif // DIJITALCLOCK_H
