#pragma once
#include<iostream>
#include<string>

using namespace std;

class Arco {
private:
    int Fuerza;         // Valor numérico: +5
    int Constitucion;   // Valor numérico: +1
    int Destreza;       // Valor numérico: +3
    int Inteligencia;   // Valor numérico: +1
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
        std::cout << "Valores del Arco :\n";
        std::cout << "Fuerza: " << Fuerza << std::endl;
        std::cout << "Constitucion: " << Constitucion << std::endl;
        std::cout << "Destreza: " << Destreza << std::endl;
        std::cout << "Inteligencia: " << Inteligencia << std::endl;
        std::cout << "Sabiduria: " << Sabiduria << std::endl;
        std::cout << "Carisma: " << Carisma << std::endl;
    }

        void tenerArco() {
        std::cout << "------------------" << std::endl;
        std::cout << "     /)           " << std::endl;
        std::cout << "   /  |           " << std::endl;
        std::cout << "   >>>-------->   " << std::endl;
        std::cout << "   \  |           " << std::endl;
        std::cout << "     \)           " << std::endl;
        std::cout << "------------------" << std::endl;


};
};

/*
int main() {
    Arco arma;
    
    // Establecer los valores de la armadura
    arma.establecerValores(5, 1, 3, 1, 0, 0);

    // Mostrar los valores de la armadura
    arma.mostrarValores();

    return 0;
}
*/