#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string Palabra;
    bool Correcta = true;
    bool* Estado = &Correcta; 

    cout << "Ingresa una palabra: ";
    cin >> Palabra;

    for (int i = 0; i < Palabra.length(); i++) {
        if (!isalpha(Palabra[i])) {
            *Estado = false;
            break;
        }
    }

    if (*Estado) {
        cout << "La palabra esta escrita correctamente." << endl;
    } else {
        cout << "La palabra esta escrita incorrectamente." << endl;
    }

    return 0;
}

