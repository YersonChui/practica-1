// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 25
// Problema planteado:ADIVINA EL NUMERO
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int num;
    num=rand()%51;;
    int intentos = 5;
    int intento;
    while (intentos > 0) {
        cout << "Introduce un número del 0 al 50: ";
        cin >> intento;
        if (intento == num) {
            cout << "¡Has adivinado el número secreto! Felicidades." << endl;
            break;
        } else if (intento < num) {
            cout << "El número secreto es mayor." << endl;
        } else {
            cout << "El número secreto es menor." << endl;
        }
        intentos--;
        cout << "Te quedan " << intentos << " intentos." << endl;
    }
    if (intentos == 0) {
        cout << "¡Has agotado todos tus intentos! El número secreto era: " << num << endl;
    }
    return 0;
}
