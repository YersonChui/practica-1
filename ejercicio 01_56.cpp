// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 55
// Problema planteado:Generar las secuencias:
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el orden n: ";cin >> n;
    int alternar = 1;
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << alternar << " ";
                alternar = 1 - alternar;
    }
    cout << endl;
    if (n % 2 == 0) {
      alternar = 1 - alternar;
    }
    }
    return 0;
}
