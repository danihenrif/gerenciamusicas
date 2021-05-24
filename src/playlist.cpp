#include <iostream>
#include <string>

#include "../include/musica.hpp"
#include "../include/no.hpp"
#include "../include/playlist.hpp"

using namespace std;

//Construtor padrão
Playlist::Playlist(){
}

//Construtor
Playlist::Playlist(string nome){
    this->nome_playlist = nome;
}

//Destrutor 
Playlist::~Playlist(){}


void Playlist::insereMusicaPlaylist(string nome_musica, string nome_artista){
    Musica *musica = new Musica(nome_musica, nome_artista);
    this->lista->insereMusica(musica);
}
