// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 51
// Problema planteado:Dados dos números enteros, realizar el algoritmo que calcule el cociente y el resto. El método para obtener el cociente y el resto es por restas sucesivas
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese el primer numero: ";cin >> a;
    cout << "Ingrese el segundo numero: ";cin >> b;
    if (b == 0) {
    cout << "Error: no se puede dividir por cero";
    }
    float cociente = 0;
    float resto = a;
    while (resto >= b) {
            resto = resto - b;
            cociente++;
    }
    cout << "El cociente es " << cociente << " y el resto es " << resto << ".\n";
    return 0;
}
