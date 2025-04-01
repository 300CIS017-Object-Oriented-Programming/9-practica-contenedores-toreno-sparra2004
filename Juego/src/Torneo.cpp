//
// Created by santiago on 1/04/2025.
//
using namespace std;
#include "Torneo.h"
Torneo::Torneo() {
    inicializarDatos();
}

Torneo::~Torneo(){

}

void Torneo::registrarVideojuego(int codigo, string nombre, string genero, int dificultad){
    videojuegos[codigo] = new Videojuego(codigo, nombre, genero, dificultad);

}

void Torneo::registrarJugador(string nombreJugador, int nivel) {
    jugadores[nombreJugador] = new Jugador(nombreJugador, nivel);
}

Videojuego* Torneo:: buscarVideojuego(int codigo){
    for(auto& pair : videojuegos){
        if(pair.second->getCodigo() == codigo){
            return pair.second;
        }
    }
    return nullptr;
}

Jugador* Torneo::buscarJugador(string name) {
    for(auto& pair : jugadores){
        if(pair.second->getNombreJugador() == name){
            return pair.second;
        }
    }
    return nullptr;
}