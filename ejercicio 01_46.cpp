// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 46
// Problema planteado:Obtener el promedio de números enteros positivos introducidos por teclado, el  algoritmo se detiene cuando se lea un número negativo o cero.

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de vendedores: ";cin >> n;
    double sueldo,venta1, venta2, venta3,comision;
    for (int i = 0; i < n; i++) {
            cout << "Ingrese el sueldo base del vendedor " <<i+1<< ": ";cin >> sueldo;
            cout << "Ingrese la venta 1 del vendedor " <<": ";cin >> venta1;
            cout << "Ingrese la venta 2 del vendedor " <<": ";cin >> venta2;
            cout << "Ingrese la venta 3 del vendedor " <<": ";cin >> venta3;
            comision = (venta1 + venta2 + venta3) * 0.1;
            cout << "Los resultados para el vendedor " <<i+1<<" son:" << endl;
            cout << "Comision total: " << comision << endl;
            cout << "pago total: " << sueldo + comision << endl;
            }
    return 0;
  }
