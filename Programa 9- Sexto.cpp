#include <iostream>

int main() {
    const int TAMANO = 10;
    int Numeros[TAMANO];

    std::cout << "Dame 10 numeros:" << std::endl;
    for (int i = 0; i < TAMANO; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> Numeros[i];
    }

    // Ordenamiento burbuje
    for (int i = 0; i < TAMANO - 1; i++) {
        for (int j = 0; j < TAMANO - i - 1; j++) {
            if (Numeros[j] > Numeros[j + 1]) {
                // Intercambio de números
                int temp = Numeros[j];
                Numeros[j] = Numeros[j + 1];
                Numeros[j + 1] = temp;
            }
        }
    }

    // Despliegue de números ordenados
    std::cout << "Numeros ordenados en orden ascendente:" << std::endl;
    for (int i = 0; i < TAMANO; i++) {
        std::cout << Numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
