#include <iostream>
#include <random>

class Dados {
private:
    int caras;

public:
    // Constructor
    Dados(int numCaras) {
        caras = numCaras;
    }

    // Método para lanzar el dado y obtener un resultado aleatorio
    int lanzarDado() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dist(1, caras);
        return dist(gen);
    }
};

