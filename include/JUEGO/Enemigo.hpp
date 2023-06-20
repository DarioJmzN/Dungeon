#pragma once
#include<iostream>
#include<string>

using namespace std;

class Enemigo {
private:
    int Fuerza;
    int Vida;

public:
    Enemigo(int, int);
    void Atacar();

};

Enemigo::Enemigo(int _Fuerza, int _Vida) 
{
    Fuerza = _Fuerza;
    Vida = _Vida;
}

void Enemigo::Atacar() {
    cout << "Prepárate para Morir!!!!!!! " << Fuerza << endl;
}


