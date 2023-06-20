#pragma once
#include<iostream>
#include<string>

using namespace std;

class Jugador {
private:
    int Fuerza;         // Valor numérico: 10
    int Constitucion;   // Valor numérico: 8
    int Destreza;       // Valor numérico: 12
    int Inteligencia;   // Valor numérico: 15
    int Sabiduria;      // Valor numérico: 9
    int Carisma;        // Valor numérico: 11

public:
    // Constructor
    Jugador(int fuerza, int constitucion, int destreza, int inteligencia, int sabiduria, int carisma)
        : Fuerza(fuerza), Constitucion(constitucion), Destreza(destreza),
          Inteligencia(inteligencia), Sabiduria(sabiduria), Carisma(carisma) {}

    // Métodos
    void Atacar() {
        std::cout << "¡El jugador ataca!" << std::endl;
        // Lógica de ataque...
    }

    void Curar() {
        std::cout << "¡El jugador se cura!" << std::endl;
        // Lógica de curación...
    }

    void Escapar() {
        std::cout << "¡El jugador intenta escapar!" << std::endl;
        // Lógica de escape...
    }

};





