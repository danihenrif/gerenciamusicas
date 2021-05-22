#include <iostream>
#include <string>

#include "../include/sistema.hpp"
#include "../include/lista.hpp"
#include "../include/musica.hpp"
#include "../include/no.hpp"
#include "../include/listaplaylist.hpp"
#include "../include/playlist.hpp"
#include "../include/noplaylist.hpp"
#include "../include/musica.hpp"

using namespace std;


//Construtor
Sistema::Sistema(){
    this->listasistema = new Lista();
    this->listaplaylist = new Listaplaylist();
}
//Destrutor
Sistema::~Sistema(){}

bool Sistema::insereMusicaSistema(string nome_musica, string nome_artista){
    Musica *musica_criada = new Musica(nome_musica, nome_artista);
    return this->listasistema->insereMusica(musica_criada);
}

bool Sistema::deletaMusicaSistema(string nome_musica, string nome_artista){
    return this->listasistema->deletaMusica(nome_musica, nome_artista);
}

void Sistema::listaMusicasSistema(){
    this->listasistema->listaMusicas();
}

bool Sistema::adicionaPlaylistSistema(string playlist){
    Playlist *playlist_criada = new Playlist(playlist);
    return this->listaplaylist->adicionaPlaylist(playlist_criada);
}

