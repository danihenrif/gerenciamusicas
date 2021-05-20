#include <iostream>
#include <string>

#include "../include/sistema.hpp"
#include "../include/musica.hpp"
#include "../include/no.hpp"

using namespace std;

int main(){
    Sistema *sistema = new Sistema();

    //Armazenam as entradas do usuário
    string nome_musica, nome_artista;
    //Armazena a ação escolhida pelo usuário
    int op;
    //Armazena a quantidade de músicas registradas no sistema
    int qtd_musicas = 0;

    while(1){
        //Requisita a ação para o programa realizar
        cout << "Digite a opção desejada: ";
        fflush(stdin); //Limpa o cache
        cin >> op;
        cout << endl;
        
        //Fecha o programa
        if(op == 0){
            cout << "Programa enterrado com sucesso !!!" << endl << endl;
            break;
        }
        //Insere música na lista
        else if(op == 1){
            
            cout << "Insira o nome da música:";
            fflush(stdin);
            getline(cin,nome_musica);
            cout << endl;

            cout << "Insira o nome do artista:";
            fflush(stdin);
            getline(cin,nome_artista);
            cout << endl;
        
            if(sistema->insereMusicaSistema(nome_musica, nome_artista)){
                qtd_musicas++;
            }

        }
        //Deleta música da lista
        else if(op == 2){

            cout << "Insira o nome da música:";
            fflush(stdin);
            getline(cin,nome_musica);
            cout << endl;

            cout << "Insira o nome do artista:";
            fflush(stdin);
            getline(cin,nome_artista);
            cout << endl;

            if(sistema->deletaMusicaSistema(nome_musica, nome_artista)){
                qtd_musicas--;
            }
        }

        else if(op == 3){
            sistema->listaMusicasSistema();
        }

        else{
            cout << "Operador inválido" << endl;
        }
    }
    return 0;
}
