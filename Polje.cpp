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
    Podmornica(char d, int lgth, vector<int> r, vector<int> c, int hit, string nme)
    {
        pravac=d;
        duzina=lgth;
        vrsta_podm=r;
        kolona_podm=c;
        pogodak=hit;
        ime=nme;
    }

    //pogodili polje u podmornici, uvecavamo brojac
    void setPogodak()
    {
        pogodak++;
    }

    int proveriPotop(int duzinaPodm)
    {
        //ako imamo pogodaka koliko je podmornica dugacka mi smo je potopili
        if(pogodak>=duzinaPodm)
        {
            return 9;
        }
        else
        {
            return 0;
        }
    }

    //ispisujemo koordinate nase podmornice
    void koordinatePodmornice()
    {
        cout << "Koordinate podmornice su: " << ime << endl << endl;
        for(int i=0; i<duzina; i++)
        {
            cout << " [" << vrsta_podm[i] << "][" << kolona_podm[i] << "]" << endl;
        }
        cout << endl;
    }

        //hocemo da vidimo koja je podmornica na datoj koordinati
    string getPodmornica(int v, int k)
    {
        for(int i=0; i<duzina; i++)
        {
            if((vrsta_podm[i]==v) && (kolona_podm[i]==k))
            {
                return ime;
            }
        }
            return "";
        }   
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






void postaviTablu(int matrica[][10]){
    for (int vrsta=0;vrsta<10;vrsta++)
        for(int kolona=0;kolona<10;kolona++)
            matrica[vrsta][kolona]=0;
                    
}


void ispisiTabluNaPocetkuIgre(int matrica[][10])
{
     cout << "   0|1|2|3|4|5|6|7|8|9" << endl << endl;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(j==0)
            {
                cout << i << "  " ;
            }
            cout << matrica[i][j] ;
            if(j!=9)
            {
                cout << "|";
            }
        }
    cout << endl; //new line at end of column
    }
    cout << endl;
}



void ispisiTabluPoslePogotka(int matrica[][10]){

     cout << "   0|1|2|3|4|5|6|7|8|9" << endl << endl;
    for(int i=0; i<10; i++) //vrste
    {
        for(int j=0; j<10; j++)  //kolone
        {
            if(j==0)
                cout << i << "  " ; //ako smo na pocetku vrste ispisi njen redni broj


            if(matrica[i][j]==1)  //ako na ovom polju ima nesto i mi smo to pogodili, ispisi 1
            {
                cout << 1;
            } else if(matrica[i][j]==9)  //ako smo gadjali i nema nista, pisi 9
            {
                cout << 9;
            } else
            {
                cout << 0;  //inace, nase mesto nedodirnuto i samo nek ostane nula
            }

            if(j!=9)
                cout << "|";
        }
    cout << endl;
    }
    cout << endl;
}

char uzmiPravac(int p)
{
    if(p>4)
    {
        return 'h'; //rendom izabrali u kom ce nam pravcu ici podmornica
    }else 
    {
        return 'v';
    }
}



/*MISLIM DA FUNKCIJA U NASTAVKU NE MORA BITI RAZDVOJENA NA DVA
SLUCAJA PROVERI POSLE!!!*/


