#ifndef MUSIC_HPP
#define MUSIC_HPP

#include <iostream>
#include <string>


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