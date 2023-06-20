#include <Mapa.hpp>
#include <iostream>

int main() {
    Mapa mapa;
    int opcion;

    std::cout << "Selecciona un mapa:\n";
    std::cout << "1. Mapa 1\n";
    std::cout << "2. Mapa 2\n";
    std::cout << "3. Mapa 3\n";
    std::cout << "Ingresa tu elección: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            mapa.Mostrar_Mapa_1();
            break;
        case 2:
            mapa.Mostrar_Mapa_2();
            break;
        case 3:
            mapa.Mostrar_Mapa_3();
            break;
        default:
            std::cout << "Opción inválida\n";
    }

    return 0;
}