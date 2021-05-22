#include <iostream>
#include <string>

#include "../include/musica.hpp"

using namespace std;

//Construtor
Musica::Musica(string nome, string artista){
    this->titulo = nome;
    this->nome_artista = artista;
}

//Destrutor padrão
Musica::~Musica(){}
