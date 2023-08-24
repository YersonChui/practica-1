// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 57
// Problema planteado: Encontrar cuadrados perfectos en el rango 1 a n
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n: ";cin >> n;
    if (n <= 0){
            cout << "Debe ser mayor a cero"<<endl;
    }for (int i = 1; i <= n; i++) {
        double raiz = sqrt(i);//sqrt = raiz cuadrada
        if (raiz == floor(raiz)) {//revisa si es entero
                cout << i << " es un cuadrado perfecto."<<endl;
        }
    }
    return 0;
}
