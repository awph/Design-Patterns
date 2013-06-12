#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clock.h"
#include "rolexclockbuilder.h"
#include "cffclockbuilder.h"
#include "swatchclockbuilder.h"
#include "ttouchclockbuilder.h"
#include "watchmaker.h"

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
    QStringList sl;
    sl << "Rolex" << "CFF" << "T-Touch (Gomme)" << "T-Touch (Acier)" << "Swatch (Verte)" << "Swatch (Rose)" << "Swatch (Bleue)" << "Swatch (Orange foncé)" << "Swatch (Orange clair)";
    bool ok;
    QString choice = QInputDialog::getItem(this, tr("Type de montre"), tr("Quel type de montre souhaitez-vous créer ?"), sl, 0, false, &ok);
    if(!ok)
        return;

    ClockBuilder* builder;
    switch(sl.indexOf(choice))
    {
    case 0:
        builder = new RolexClockBuilder();
        break;
    case 1:
        builder = new CFFClockBuilder();
        break;
    case 2:
        builder = new TTouchClockBuilder(Plast);
        break;
    case 3:
        builder = new TTouchClockBuilder(Steel);
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        builder = new SwatchClockBuilder((SwatchColor)(sl.indexOf(choice) -3));
        break;
    }

    watchmaker.setBuilder(builder);
    watchmaker.constructClock();
    Clock* c = watchmaker.getClock();

    QMdiSubWindow* mdiChild = ui->mdiArea->addSubWindow(c);
    mdiChild->resize(400, 400);
    mdiChild->show();
}
