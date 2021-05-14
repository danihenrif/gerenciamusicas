#include <iostream>

#include "../include/musica.hpp"
#include "../include/lista.hpp"
#include "../include/no.hpp"

using namespace std;

//Construtor
Musica::Musica(string nome, string artista){
    this->titulo = nome;
    this->nome_artista = artista;
}

//Destrutor padrão
Musica::~Musica(){}

