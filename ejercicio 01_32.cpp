// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 32
// Problema planteado:Leer un n�mero entero y mostrarlo con las cifras al rev�s.
#include <iostream>
using namespace std;

int main() {
    int numero,inve;
    cout<<"Ingrese un numero entero: ";cin >> numero;
    cout<<"El numero invertido es: ";
    while (numero != 0) {
        inve = numero % 10;//saca el ultimo digito
        cout<<inve;
        numero /= 10;
    }
    return 0;
}
