// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 25
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
        cout << "Introduce un n�mero del 0 al 50: ";
        cin >> intento;
        if (intento == num) {
            cout << "�Has adivinado el n�mero secreto! Felicidades." << endl;
            break;
        } else if (intento < num) {
            cout << "El n�mero secreto es mayor." << endl;
        } else {
            cout << "El n�mero secreto es menor." << endl;
        }
        intentos--;
        cout << "Te quedan " << intentos << " intentos." << endl;
    }
    if (intentos == 0) {
        cout << "�Has agotado todos tus intentos! El n�mero secreto era: " << num << endl;
    }
    return 0;
}
