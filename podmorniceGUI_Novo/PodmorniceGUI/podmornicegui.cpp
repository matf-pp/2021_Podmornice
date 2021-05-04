#include "podmornicegui.h"
#include "ui_podmornicegui.h"
#include"kreniigru.h"

int matrica[10][10];
int potopljenePodmornice=0;
QVector<Podmornica> listaPodmornica;
int pokusaji=0;

PodmorniceGUI::PodmorniceGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PodmorniceGUI)
{
    ui->setupUi(this);


}

PodmorniceGUI::~PodmorniceGUI()
{
    delete ui;
}


void postaviTablu(int matrica[][10]){
    for (int vrsta=0;vrsta<10;vrsta++)
        for(int kolona=0;kolona<10;kolona++)
            matrica[vrsta][kolona]=0;

}


void PodmorniceGUI::on_postavi_clicked()
{
       postaviTablu(matrica);
       listaPodmornica.clear();
       postaviPodmornicu(matrica,1,Br1p,listaPodmornica);
       postaviPodmornicu(matrica,2,Br2p,listaPodmornica);
       postaviPodmornicu(matrica,3,Br3p,listaPodmornica);
       postaviPodmornicu(matrica,4,Br4p,listaPodmornica);
       postaviPodmornicu(matrica,5,Br5p,listaPodmornica);
       potopljenePodmornice=0;
       pokusaji=0;

       KreniIgru drugiProzor;
       drugiProzor.setModal(true);
       drugiProzor.exec();


}
