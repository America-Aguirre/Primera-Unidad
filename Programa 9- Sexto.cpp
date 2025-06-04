#include <iostream>

int main() {
    const int TAMANO = 10;
    double Numeros[TAMANO];

    std::cout << "Dame 10 numeros:" << std::endl;
    for (int i = 0; i < TAMANO; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> Numeros[i];
    }

    // Ordenamiento burbuje
    for (int i = 0; i < TAMANO - 1; i++) {
        for (int j = 0; j < TAMANO - i - 1; j++) {
            if (Numeros[j] > Numeros[j + 1]) {
                double temp = Numeros[j];
                Numeros[j] = Numeros[j + 1];
                Numeros[j + 1] = temp;
            }
        }
    }

    std::cout << "Numeros ordenados en Orden Ascendente:" << std::endl;
    for (int i = 0; i < TAMANO; i++) {
        std::cout << Numeros[i] << std::endl;
    }

    return 0;
}
