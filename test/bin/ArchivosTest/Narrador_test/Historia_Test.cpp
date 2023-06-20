#include <Historia.hpp>

int main() {
    
    std::string nombre;

    std::cout << "Ingresa un nombre: ";
    std::getline(std::cin, nombre);
    
    int opcion;
    Historia historia;

    cout << "Elige un evento (1-4): ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            historia.Mostrar_Evento_1();
            break;
        case 2:
            historia.Mostrar_Evento_2();
            break;
        case 3:
            historia.Mostrar_Evento_3();
            break;
        case 4:
            historia.Mostrar_Evento_4();
            break;
        default:
            cout << "La Diosa te ha abandonado....";
            break;

            
    }

    return 0;
}