#include "clock.h"
#include "ui_clock.h"

Clock::Clock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Clock)
{
    ui->setupUi(this);
    setWindowTitle(tr("Horloge"));
}

Clock::~Clock()
{
    delete ui;
}
