cmake_minimum_required(VERSION 3.30)
project(Juego)

set(CMAKE_CXX_STANDARD 20)

add_executable(Juego src/main.cpp
        src/Videojuego.cpp
        src/Videojuego.h
        src/Torneo.cpp
        src/Torneo.h
        src/Jugador.cpp
        src/Jugador.h)
