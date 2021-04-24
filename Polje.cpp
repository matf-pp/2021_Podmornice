#include "polje.h"

namespace polja{
    Polje::Polje(){   
    }

    static bool Polje::provera(int x, int y){
        if(x<0 || y<0)
            return false;
        else
            return true;
    }
    void Polje::postavi(int x, int y){
        if(Polje::provera(x, y)){
            _x=x;
            _y=y;
        }else{
            _x=0;
            _y=0;
        }
    }
    Polje::Polje(int x, int y){
        postavi(x,y);
    }
    int Polje::vratiX() const{
        return _x;
    }
    int Polje::vratiY() const{
        return _y;
    }
}