#include <Armadura_Media.hpp>

int main() {
    Armadura_Media armadura;
    
    // Establecer los valores de la armadura
    armadura.establecerValores(0, 3, 4, 0, 0, 3);

    // Mostrar los valores de la armadura
    armadura.mostrarValores();

    armadura.tenerArmadura_Media();

    return 0;
}