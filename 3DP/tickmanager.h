#ifndef TICKMANAGER_H
#define TICKMANAGER_H

#include <QObject>
#include <QMap>
#include <QPair>
#include <QTimer>

struct TickManagerType
{
    qreal ticksPerSecond;
    qreal waitZeroPosition;
};

class TickManager : public QObject
{
    Q_OBJECT

public:
    static TickManager* getTickManager(TickManagerType type);
    qreal getTicksPerSecond();
    long getWaitZeroPosition();

private:
    TickManager(TickManagerType type);
    TickManagerType type;
    QTimer* timerRunning;
    QTimer* timerTop;

    // How much ticks before stopping the timer
    int countRunning;
    int counterRunning;
private slots:
    void elapsed();
    void start();
    void resync();

signals:
    void tick();
    void sync();
};

#endif // TICKMANAGER_H
