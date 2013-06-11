#ifndef CLOCK_H
#define CLOCK_H

#include <QtGui>
#include "tickmanager.h"

class Clock : public QGraphicsView
{
    Q_OBJECT
    
public:
    Clock(QWidget *parent = 0);
    ~Clock();
    void setTickManager(TickManager* tickManager);
    void setSecondsNeedle(QPixmap& needle);
    void setMinutesNeedle(QPixmap& needle);
    void setHoursNeedle(QPixmap& needle);
    void setDial(QPixmap& bground);

public slots:
    void tickSecond();
    void syncTime();

protected:
    void resizeEvent(QResizeEvent*);
    
private:
    QGraphicsScene* scene;
    QGraphicsPixmapItem* hoursNeedle;
    QGraphicsPixmapItem* minutesNeedle;
    QGraphicsPixmapItem* secondsNeedle;
    QGraphicsPixmapItem* dial;
    QWidget* dateDisplay;

    TickManager* tickManager;

    int rot;

    const static int Z_DIAL = 0;
    const static int Z_DATE = 1;
    const static int Z_HOURS = 2;
    const static int Z_MINUTES = 3;
    const static int Z_SECONDS = 4;

    void addNeedle(QGraphicsPixmapItem* needle);
};

#endif // CLOCK_H
