#include "clock.h"
#include "timemanager.h"

Clock::Clock(QWidget* parent) : QGraphicsView(parent), hoursNeedle(0), minutesNeedle(0), secondsNeedle(0)
{
    resize(1000, 1000);

    scene = new QGraphicsScene;
    this->setScene(scene);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scene->setSceneRect(rect());

    //scene->addEllipse(190, 190, 20, 20, QPen(Qt::blue));
    setRenderHints(QPainter::Antialiasing | QPainter::HighQualityAntialiasing | QPainter::SmoothPixmapTransform);
    fitInView(scene->itemsBoundingRect() ,Qt::KeepAspectRatio);
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
}

void Clock::resizeEvent(QResizeEvent *)
{
    fitInView(scene->itemsBoundingRect() ,Qt::KeepAspectRatio);
}

void Clock::tickSecond()
{
    qreal ticksPerSecond = tickManager->getTicksPerSecond();

    if(hoursNeedle != 0)
        hoursNeedle->rotate((360.0 / 60.0 / 60.0 / 24.0) / ticksPerSecond);
    if(minutesNeedle != 0 && tickManager->getWaitZeroPosition() < 0.0001)
        minutesNeedle->rotate((360.0 / 60.0 / 60.0) / ticksPerSecond);
    if(secondsNeedle != 0)
        secondsNeedle->rotate((360.0 / 60.0) / ticksPerSecond);
}

void Clock::syncTime()
{
    QTime time = QTime::currentTime();

    qreal seconds = (qreal)time.second() + time.msec() / 1000.0;
    qreal minutes = (qreal)time.minute() + seconds / 60.0;
    qreal hours = (qreal)time.hour() + minutes / 60.0;
    if(hours >= 12.0)
        hours -= 12.0;

    if(tickManager->getWaitZeroPosition() > 0.0001)
        minutes = (qreal)time.minute();

    if(hoursNeedle != 0)
    {
        hoursNeedle->resetTransform();
        hoursNeedle->setRotation((360.0 / 12.0) * hours);
    }
    if(minutesNeedle != 0)
    {
        minutesNeedle->resetTransform();
        minutesNeedle->setRotation((360.0 / 60.0) * minutes);
    }
    if(secondsNeedle != 0)
    {
        secondsNeedle->resetTransform();
        secondsNeedle->setRotation((360.0 / 60.0) * seconds);
    }
}

void Clock::setTickManager(TickManager* tickManager)
{
    this->tickManager = tickManager;

    connect(tickManager, SIGNAL(sync()), this, SLOT(syncTime()));
    connect(tickManager, SIGNAL(tick()), this, SLOT(tickSecond()));

    syncTime();
}

void Clock::setSecondsNeedle(QPixmap& needle)
{
    secondsNeedle = scene->addPixmap(needle);
    secondsNeedle->setZValue(Z_SECONDS);
    addNeedle(secondsNeedle);
}

void Clock::setMinutesNeedle(QPixmap &needle)
{
    minutesNeedle = scene->addPixmap(needle);
    minutesNeedle->setZValue(Z_MINUTES);
    addNeedle(minutesNeedle);
}

void Clock::setHoursNeedle(QPixmap &needle)
{
    hoursNeedle = scene->addPixmap(needle);
    hoursNeedle->setZValue(Z_HOURS);
    addNeedle(hoursNeedle);
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
