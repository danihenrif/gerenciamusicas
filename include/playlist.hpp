#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

#include <iostream>
#include <string>

#include "lista.hpp"
#include "no.hpp"

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
    void insereMusicaPlaylist(string nome_musica, string nome_artista);
    
};
#endif
