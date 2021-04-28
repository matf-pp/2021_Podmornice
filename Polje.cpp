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



int main()
{
    Podmornica podmornica('v',3,{1,1,1},{1,2,3,4},0," ");
    podmornica.koordinatePodmornice();


    return 0;

}