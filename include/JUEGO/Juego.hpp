#pragma once
#include<iostream>
#include<string>

using namespace std;

class Juego {

private:
    int Puntuacion;
    int Tiempo; 


public:
    Juego(int, int);
    void Cronometrar_Tiempo();
    void Aumentar_puntuacion();
};

Juego::Juego(int _Puntuacion, int _Tiempo) {
    Puntuacion = _Puntuacion;
    Tiempo = _Tiempo;
    
}

void Juego::Cronometrar_Tiempo() {
    cout << "Llevas jugando : " << endl;
}

void Juego::Aumentar_puntuacion() {
    cout << " Tu puntuación es de: " << endl;
}


