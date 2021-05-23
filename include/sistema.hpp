#ifndef SISTEMA_HPP
#define SISTEMA_HPP

#include <iostream>
#include <string>


#include "lista.hpp"
#include "musica.hpp"
#include "no.hpp"
#include "listaplaylist.hpp"
#include "playlist.hpp"
#include "noplaylist.hpp"
#include "musica.hpp"

using namespace std;


class Sistema{
    //Atributos da classe
    public:
    Lista *listasistema;
    Listaplaylist *listaplaylist;

    //Métodos da classe
    public:
    Sistema();
    ~Sistema();

    bool insereMusicaSistema(string nome_musica, string nome_artista);
    bool deletaMusicaSistema(string nome_musica, string nome_artista);
    void listaMusicasSistema();
    bool adicionaPlaylistSistema(string playlist);
    bool deletaPlaylistSistema(string playlist);  
    void insereMusicaPlaylistSistema(string nome_playlist, string nome_musica, string nome_artista);
};
#endif
