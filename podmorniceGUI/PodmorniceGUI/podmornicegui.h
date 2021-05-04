#ifndef PODMORNICEGUI_H
#define PODMORNICEGUI_H

#include <QMainWindow>

namespace Ui {
class PodmorniceGUI;
}

class PodmorniceGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit PodmorniceGUI(QWidget *parent = 0);
    ~PodmorniceGUI();



private slots:
    void oboj();
    void on_postavi_clicked();

private:
    Ui::PodmorniceGUI *ui;
};


class Podmornica
{
private:
        char pravac;
        int duzina;
        QVector<int> vrsta_podm;
        QVector<int> kolona_podm;
        int pogodak;
        QString ime;
public:
    //konstruktor
    Podmornica(char d, int lgth, QVector<int> r, QVector<int> c, int hit, QString nme);
    Podmornica();

    //pogodili polje u podmornici, uvecavamo brojac
    void setPogodak();

    int proveriPotop(int duzinaPodm);

    //ispisujemo koordinate nase podmornice
    void koordinatePodmornice();
        //hocemo da vidimo koja je podmornica na datoj koordinati
    QString getPodmornica(int v, int k);
};



enum TipoviBroda{ Br1p=1,Br2p=2,Br3p=3,Br4p=4,Br5p=5};

void postaviTablu(int matrica[][10]);
// ispisujemo tablu sa brodovima
void ispisiTabluNaPocetkuIgre(int matrica[][10]);
// ispisujemo tablu bez brodova
void ispisiTabluPoslePogotka(int matrica[][10]);
// postavljamo podmornicu na tablu
bool postaviPodmornicu(int matrica[][10],int duzinaBroda,int ime,QVector<Podmornica> &listaBrodova);
// sledeca funkcija stavlja brojeve koji odgovaraju duzini podmornice, mi cemo umesto toga da
// stavljamo boje samo cu ja sad ovako da stavim da imamo
void promeniPolje(int matrica[][10],int kolona,int vrsta,int duzinaBroda,char smer);
//proveravmo da li nam se negde brodovi preklapaju
int proveriPreklapanje(int matrica[][10],int kolona,int vrsta,int s,char smer);
//trazimo rendom kolonu  i vrstu za svaki brod ali tako da nam ne izlete iz table
void izaberiVrsteiKolone(int& kolona,int& vrsta,int duzinaBorda,char smer);
// uz pomoc rendom funkcije generise da li cemo ici horizontalno ili vertikalno
char uzmiPravac(int p);
void izmeniTablu(int matrica[][10],int kolona,int vrsta,int duzinaPodmornice,int smer);
int izmeniPodmornicu(int kolona,int vrsta,int smer,QVector<Podmornica> &listaPodmornica,int ime);


#endif // PODMORNICEGUI_H
