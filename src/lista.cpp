#include <iostream>

#include "../include/lista.hpp"

using namespace std;

//Construtor
Lista::Lista(){
    cabeca = NULL;
    calda = cabeca;
}

//Destrutor
Lista::~Lista(){}

bool Lista::checaListaNula(){
    return this->cabeca == NULL;
}

bool Lista::insereMusica(Musica *musica){

    No *novo = new No(musica);
    No *tmp = this->cabeca;

    //Checa se a lista é nula, se for insere a música na cabeca da lista
    if(checaListaNula()){
       this->cabeca = novo;
       this->calda = novo;
       return true;
    }
    else{
        while(tmp != NULL){
            //Checa se a música é igual
            //Mesmo nome de musica e artista
            if( (tmp->musica1->titulo == novo->musica1->titulo) && (tmp->musica1->nome_artista == novo->musica1->nome_artista) ){
                cout << "Essa música já existe" << endl;
                return false;
            }
        tmp = tmp->prox;
        }
        //Adiciona a música
        this->calda->prox = novo;
        this->calda = novo;
        return true;
    }
}

No* Lista::buscaMusica(string nome, string artista){
    
    //temp salva o enderço a retornar
    No* temp = NULL;
    No *atual = this->cabeca;
    
    if(checaListaNula()){
        cout << "Não há musicas cadastradas !" << endl;
    }
    else{
        while(atual != NULL){
            if(atual->musica1->nome_artista == artista and atual->musica1->titulo == nome ){
                temp = atual;
            }
            atual = atual->prox;
        }
    }
    return temp;
}

bool Lista::deletaMusica(string nome, string artista){
    No *temp = this->cabeca;
    
    if(checaListaNula()){
        cout << "Não há musicas cadastradas !" << endl;
    }
    
    //Se a música estiver na primeira posição
    else if(temp->musica1->titulo == nome and temp->musica1->nome_artista == artista){
        this->cabeca = temp->prox;
        cout << "Removido do início" << endl;
        return true;
    }
    //Posições adiante
    else{
        while(temp->prox != NULL){
            //Se for remover da última posição
            if( (temp->prox->musica1->titulo == nome and temp->prox->musica1->nome_artista == artista) and temp->prox->prox == NULL){
                this->calda = temp;
                temp->prox = temp->prox->prox;
                cout << "Removido do fim" << endl;
                return true;
            }
            //Meio da lista
            else if( (temp->prox->musica1->titulo == nome and temp->prox->musica1->nome_artista == artista) ){
                temp->prox = temp->prox->prox;
                cout << "Removido do meio"<< endl;
                return true;
            }
            temp = temp->prox;
        }
    }
    cout << "Música inexistente" << endl;
    return false;
}