// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 55
// Problema planteado:Generar las secuencias:
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero n: ";cin >> n;
    for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
    }
    cout << endl;
    }
    return 0;
}
