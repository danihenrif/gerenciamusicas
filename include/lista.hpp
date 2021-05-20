#ifndef LISTA_HPP
#define LISTA_HPP

#include <iostream>
#include <string>

#include "no.hpp"
#include "musica.hpp"

class Lista{
    //Atributos da classe
    public:
    No *cabeca;
    No *cauda;

    //Métodos da classe
    public:
    Lista();
    ~Lista();
    
    bool checaListaNula();
    bool insereMusica(Musica *musica);
    No* buscaMusica(string nome, string artista);
    bool deletaMusica(string nome, string artista);
    void listaMusicas();


};

#endif