#include <iostream>
#include <string>

#include "../include/musica.hpp"
#include "../include/no.hpp"

using namespace std;

//Construtor 
No::No(Musica *musica_entrada){
    this->musica1 = musica_entrada;
    this->prox = NULL;
}


//Destrutor
No::~No(){
    
}
