#ifndef TIMEMANAGER_H
#define TIMEMANAGER_H

#include <QThread>
#include <QTime>

class TimeManager : public QThread
{
    Q_OBJECT

public:
    static TimeManager* getInstance();
    QTime getCurrentTime() const { return time; }
private:
    TimeManager();
    void run();
    void syncTime();

    static TimeManager* timeManager;
    int nbUpdate;
    QTime time;



private slots:
    void updateTime();
};

#endif // TIMEMANAGER_H
