//3. Escribe una función en C++ llamada esPrimo que reciba un número entero como parámetro y devuelva
//   true si es primo y false si no lo es. Luego, en el main(), pide al usuario un número y muestra si es primo o no.

#include <iostream>
using namespace std;

bool esP(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    cout << "Ingrese un numero porfavor: ";
    cin >> numero;

    if (esP(numero)) {
        cout << "El numero " << numero << " es primo." << endl;
    } else {
        cout << "El numero " << numero << " no es primo." << endl;
    }

    return 0;
}

