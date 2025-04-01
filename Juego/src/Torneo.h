//
// Created by santiago on 1/04/2025.
//

#ifndef JUEGO_TORNEO_H
#define JUEGO_TORNEO_H

#include "Videojuego.h"
#include "Jugador.h"
#include <map>

using namespace std;
class Torneo {
private:
    map<string, Videojuego*>videojuegos;
    map<string, Jugador*>jugadores;
    void inicializarDatos();
public:
    void registrarVideojuego();
    void registrarJugador();
    void inscribirJugadorEnVideojuego();
    void mostrarVideojuegosDeJugador();
    void inicializarVideojuegos();
    void inicializarJugadores();
};


#endif //JUEGO_TORNEO_H
