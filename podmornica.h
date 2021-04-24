#ifndef PODMORNICA_H
#define PODMORNICA
#include "polje.h"
#include<iostream>
//videti sta raditi sa pocetnim poljem
//prostor imena za podmornice sa odgovarajucom klasom
namespace podmornice{
    class Podmornica
    {   
    public:
        Podmornica();

        
    private:
        polja::Polje _pocetnoPolje()
        char _pravac;
        int _velicina;
    };
    

#endif