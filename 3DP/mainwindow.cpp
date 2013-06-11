#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clock.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAjouter_triggered()
{
    Clock* c = new Clock(this);
    c->setSecondsNeedle(*(new QPixmap(":/cff/seconds")));
    c->setMinutesNeedle(*(new QPixmap(":/cff/minutes")));
    c->setHoursNeedle(*(new QPixmap(":/cff/hours")));
    c->setDial(*(new QPixmap(":/cff/dial")));
    TickManagerType type;
    type.ticksPerSecond = 20;
    type.waitZeroPosition = 1.5;
    c->setTickManager(TickManager::getTickManager(type));
    QMdiSubWindow* mdiChild = ui->mdiArea->addSubWindow(c);
    mdiChild->resize(400, 400);
    mdiChild->show();
}
