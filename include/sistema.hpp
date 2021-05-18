#ifndef SISTEMA_HPP
#define SISTEMA_HPP

#include <iostream>
#include <string>

#include "lista.hpp"
#include "musica.hpp"
#include "no.hpp"

class Sistema{
    //Atributos da classe
    public:
    Lista *listasistema;

    //Métodos da classe
    public:
    Sistema();
    ~Sistema();

    bool insereMusicaSistema(string nome_musica, string nome_artista);
    bool deletaMusicaSistema(string nome_musica, string nome_artista);

};

#endif