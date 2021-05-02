#ifndef POLJE_H
#define POLJE_H
#include<iostream>
#include<vector>
using namespace std;
class Podmornica
{
private:
        char pravac;
        int duzina;
        vector<int> vrsta_podm;
        vector<int> kolona_podm;
        int pogodak;
        string ime;
public:
    //konstruktor
    Podmornica(char d, int lgth, vector<int> r, vector<int> c, int hit, string nme);

    //pogodili polje u podmornici, uvecavamo brojac
    void setPogodak();

    int proveriPotop(int duzinaPodm);

    //ispisujemo koordinate nase podmornice
    void koordinatePodmornice();
        //hocemo da vidimo koja je podmornica na datoj koordinati
    string getPodmornica(int v, int k);
};


// sad cemo da deklarisemo neke funkcije koje su nam potrebne

// pravimo enum gde cemo smestiti brodove razlicite duzine
enum TipoviBroda{ Br1p=1,Br2p=2,Br3p=3,Br4p=4,Br5p=5};

void postaviTablu(int matrica[][10]);
// ispisujemo tablu sa brodovima
void ispisiTabluNaPocetkuIgre(int matrica[][10]);
// ispisujemo tablu bez brodova
void ispisiTabluPoslePogotka(int matrica[][10]);
// postavljamo podmornicu na tablu
bool postaviPodmornicu(int matrica[][10],int duzinaBroda,int ime,vector<Podmornica> &listaBrodova);
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
int izmeniPodmornicu(int matrica[][10],int kolona,int vrsta,int smer,vector<Podmornica> &listaPodmornica,int ime);




#endif // POLJE_H
