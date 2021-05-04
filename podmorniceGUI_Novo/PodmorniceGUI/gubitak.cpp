#include "gubitak.h"
#include "ui_gubitak.h"

Gubitak::Gubitak(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gubitak)
{
    ui->setupUi(this);
}

Gubitak::~Gubitak()
{
    delete ui;
}
