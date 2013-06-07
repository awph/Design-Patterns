#ifndef TIMEMANAGER_H
#define TIMEMANAGER_H

#include <QObject>

class TimeManager : public QObject
{
    Q_OBJECT

public:
    static TimeManager* getInstance();
    long getCurrentTimeInMilliseconds() const { return currentTimeInMilliseconds; }
private:
    TimeManager();

    static TimeManager* timeManager;
    long currentTimeInMilliseconds;

private slots:
    void updateTime();
};

#endif // TIMEMANAGER_H
