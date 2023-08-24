// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 58
// Problema planteado: generar 1234321
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
            int fila=0;
            for(int j=1;j<=i;j++) {
                    fila=fila * 10 + j;
            }for(int j=i-1; j >= 1; j--) {
                fila = fila * 10 + j;
            }
            cout << fila << endl;
}
return 0;
}
