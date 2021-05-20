#ifndef NOPLAYLIST_HPP
#define NOPLAYLIST_HPP

#include "playlist.hpp"

class Noplaylist{
    //Atributos da classe
    public:
    Playlist *playlist1;
    Noplaylist *prox = NULL;

    //Métodos da classe
    Noplaylist();
    ~Noplaylist();

    Noplaylist(Playlist *playlist);
};

#endif