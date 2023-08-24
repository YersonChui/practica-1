// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 43
// Problema planteado:Obtener el promedio de n�meros enteros positivos introducidos por teclado, el  algoritmo se detiene cuando se lea un n�mero negativo o cero.
#include <iostream>
using namespace std;

int main() {
    int n = 0,suma = 0,contador = 0;
    double promedio;
    cout << "Ingrese un n�mero entero positivo: ";cin >> n;
    while (n>0){
        suma += n;
        contador++;
        cout << "Ingrese otro n�mero entero positivo (o cero o negativo para terminar): ";cin >> n;
    }if (contador>0){
        promedio = suma / contador;
        cout << "El promedio de los n�meros ingresados es: " << promedio << endl;
    } else {
        cout << "No se ingresaron n�meros positivos." << endl;
    }
    return 0;
}

