#ifndef LISTAPLAYLIST_HPP
#define LISTAPLAYLIST_HPP

#include "noplaylist.hpp"

class Listaplaylist{
    //Atributos da classe
    public:
    Noplaylist *cabeca;
    Noplaylist *cauda;

    //Métodos da classe
    Listaplaylist();
    ~Listaplaylist();
};

#endif