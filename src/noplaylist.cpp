#include <iostream>
#include <string>

#include "../include/musica.hpp"
#include "../include/noplaylist.hpp"
#include "../include/playlist.hpp"

using namespace std;

//Construtor padrão
Noplaylist::Noplaylist(){

}

//Construtor
Noplaylist::Noplaylist(Playlist *playlist){
    this->playlist1 = playlist;
    this->prox = NULL;
}

//Destrutor
Noplaylist::~Noplaylist(){}