bool postaviPodmornicu(int matrica[][10],int duzinaBroda,int ime,vector<Podmornica> &listaBrodova)
{
    srand(time(0)); // utice na fju rand tako sto je pravi jos vise random
    int vrsta=0;
    int kolona = 0;
    char smer ='v';
    bool neuspesnoPostavljeno=true;
    int cs=0;
    smer = uzmiPravac(rand()%10);
    izaberiVrsteiKolone(kolona,vrsta,duzinaBroda,smer);


    while(neuspesnoPostavljeno)
    {
        if (smer=='h')
        {
            cs = proveriPreklapanje(matrica,kolona,vrsta,duzinaBroda,smer);
            // proveravamo da vidimo da li se vec neka podmornica nalazi na ovom mestu
        
            if (cs==1)   //imamo vec neko polje ovde ne mozemo da postavimo podmornicu gde smo hteli
                        // genrisemo opet random kolonu vrstu i smer i ajmo opet        
        
            {
                smer = uzmiPravac(rand()%10);
                izaberiVrsteiKolone(kolona,vrsta,duzinaBroda,smer);
                cs=0;
                continue;
            }
            izmeniTablu(matrica,kolona,vrsta,duzinaBroda,smer);
            //stavlja pormornicu na tablu

            izmeniPodmornicu(matrica,kolona,vrsta,smer,listaBrodova,ime);
            // kreira objekat Podmornica

            return 0;//nis spec samo znamo da smo uspeli da postavimo podmornicu na tablu
        
        }else if (smer=='v')
        {
            cs = proveriPreklapanje(matrica,kolona,vrsta,duzinaBroda,smer);
            // proveravamo da vidimo da li se vec neka podmornica nalazi na ovom mestu
        
            if (cs==1)   //imamo vec neko polje ovde ne mozemo da postavimo podmornicu gde smo hteli
                        // genrisemo opet random kolonu vrstu i smer i ajmo opet        
        
            {
                smer = uzmiPravac(rand()%10);
                izaberiVrsteiKolone(kolona,vrsta,duzinaBroda,smer);
                cs=0;
                continue;
            }
            izmeniTablu(matrica,kolona,vrsta,duzinaBroda,smer);
            //stavlja pormornicu na tablu

            izmeniPodmornicu(matrica,kolona,vrsta,smer,listaBrodova,ime);
            // kreira objekat Podmornica

            return 0;//nis spec samo znamo da smo uspeli da postavimo podmornicu na tablu
        
        }
        
    }

}


int proveriPreklapanje(int matrica[][10],int kolona,int vrsta,int s,char smer)
{
    int provera = 0;
    // proveravamo po vrsti
    if(smer=='h')
    {
        for (int i=kolona;i<kolona+s;i++)
        {
            provera=matrica[vrsta][i];
                if(provera!=0)
                {
                    return 1;//ima vec nesto na polju pa vracamo jedan
                }
        }

        return 0; // fiksirana vrsta, prolazimo po kolonama da vidimo ima li necega
    }else
    {
        //fiksiramo kolonu, prolazimo po kolonama gledamo ima li necega
        for(int i=vrsta;i<vrsta+s;i++)
        {
            provera=matrica[i][kolona];
            if(provera!=0)
               /* condition */ {
                    return 1;

                }
        }
        return 0;
    
    }
}



void izaberiVrsteiKolone(int& kolona,int& vrsta,int duzinaBroda,char smer)
{
    // ovde je bitno da vodimo racuna o tome koja podmornica moze da uzme koja polja a da jos uvek postoji
    // na primer, za horizontalnu podmornicu duzine 2 znamo da moze da uzmemo bilo koju kolonu za pocetak,
    // ali moramo da vodimo racuna o tome da ne uzima indeks veci od 7 jer kad bi pocela na osmom indeksu prelsa
    // bi preko nase tabele

    //vratice referencu na vrste i kolone koje su nam potrebne

    switch(duzinaBroda)
    {
    case Br1p:
    if(smer=='h')
        {
            kolona = rand()%10;
            vrsta = rand()%10;
        }else
        {
            kolona = rand()%10;
            vrsta = rand()%10;
        }
        break;
    case Br2p:
        if(smer=='h')
        {
            kolona = rand()%8;
            vrsta = rand()%10;
        }else
        {
            kolona = rand()%10;
            vrsta = rand()%8;
        }
        break;
    case Br3p:
    if(smer=='h')
        {
            kolona = rand()%7;
            vrsta = rand()%10;
        }else
        {
            kolona = rand()%7;
            vrsta = rand()%10;
        }
        break;
    case Br4p:
        if(smer=='h')
        {
            kolona = rand()%6;
            vrsta = rand()%10;
        }else
        {
            kolona = rand()%6;
            vrsta = rand()%10;
        }
        break;

    case Br5p:
    if(smer=='h')
        {
            kolona = rand()%5;
            vrsta = rand()%10;
        }else
        {
            kolona = rand()%5;
            vrsta = rand()%10;
        }
        break;
    }
}




