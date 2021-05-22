#ifndef NO_HPP
#define NO_HPP

#include <iostream>
#include <string>
#include "musica.hpp"

using namespace std;

class No{
    //Atributos da classe
    public:
    Musica *musica1;
    No *prox;
    
    //Métodos da classe
    No(Musica *musica_entrada);
    ~No();
};
#endif
