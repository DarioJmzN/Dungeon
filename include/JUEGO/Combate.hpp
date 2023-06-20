#include <iostream>

class Combate {
public:
    void Enfrentar() {
        std::cout << "¡Comienza el combate!" << std::endl;

        // Lógica del combate...
        Atacar(); // El jugador realiza un ataque
        Resivir_Daño();

        // Más lógica del combate...
    }

private:
    void Atacar() {
        std::cout << "El jugador ataca." << std::endl;
    }
        void Resivir_Daño() {
        std::cout << "El jugador A sufrido heridas." << std::endl;
    }

};

// Función principal
int main() {
    Combate combate;
    combate.Enfrentar();

    return 0;
}
