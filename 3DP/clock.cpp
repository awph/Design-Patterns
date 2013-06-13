#include "clock.h"
#include "timemanager.h"
#include "handler.h"
#include <QGLWidget>

Clock::Clock(QWidget* parent) : QGraphicsView(parent), hoursNeedle(0), minutesNeedle(0), secondsNeedle(0), dial(0), dateDisplay(0)
{
    resize(1000, 1000);

    scene = new QGraphicsScene(this);
    this->setScene(scene);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scene->setSceneRect(rect());

    //scene->addEllipse(190, 190, 20, 20, QPen(Qt::blue));
    setRenderHints(QPainter::Antialiasing | QPainter::HighQualityAntialiasing | QPainter::SmoothPixmapTransform);
    fitInView(scene->itemsBoundingRect() ,Qt::KeepAspectRatio);
    setViewport(new QGLWidget(QGLFormat(QGL::DoubleBuffer), this));

    handler = new HandlerDate(0);
    handler = new HandlerHour(handler);
    handler = new HandlerMinutes(handler);
    handler = new HandlerSeconds(handler);
}

Clock::~Clock()
{
    if(hoursNeedle != 0)
        delete hoursNeedle;
    if(minutesNeedle != 0)
        delete minutesNeedle;
    if(secondsNeedle != 0)
        delete secondsNeedle;
    if(dial != 0)
        delete dial;
    if(dateDisplay != 0)
        delete dateDisplay;

    delete handler;
}

void Clock::resizeEvent(QResizeEvent *)
{
    fitInView(scene->itemsBoundingRect() ,Qt::KeepAspectRatio);
}

void Clock::syncTime()
{
    //QTime time = QTime::currentTime();
    QTime time = TimeManager::getInstance()->getCurrentTime();
    int day = QDate::currentDate().day();

    handler->rotateNeedle(time, day);
}

void Clock::setTickManager(TickManager* tickManager)
{
    this->tickManager = tickManager;
    ((HandlerSeconds*)handler)->setTopWaitTime(tickManager->getWaitZeroPosition());

    connect(tickManager, SIGNAL(tick()), this, SLOT(syncTime()));

    syncTime();
}

void Clock::setSecondsNeedle(QPixmap& needle, int nbTicksPerTour)
{
    secondsNeedle = scene->addPixmap(needle);
    secondsNeedle->setZValue(Z_SECONDS);
    addNeedle(secondsNeedle);
    handler->setNeedle(secondsNeedle, nbTicksPerTour, Second);
}

void Clock::setMinutesNeedle(QPixmap &needle, int nbTicksPerTour)
{
    minutesNeedle = scene->addPixmap(needle);
    minutesNeedle->setZValue(Z_MINUTES);
    addNeedle(minutesNeedle);
    handler->setNeedle(minutesNeedle, nbTicksPerTour, Minute);
}

void Clock::setHoursNeedle(QPixmap &needle, int nbTicksPerTour)
{
    hoursNeedle = scene->addPixmap(needle);
    hoursNeedle->setZValue(Z_HOURS);
    addNeedle(hoursNeedle);
    handler->setNeedle(hoursNeedle, nbTicksPerTour, Hour);
}

void Clock::setDateDisplay(QPixmap &dateCircle)
{
    dateDisplay = scene->addPixmap(dateCircle);
    dateDisplay->setZValue(Z_DATE);
    addNeedle(dateDisplay);
    handler->setNeedle(dateDisplay, 31, Date);
}

void Clock::addNeedle(QGraphicsPixmapItem *needle)
{
    needle->setOffset(-(qreal)needle->pixmap().width() / 2.0, -(qreal)needle->pixmap().height() / 2.0);
    needle->setPos(scene->width() / 2.0, scene->height() / 2.0);
}

void Clock::setDial(QPixmap &bground)
{
    dial = scene->addPixmap(bground);
    dial->setPos(0, 0);
    dial->setZValue(Z_DIAL);
}
