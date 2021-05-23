#include <iostream>
#include <string>

#include "../include/musica.hpp"
#include "../include/listaplaylist.hpp"
#include "../include/noplaylist.hpp"
#include "../include/playlist.hpp"

using namespace std;



//Construtor
Listaplaylist::Listaplaylist(){
    cabeca = NULL;
    cauda = cabeca;
}

//Destrutor
Listaplaylist::~Listaplaylist(){}

bool Listaplaylist::playlistExiste(string nome_playlist){
    Noplaylist *temp = this->cabeca;

    while(temp != NULL){
        if(temp->playlist1->nome_playlist == nome_playlist){
            //Playlist existe
            return true;
        }
        temp = temp->prox;
    }
    //Playlist não existe
    return false;
}

bool Listaplaylist::adicionaPlaylist(Playlist *playlist){

    Noplaylist *novo = new Noplaylist(playlist);
    Noplaylist *tmp = this->cabeca;

    //Checa se a lista é nula, se for insere a música na cabeca da lista
    if(cabeca == NULL){
       this->cabeca = novo;
       this->cauda = novo;
       cout << "Playlist adicionada com sucesso!" << endl << endl;
       return true;
    }
    else{
        while(tmp != NULL){
            //Checa se a música é igual
            //Mesmo nome de musica e artista
            if( tmp->playlist1->nome_playlist == novo->playlist1->nome_playlist ){
                cout << "Essa playlist já existe" << endl << endl;
                return false;
            }
        tmp = tmp->prox;
        }
        //Adiciona a playlist
        this->cauda->prox = novo;
        this->cauda = novo;
        cout << "Playlist adicionada com sucesso!!" << endl << endl;
        return true;
    }
}

bool Listaplaylist::deletaPlaylist(string playlist){

    Noplaylist *temp = this->cabeca;

    if(temp == NULL){
        cout << "Não há playlists cadastradas!!!" << endl;
        return false;
    }
    //Remover do início
    else if(temp->playlist1->nome_playlist == playlist){
        this->cabeca = temp->prox;
        cout << "Playlist removida com sucesso :D" << endl;
        return 1;
    }
    else{
        while(temp->prox != NULL){
            //Remover da última posição
            if(temp->prox->playlist1->nome_playlist == playlist and temp->prox->prox == NULL){
                this->cauda = temp;
                temp->prox = NULL;
                cout << "Playlist removida com sucesso :D" << endl;
                return true;
            }
            //Remover do meio da lista
            else if(temp->prox->playlist1->nome_playlist == playlist){
                temp->prox = temp->prox->prox;
                cout << "Playlist removida com sucesso :D"<< endl;
                return true;               
            }
            temp = temp->prox;
        }
    }
    cout << "Playlist inexistente :(" << endl;
    return false;    
}

void Listaplaylist::insereMusicaPlaylist(string nome_playlist, string nome_musica, string nome_artista){
    Noplaylist *temp = this->cabeca;
    
    Musica *musica = new Musica(nome_musica, nome_artista);
    No *novo = new No(musica);

    while(temp != NULL){
        if(temp->playlist1->nome_playlist == nome_playlist){
            No *temp2 = temp->playlist1->lista->cabeca;
            No *temp3 = temp->playlist1->lista->cauda;
            
            //Lista nula cabela nula
            if(temp2 == NULL){ 
                temp2 = novo;
                temp3 = novo;

                cout << "Música adicionada com sucesso!!!" << endl << endl;
                return;
            }
            //Lista não nula insere no fim
            else{
                temp3->prox = novo;
                temp3 = novo;
                return;
            }
        }
        temp = temp->prox;
    }
}

bool Listaplaylist::buscaMusicaPlaylistBool(string nome_playlist, string nome_musica, string nome_artista){
    Noplaylist *temp = this->cabeca;
    
    while(temp != NULL){
        if(temp->playlist1->nome_playlist == nome_playlist){
            No *temp2 = temp->playlist1->lista->cabeca;
            while(temp2 != NULL){
                if ( (temp2->musica1->titulo == nome_musica) and (temp2->musica1->nome_artista == nome_artista) ){
                    //Música encontrada na playlist
                    return true;
                }
                temp2 = temp2->prox;
            }
        }
        temp = temp->prox;
    }
    //Não há música igual na playlist
    return false;
}