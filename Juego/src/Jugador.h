//
// Created by santiago on 1/04/2025.
//

#ifndef JUEGO_JUGADOR_H
#define JUEGO_JUGADOR_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;
class Videojuego;
class Jugador {
private:
    string nickName;
    int nivel;
    vector<Videojuego* > videoJuego;
public:
    Jugador(string, int);
    void mostrarJugador();
    string getNombreJugador();
    void setNombreJugador();

};


#endif //JUEGO_JUGADOR_H
