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

bool Sistema::deletaPlaylistSistema(string playlist){
    return this->listaplaylist->deletaPlaylist(playlist);
}


void Sistema::insereMusicaPlaylistSistema(string nome_playlist, string nome_musica, string nome_artista){
    Noplaylist *endereco_playlist = NULL;
     
    /*//Checa se há playlists cadastradas
    if(this->listaplaylist->checaListaPlaylistNula()){
        cout << "Não há playlists cadastradas :D" << endl << endl;
        return;
    }

    //Checa se a música está no sistema
    if( !(this->listasistema->buscaMusicaBool(nome_musica, nome_artista) ) ){
        cout << "Insira primeiro a música no sistema para depois inserir na playlist!!!" << endl << endl;
        return;
    }
    


    //Checa se a playlist existe    
    if(endereco_playlist == NULL){
        cout << "A playlist não existe :D" << endl << endl;
        return;
    }

    //Checa se a música ja está na playlist
    if(this->listaplaylist->buscaMusicaPlaylistBool(nome_playlist, nome_musica, nome_artista, endereco_playlist)){
        cout << "A música ja está na playlist :D" << endl << endl;
        return;
    }*/

    endereco_playlist = this->listaplaylist->buscaPlaylist(nome_playlist);
    //Insere a música na playlist
    endereco_playlist->playlist1->insereMusicaPlaylist(nome_musica, nome_artista);

}
