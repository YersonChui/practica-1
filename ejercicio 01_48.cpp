// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 48
// Problema planteado: Dado un rango (A y B) de números enteros, obtener la cantidad de números pares que contiene dicho rango.
include <iostream>

using namespace std;

int main() {
    int A,B,pares=0;
    cout << "Ingrese el limite inferior: ";cin >> A;
    cout << "Ingrese el limite superior: ";cin >> B;
    for (int i = A; i <= B; i++) {
            if (i % 2 == 0) {
                pares++;
    }
    }
    cout << "La cantidad de números pares en el rango " << A << ", " << B << " es: " << pares << endl;
    return 0;
}
