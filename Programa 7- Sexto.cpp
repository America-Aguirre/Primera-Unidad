#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double Mensual = 1000.0;
    double Interes = 0.03;
    int Meses = 10 * 12; // 10 a�os

    double Ahorro = 0.0;

    for (int i = 0; i < Meses; i++) {
        Ahorro = (Ahorro + Mensual) * (1 + Interes);
    }

    cout << "La cantidad ahorrada despu�s de 10 a�os es: $" << Ahorro << endl;

    return 0;
}

