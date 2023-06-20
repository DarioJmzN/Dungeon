#pragma once
#include<iostream>
#include<string>

using namespace std;

class Armadura_Media {
private:
    int Fuerza;         // Valor numérico: +0
    int Constitucion;   // Valor numérico: +3
    int Destreza;       // Valor numérico: +4
    int Inteligencia;   // Valor numérico: +0
    int Sabiduria;      // Valor numérico: +0
    int Carisma;        // Valor numérico: +3

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
        std::cout << "Valores de la armadura Media son:\n";
        std::cout << "Fuerza: " << Fuerza << std::endl;
        std::cout << "Constitucion: " << Constitucion << std::endl;
        std::cout << "Destreza: " << Destreza << std::endl;
        std::cout << "Inteligencia: " << Inteligencia << std::endl;
        std::cout << "Sabiduria: " << Sabiduria << std::endl;
        std::cout << "Carisma: " << Carisma << std::endl;
    }

        void tenerArmadura_Media() {
        std::cout << "------------------" << std::endl;
        std::cout << "                  " << std::endl;
        std::cout << "    ▒▒▒     ▒▒▒   " << std::endl;
        std::cout << "    ▒▒▒▒▒▒▒▒▒▒▒   " << std::endl;
        std::cout << "      ▒▒▒▒▒▒▒     " << std::endl;
        std::cout << "      ▒▒▒▒▒▒▒     " << std::endl;
        std::cout << "------------------" << std::endl;
        };

};

