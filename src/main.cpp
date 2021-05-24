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
    string nome_musica, nome_artista, nome_playlist, nome_playlist_adicionada;
    //Armazena a ação escolhida pelo usuário
    int op, aux;
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
            cin >> nome_musica;
            cout << endl;

            cout << "Insira o nome do artista:";
            fflush(stdin);
            cin >> nome_artista;
            cout << endl;
        
            if(sistema->insereMusicaSistema(nome_musica, nome_artista)){
                qtd_musicas++;
            }

        }
        //Deleta música da lista
        else if(op == 2){

            cout << "Insira o nome da música:";
            fflush(stdin);
            cin >> nome_musica;
            cout << endl;

            cout << "Insira o nome do artista:";
            fflush(stdin);
            cin >> nome_artista;
            cout << endl;

            if(sistema->deletaMusicaSistema(nome_musica, nome_artista)){
                qtd_musicas--;
            }
        }
        //Lista músicas do sistema  
        else if(op == 3){
            sistema->listaMusicasSistema();
        }
        //Insere playlist
        else if(op == 4){
            cout << "Insira o nome da playlist:";
            fflush(stdin);
            getline(cin,nome_playlist);
            cout << endl;

            if(sistema->adicionaPlaylistSistema(nome_playlist)){
                qtd_playlists++;
            }            
        }
        //Deleta playlist
        else if(op == 5){
            cout << "Insira o nome da playlist:";
            fflush(stdin);
            getline(cin,nome_playlist);
            cout << endl;

            if(sistema->deletaPlaylistSistema(nome_playlist)){
                qtd_playlists--;
            }
        }
        //Lista playlists do sistema
        else if(op == 6){
            cout << "Listar playlist específica(1) ou Listar todas as playlists (2) :"; 
            fflush(stdin); //Limpa o cache
            cin >> aux;
            cout << endl;     
            
            if(aux == 1){
            cout << "Digite o nome da playlist: "; 
            fflush(stdin); //Limpa o cache
            cin >> nome_playlist;
            cout << endl;

            sistema->listaPlaylistsSistema(aux, nome_playlist);            
            }
            else if(aux == 2){
                sistema->listaPlaylistsSistema(aux, "\0");
            }
            else{
                cout << "Operador inválido :C" << endl << endl;
            }     
        }        
        //Insere musica em playlist
        else if(op == 7){
            cout << "Insira o nome da playlist:";
            fflush(stdin);
            getline(cin,nome_playlist);
            cout << endl;

            cout << "Insira o nome da música:";
            fflush(stdin);
            getline(cin,nome_musica);
            cout << endl;

            cout << "Insira o nome do artista:";
            fflush(stdin);
            getline(cin,nome_artista);
            cout << endl;

            sistema->insereMusicaPlaylistSistema(nome_playlist, nome_musica, nome_artista);
        }
        //Deleta música de playlist
        else if(op == 8){
            cout << "Insira o nome da playlist:";
            fflush(stdin);
            getline(cin,nome_playlist);
            cout << endl;

            cout << "Insira o nome da música:";
            fflush(stdin);
            getline(cin,nome_musica);
            cout << endl;

            cout << "Insira o nome do artista:";
            fflush(stdin);
            getline(cin,nome_artista);
            cout << endl;

            sistema->deletaMusicaPlaylistSistema(nome_playlist, nome_musica, nome_artista);
        }
        //Mover música entre playlists
        else if(op == 9){
            cout << "Insira o nome da playlist que a música será removida:";
            fflush(stdin);
            getline(cin,nome_playlist);
            cout << endl;

            cout << "Insira o nome da playlist que a música será adicionada:";
            fflush(stdin);
            getline(cin,nome_playlist_adicionada);
            cout << endl;

            cout << "Insira o nome da música:";
            fflush(stdin);
            getline(cin,nome_musica);
            cout << endl;

            cout << "Insira o nome do artista:";
            fflush(stdin);
            getline(cin,nome_artista);
            cout << endl;

            sistema->moverMusicaPlaylistSistema(nome_playlist, nome_musica, nome_artista, nome_playlist_adicionada);                        
        }
        //Printa quantidade de músicas e playlists cadastradas
        else if(op == 10){
            cout << "Existem " << qtd_musicas << " músicas cadastradas" << endl << "Existem " << qtd_playlists << " playlists cadastradas" << endl << endl; 
        }
        else{
            cout << "Operador inválido" << endl;
        }
    }
    return 0;
}
