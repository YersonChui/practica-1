// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 48
// Problema planteado: Dado un rango (A y B) de n�meros enteros, obtener la cantidad de n�meros pares que contiene dicho rango.
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
    cout << "La cantidad de n�meros pares en el rango " << A << ", " << B << " es: " << pares << endl;
    return 0;
}
