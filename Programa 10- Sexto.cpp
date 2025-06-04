#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string rutaArchivo;
    std::cout << "Ingrese la ruta del archivo de texto: ";
    std::getline(std::cin, rutaArchivo);

    std::ifstream archivo(rutaArchivo);
    if (archivo.is_open()) {
        std::string linea;
        while (std::getline(archivo, linea)) {
            std::cout << linea << std::endl;
        }
        archivo.close();
    } else {
        std::cout << "No se pudo abrir el archivo." << std::endl;
    }

    return 0;
}
