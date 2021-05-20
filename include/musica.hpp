#ifndef MUSICA_HPP
#define MUSICA_HPP

#include <iostream>
#include <string>

using namespace std;


class Musica{
    //Atributos da classe
    public:
    string titulo;
    string nome_artista;
    
    public:
    //Métodos da classe
    Musica( string nome, string artista );
    ~Musica();
};

#endif