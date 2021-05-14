#include <iostream>
#include <string>

#include "../include/musica.hpp"
#include "../include/no.hpp"

using namespace std;

int main(){
    
    //Variáveis para armazenar a entrada do usuário
    string nome_musica, nome_artista;
    //Variável para armazenar a ação escolhida pelo usuário
    int op;

    while(1){
        //Requisita a ação para o programa realizar
        cout << "Digite a opção desejada: ";
        cin >> op;
        cout << endl;
        
        //Fecha o programa
        if(op == 0){
            break;
        }
        else if(op == 1){
            
        }
        else{
            cout << "Operador inválido" << endl;
        }

    return 0;
}