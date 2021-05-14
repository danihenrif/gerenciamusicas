#ifndef NODE_HPP
#define NODE_HPP

#include "../include/musica.hpp"

class No{
    //Atributos da classe
    public:
    Musica *musica1;
    No *prox = NULL;
    
    //Métodos da classe
    No(Musica *musica_entrada);
    ~No();
};

#endif