//
// Created by santiago on 1/04/2025.
//
using namespace std;
#include "Torneo.h"
Torneo::Torneo() {
}

Torneo::~Torneo(){
    for(auto& pair : videojuegos){
        delete pair.second;
        videojuegos.clear();
    }
    for(auto& pair: jugadores){
        delete pair.second;
        jugadores.clear();
    }

}

void Torneo::registrarVideojuego(int codigo, string nombre, string genero, int dificultad){
    Videojuego* videojuego = buscarVideojuego(codigo);
    if(videojuego){
        cout << "Ya se encuentra el videoJuego\n";
        return;
    }
    videojuegos[codigo] = new Videojuego(codigo, nombre, genero, dificultad);

}
void Torneo::mostrarVideojuegosDeJugador(string name) {
    auto it = jugadores.find(name);
    if(jugadores.empty()){
        cout << "  (No tiene videojuegos registrados)\n";
    }
    else{
        for( auto& pair : videojuegos){
            pair.second->mostrarInfo();
        }
    }
}

void Torneo::registrarJugador(string nombreJugador, int nivel) {
    Jugador* jugador = buscarJugador(nombreJugador);
    if(jugador){
        cout << "Ya se encuentra el jugador registrado\n";
        return;
    }
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