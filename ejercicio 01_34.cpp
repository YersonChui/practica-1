// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 34
// Problema planteado:Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n t�rminos
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el n�mero para generar la secuencia: ";
    cin >> n;

    int secuencia[n];
    secuencia[0] = 1;
    secuencia[1] = 1;
    secuencia[2] = 2;

    int suma = 4, incremento = 4;
    for (int i = 3; i < n; i++) {
        if (i % 3 == 0) {
            incremento += 3;
        }
        secuencia[i] = secuencia[i - 1] + incremento;
        suma += secuencia[i];
    }
    cout << "La secuencia generada es: ";
    for (int i = 0; i < n; i++) {
        cout << secuencia[i] << " ";
    }
    cout << endl;

    return 0;
}

