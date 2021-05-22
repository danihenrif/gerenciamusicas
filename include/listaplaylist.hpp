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

    bool adicionaPlaylist(Playlist *playlist);

};
#endif
