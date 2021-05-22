#ifndef NOPLAYLIST_HPP
#define NOPLAYLIST_HPP

#include <iostream>
#include <string>

#include "musica.hpp"
#include "playlist.hpp"

using namespace std;

class Noplaylist{
    //Atributos da classe
    public:
    Playlist *playlist1;
    Noplaylist *prox;

    //Métodos da classe
    Noplaylist();
    ~Noplaylist();

    Noplaylist(Playlist *playlist);
};
#endif
