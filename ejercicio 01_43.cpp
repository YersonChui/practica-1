// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 43
// Problema planteado:Obtener el promedio de números enteros positivos introducidos por teclado, el  algoritmo se detiene cuando se lea un número negativo o cero.
#include <iostream>
using namespace std;

int main() {
    int n = 0,suma = 0,contador = 0;
    double promedio;
    cout << "Ingrese un número entero positivo: ";cin >> n;
    while (n>0){
        suma += n;
        contador++;
        cout << "Ingrese otro número entero positivo (o cero o negativo para terminar): ";cin >> n;
    }if (contador>0){
        promedio = suma / contador;
        cout << "El promedio de los números ingresados es: " << promedio << endl;
    } else {
        cout << "No se ingresaron números positivos." << endl;
    }
    return 0;
}