void izmeniTablu(int matrica[][10],int kolona,int vrsta,int duzinaPodmornice,int smer)
{
    if(smer=='h'){
        for(int i=0;i<duzinaPodmornice;i++)
        {
            matrica[vrsta][kolona] = duzinaPodmornice;
            kolona++;
            cout<<endl;
        }
    }
    else if(smer=='v')
    {
        for(int i=0;i<duzinaPodmornice;i++)
        {
            matrica[vrsta][kolona] = duzinaPodmornice;
            vrsta++;
            cout<<endl;
        }
    
    }else
    {
        cout << "Greska! Nije prosledjen pravac.";
    }
    
    
}



int izmeniPodmornicu(int matrica[][10],int kolona,int vrsta,int smer,vector<Podmornica> &listaPodmornica,int ime)
{
    switch (ime)
    {
        case Br5p:
            if(smer =='h')
            {
                vector<int> r1 (5);
                vector<int> c1(5);
                for(int i=0;i<(int)r1.size();i++)
                        r1.at(i)=vrsta;//stavili smo koordinate vrste,posto je
                                        //podmornica horizontalna svuda je ista koordinata vrste
                for(int i=0;i<(int)c1.size();i++)
                    c1.at(i) = kolona;
                    kolona++;   // za kolone u ovom slucaju uvecavamo jer je podmornica postavljena horizontalno
            
            Podmornica podmornica5('h',5,r1,c1,0,"Podmornica duzine 5");
            listaPodmornica.push_back(podmornica5);
            
            }else if(smer=='v')
            {
                vector<int> r1 (5);
                vector<int> c1 (5);

                for(int i=0;i<(int)c1.size();i++)
                        c1.at(i)=kolona;//stavili smo koordinate vrste,posto je
                                        //podmornica horizontalna svuda je ista koordinata vrste
                for(int i=0;i<(int)r1.size();i++)
                    r1.at(i) = vrsta;
                    vrsta++;   // za kolone u ovom slucaju uvecavamo jer je podmornica postavljena horizontalno
            
            Podmornica podmornica5('v',5,r1,c1,0,"Podmornica duzine 5");
            listaPodmornica.push_back(podmornica5);

            }
            break;

        case Br4p:
            if(smer =='h')
            {
                vector<int> r1 (4);
                vector<int> c1(4);
                for(int i=0;i<(int)r1.size();i++)
                        r1.at(i)=vrsta;//stavili smo koordinate vrste,posto je
                                        //podmornica horizontalna svuda je ista koordinata vrste
                for(int i=0;i<(int)c1.size();i++)
                    c1.at(i) = kolona;
                    kolona++;   // za kolone u ovom slucaju uvecavamo jer je podmornica postavljena horizontalno
            
            Podmornica podmornica4('h',4,r1,c1,0,"Podmornica duzine 4");
            listaPodmornica.push_back(podmornica4);
            }else if(smer=='v')
            {
                vector<int> r1 (4);
                vector<int> c1 (4);

                for(int i=0;i<(int)c1.size();i++)
                        c1.at(i)=kolona;//stavili smo koordinate vrste,posto je
                                        //podmornica horizontalna svuda je ista koordinata vrste
                for(int i=0;i<(int)r1.size();i++)
                    r1.at(i) = vrsta;
                    vrsta++;   // za kolone u ovom slucaju uvecavamo jer je podmornica postavljena horizontalno
            
            Podmornica podmornica4('v',4,r1,c1,0,"Podmornica duzine 4");
            listaPodmornica.push_back(podmornica4);
            }
            break;

        case Br3p:
            if(smer =='h')
            {
                vector<int> r1 (3);
                vector<int> c1(3);
                for(int i=0;i<(int)r1.size();i++)
                        r1.at(i)=vrsta;//stavili smo koordinate vrste,posto je
                                        //podmornica horizontalna svuda je ista koordinata vrste
                for(int i=0;i<(int)c1.size();i++)
                    c1.at(i) = kolona;
                    kolona++;   // za kolone u ovom slucaju uvecavamo jer je podmornica postavljena horizontalno
            
            Podmornica podmornica3('h',3,r1,c1,0,"Podmornica duzine 3");
            listaPodmornica.push_back(podmornica3);
            
            }else if(smer=='v')
            {
                vector<int> r1 (3);
                vector<int> c1 (3);

                for(int i=0;i<(int)c1.size();i++)
                        c1.at(i)=kolona;//stavili smo koordinate vrste,posto je
                                        //podmornica horizontalna svuda je ista koordinata vrste
                for(int i=0;i<(int)r1.size();i++)
                    r1.at(i) = vrsta;
                    vrsta++;   // za kolone u ovom slucaju uvecavamo jer je podmornica postavljena horizontalno
            
            Podmornica podmornica3('v',3,r1,c1,0,"Podmornica duzine 3");
            listaPodmornica.push_back(podmornica3);
            }
            break;

        case Br2p:
            if(smer =='h')
            {
                vector<int> r1 (2);
                vector<int> c1 (2);
                for(int i=0;i<(int)r1.size();i++)
                        r1.at(i)=vrsta;//stavili smo koordinate vrste,posto je
                                        //podmornica horizontalna svuda je ista koordinata vrste
                for(int i=0;i<(int)c1.size();i++)
                    c1.at(i) = kolona;
                    kolona++;   // za kolone u ovom slucaju uvecavamo jer je podmornica postavljena horizontalno
            
            Podmornica podmornica2('h',2,r1,c1,0,"Podmornica duzine 2");
            listaPodmornica.push_back(podmornica2);
            
            }else if(smer=='v')
            {
                vector<int> r1 (2);
                vector<int> c1 (2);

                for(int i=0;i<(int)c1.size();i++)
                        c1.at(i)=kolona;//stavili smo koordinate vrste,posto je
                                        //podmornica horizontalna svuda je ista koordinata vrste
                for(int i=0;i<(int)r1.size();i++)
                    r1.at(i) = vrsta;
                    vrsta++;   // za kolone u ovom slucaju uvecavamo jer je podmornica postavljena horizontalno
            
            Podmornica podmornica2('v',2,r1,c1,0,"Podmornica duzine 2");
            listaPodmornica.push_back(podmornica2);
            }
            break;

        case Br1p:
            if(smer =='h')
            {
                vector<int> r1 (1);
                vector<int> c1(1);
                for(int i=0;i<(int)r1.size();i++)
                        r1.at(i)=vrsta;//stavili smo koordinate vrste,posto je
                                        //podmornica horizontalna svuda je ista koordinata vrste
                for(int i=0;i<(int)c1.size();i++)
                    c1.at(i) = kolona;
                    kolona++;   // za kolone u ovom slucaju uvecavamo jer je podmornica postavljena horizontalno
            
            Podmornica podmornica1('h',1,r1,c1,0,"Podmornica duzine 1");
            listaPodmornica.push_back(podmornica1);
            
            }else if(smer=='v')
            {
                vector<int> r1 (1);
                vector<int> c1 (1);

                for(int i=0;i<(int)c1.size();i++)
                        c1.at(i)=kolona;//stavili smo koordinate vrste,posto je
                                        //podmornica horizontalna svuda je ista koordinata vrste
                for(int i=0;i<(int)r1.size();i++)
                    r1.at(i) = vrsta;
                    vrsta++;   // za kolone u ovom slucaju uvecavamo jer je podmornica postavljena horizontalno
            
            Podmornica podmornica1('v',1,r1,c1,0,"Podmornica duzine 1");
            listaPodmornica.push_back(podmornica1);
            }
            break;
    
    }
}




int main()
{
    Podmornica podmornica('v',3,{1,1,1},{1,2,3,4},0," ");
    podmornica.koordinatePodmornice();
    int matrica[10][10];
    postaviTablu(matrica);
    ispisiTabluNaPocetkuIgre(matrica);
    ispisiTabluPoslePogotka(matrica);
    vector<Podmornica> listica;
    izmeniPodmornicu(matrica,5,5,'v',listica,1);

    return 0;

}