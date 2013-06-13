#ifndef CLOCK_H
#define CLOCK_H

#include <QtGui>
#include "tickmanager.h"
#include "handler.h"

class Clock : public QGraphicsView
{
    Q_OBJECT
    
public:
    Clock(QWidget *parent = 0);
    ~Clock();
    void setTickManager(TickManager* tickManager);
    void setSecondsNeedle(QPixmap& needle, int nbTicksPerTour);
    void setMinutesNeedle(QPixmap& needle, int nbTicksPerTour);
    void setHoursNeedle(QPixmap& needle, int nbTicksPerTour);
    void setDateDisplay(QPixmap& dateCircle);
    void setDial(QPixmap& bground);

public slots:
    void syncTime();

protected:
    void resizeEvent(QResizeEvent*);
    
private:
    QGraphicsScene* scene;
    QGraphicsPixmapItem* hoursNeedle;
    QGraphicsPixmapItem* minutesNeedle;
    QGraphicsPixmapItem* secondsNeedle;
    QGraphicsPixmapItem* dial;
    QGraphicsPixmapItem* dateDisplay;
    Handler* handler;

    TickManager* tickManager;

    const static int Z_DIAL = 1;
    const static int Z_DATE = 0;
    const static int Z_HOURS = 2;
    const static int Z_MINUTES = 3;
    const static int Z_SECONDS = 4;

    void addNeedle(QGraphicsPixmapItem* needle);
};

#endif // CLOCK_H
