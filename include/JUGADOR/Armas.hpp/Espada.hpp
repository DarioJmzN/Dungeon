#pragma once
#include<iostream>
#include<string>

using namespace std;

class Espada {
private:
    int Fuerza;         // Valor numérico: +4 
    int Constitucion;   // Valor numérico: +4
    int Destreza;       // Valor numérico: +2
    int Inteligencia;   // Valor numérico: +0
    int Sabiduria;      // Valor numérico: +0
    int Carisma;        // Valor numérico: +0

public:
    void establecerValores(int fuerza, int constitucion, int destreza, int inteligencia, int sabiduria, int carisma) {
        Fuerza = fuerza;
        Constitucion = constitucion;
        Destreza = destreza;
        Inteligencia = inteligencia;
        Sabiduria = sabiduria;
        Carisma = carisma;
    }

    void mostrarValores() {
        std::cout << "Valores de la Espada son:\n";
        std::cout << "Fuerza: " << Fuerza << std::endl;
        std::cout << "Constitucion: " << Constitucion << std::endl;
        std::cout << "Destreza: " << Destreza << std::endl;
        std::cout << "Inteligencia: " << Inteligencia << std::endl;
        std::cout << "Sabiduria: " << Sabiduria << std::endl;
        std::cout << "Carisma: " << Carisma << std::endl;
    }

    void tenerEspada() {
        std::cout << "------------------" << std::endl;
        std::cout << "         4        " << std::endl;
        std::cout << "        41        " << std::endl;
        std::cout << "        91        " << std::endl;
        std::cout << "       _01_       " << std::endl;
        std::cout << "         0        " << std::endl;
        std::cout << "------------------" << std::endl;
    }
};


/*
int main() {
    Espada arma;
    
    // Establecer los valores de la armadura
    arma.establecerValores(4, 4, 2, 0, 0, 0);

    // Mostrar los valores de la armadura
    arma.mostrarValores();

    return 0;
}
*/