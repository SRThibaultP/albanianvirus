#include "albanianvirus.h"
#include "ui_albanianvirus.h"

albanianVirus::albanianVirus(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::albanianVirus)
{
    ui->setupUi(this);
}

albanianVirus::~albanianVirus()
{
    delete ui;
}

