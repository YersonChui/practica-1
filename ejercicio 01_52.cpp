// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 52
// Problema planteado:Obtener xy utilizando productos sucesivos, tanto x como y son enteros positivos o negativos.
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Ingrese el primer numero: ";cin >> x;
    cout << "Ingrese el segundo numero: ";cin >> y;
    int resultado = 0, signo =1;
    if (x < 0) {
            signo = -signo;
            x = -x;
    }if (y < 0) {
      signo = -signo;
      y = -y;
    }for (int i = 0; i < y; i++) {
        resultado = resultado + x;
    }
    resultado = resultado * signo;
    cout << "El producto es " << resultado << endl;
    return 0;
}
