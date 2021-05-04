#include "pobeda.h"
#include "ui_pobeda.h"

Pobeda::Pobeda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pobeda)
{
    ui->setupUi(this);
}

Pobeda::~Pobeda()
{
    delete ui;
}
