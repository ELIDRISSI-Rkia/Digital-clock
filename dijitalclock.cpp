#include "dijitalclock.h"

#include <QTimer>
#include <QTime>
#include <QHBoxLayout>

#include<QTimerEvent>
dijitalClock::dijitalClock(QWidget *parent): QWidget(parent)
{
     createWedgets();

     placeWidgets();


     startTimer(1000);

    setWindowTitle(tr("Digital Clock"));
}
void dijitalClock :: createWedgets(){
    hour = new QLCDNumber;
    hour->setDigitCount(2);

   minute = new QLCDNumber;
   minute->setDigitCount(2);

    second = new QLCDNumber;
    second->setDigitCount(2);
    //afficher le temps courant
    updateTime();
}

void dijitalClock :: placeWidgets(){
    QLayout *layout = new QHBoxLayout;
    setLayout(layout);
    layout->addWidget(hour);
    layout->addWidget(minute);
    layout->addWidget(second);

}
void dijitalClock ::updateTime(){
    //obtenir le temps actuel
 auto T =QTime::currentTime();

 hour->display(T.hour());
 minute->display(T.minute());
 second->display(T.second());


}

void dijitalClock :: timerEvent(QTimerEvent *e){
    updateTime();

}
