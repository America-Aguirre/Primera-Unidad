#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double Mensual = 15000.0;
    double Interes = 0.037;
    int Meses = 15 * 12; // 15 años

    double Ahorro = 0.0;

    for (int i = 0; i < Meses; i++) {
        Ahorro = (Ahorro + Mensual) * (1 + Interes);
    }

    cout << "La cantidad ahorrada después de 15 anos es: $" << Ahorro << endl;

    return 0;
}
