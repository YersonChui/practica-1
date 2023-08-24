// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 61
// Problema planteado: Los cubos de Nicómaco. Considera la siguiente propiedad descubierta por Nicómaco de Gerasa: Sumando el primer impar, se obtiene el primer cubo. Sumando los dos siguientes se obtiene el segundo cubo. Sumando los tres siguientes, se obtiene el tercer cubo, etc.

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese dos numeros: ";cin >> m >> n;
    int a = m;
    int b = n;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    int mcd = a;
    int mcm = (m * n) / mcd;
    cout <<"El MCD de "<< m << " y "<<n<< " es: "<< mcd << endl;
    cout <<"El MCM de "<< m << " y"<<n<< " es: "<< mcm << endl;
    return 0;
}
