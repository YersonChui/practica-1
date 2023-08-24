// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 64
// Problema planteado: mnor a mayor
#include <iostream>
using namespace std;

int main() {
    int numero;
    int resultado = 0,contador = 0;
    cout << "Ingrese el numero entero positivo: ";cin >> numero;
    if (numero <= 0) {
        cout <<"el numero debe ser positivo."<<endl;
   }for (int i = 0; i <= 9; i++) {
      int aux = numero;
      while (aux > 0) {
            int digito = aux % 10;
            if (digito == i) {
                resultado = resultado * 10 + digito;
                contador++;
      }
      aux = aux / 10;
      }
}
cout << "El resultado es " << resultado <<endl;
return 0;
}
