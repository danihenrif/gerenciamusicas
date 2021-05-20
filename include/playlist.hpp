#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

#include <iostream>
#include "lista.hpp"

using namespace std;

class Playlist{
    //Atributos da classe
    public:
    string nome_playlist;
    Lista *lista;

    //Métodos da classe
    Playlist();
    ~Playlist();
    
    Playlist(string nome);
    
};

#endif