#include "pobeda.h"
#include "ui_pobeda.h"

Pobeda::Pobeda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pobeda)
{
    ui->setupUi(this);
    //QString s="ČESTITAMO, POGODILI STE PODMORNICE U";
    //s.append(QString::number(br_pokusaja));
    //s.append("POKUŠAJA!");
    //ui->label->setText(s);
   //setStyleSheet("#centralWidget {background-image: url(/maxresdefault.jpg)}");
}

Pobeda::~Pobeda()
{
    delete ui;
}
