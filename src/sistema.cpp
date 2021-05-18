#include "../include/sistema.hpp"

using namespace std;

//Construtor
Sistema::Sistema(){
    this->listasistema = new Lista();
}
//Destrutor
Sistema::~Sistema(){}

bool Sistema::insereMusicaSistema(string nome_musica, string nome_artista){
    Musica *musica_criada = new Musica(nome_musica, nome_artista);
    return this->listasistema->insereMusica(musica_criada);
}

bool Sistema::deletaMusicaSistema(string nome_musica, string nome_artista){
    this->listasistema->deletaMusica(nome_musica, nome_artista);
}
