#include "../include/noplaylist.hpp"

//Construtor padrão
Noplaylist::Noplaylist(){

}

//Construtor
Noplaylist::Noplaylist(Playlist *playlist){
    this->playlist1 = playlist;
}

//Destrutor
Noplaylist::~Noplaylist(){}