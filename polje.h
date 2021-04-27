#ifndef POLJE_H
#define POLJE_H
#include<iostream>

//prostor imena za polja na konzoli, 
//svako polje ce biti par (x,y), x i y su int
namespace polja{
    class Polje
    {
    public:
        Polje();
        Polje(int x, int y);
        int vratiX() const;
        int vratiY() const;
        static bool provera(int x, int y);
        void postavi(int x, int y);
    private:
        int _x;
        int _y;
    };
    //std::ostream& operator << (std::ostream& ostr, const Polje& p);
    //std::istream& operator >> (std::istream& istr,  Polje& p);

}

#endif