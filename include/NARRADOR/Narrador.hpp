#include <iostream>
#include <string>

class Narrador {
private:
    std::string historia;

public:
    void escribirHistoria() {
        std::cout << "Escribe tu historia: ";
        std::getline(std::cin, historia);
    }

    void mostrarHistoria() {
        std::cout << "Historia escrita por ti:\n";
        std::cout << historia << std::endl;
    }
};

