#include <iostream>
#include <string>

#include "../include/musica.hpp"
#include "../include/lista.hpp"
#include "../include/playlist.hpp"
#include "../include/sistema.hpp"
#include "../include/listaplaylist.hpp"
#include "../include/noplaylist.hpp"

using namespace std;


int main(){
    Sistema *sistema = new Sistema();

    //Armazenam as entradas do usuário
    string nome_musica, nome_artista, nome_playlist;
    //Armazena a ação escolhida pelo usuário
    int op;
    //Armazena a quantidade de músicas registradas no sistema
    int qtd_musicas = 0, qtd_playlists = 0;

    while(1){
        //Requisita a ação para o programa realizar
        cout << "Digite a opção desejada:";
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

        else if(op == 4){
            cout << "Insira o nome da playlist:";
            fflush(stdin);
            getline(cin,nome_playlist);
            cout << endl;

            if(sistema->adicionaPlaylistSistema(nome_playlist)){
                qtd_playlists++;
            }            
        }

        else{
            cout << "Operador inválido" << endl;
        }
    }
    return 0;
}
