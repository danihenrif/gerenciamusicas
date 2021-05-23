#ifndef LISTAPLAYLIST_HPP
#define LISTAPLAYLIST_HPP

#include <iostream>
#include <string>

#include "musica.hpp"
#include "noplaylist.hpp"
#include "playlist.hpp"

using namespace std;


class Listaplaylist{
    //Atributos da classe
    public:
    Noplaylist *cabeca;
    Noplaylist *cauda;

    //Métodos da classe
    Listaplaylist();
    ~Listaplaylist();

    bool playlistExiste(string nome_playlist);
    bool adicionaPlaylist(Playlist *playlist);
    bool deletaPlaylist(string playlist);
    void insereMusicaPlaylist(string nome_playlist, string nome_musica, string nome_artista);
    bool buscaMusicaPlaylistBool(string nome_playlist, string nome_musica, string nome_artista);

};
#endif
