// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 63
// Problema planteado: numero romano
#include <iostream>
using namespace std;

int main() {
    int valor;
    cout << "Ingrese el valor numerico:";cin >> valor;
    if (valor < 1 || valor > 9999) {
            cout << "Error: el valor debe estar entre 1 y 9999"<<endl;
    }
    string romano = "";
    char simbolos[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int valores[7] = {1, 5, 10, 50, 100, 500, 1000};
    int i = 6; // Indice del arreglo
    while (valor > 0) {
            if (valor >= valores[i]) {
                    romano = romano + simbolos[i];
                    valor = valor - valores[i];
            }else {
                if (i % 2 == 0,i > 0, valor >= valores[i] - valores[i - 2]) {
                        romano = romano + simbolos[i - 2] + simbolos[i];
                valor = valor - (valores[i] - valores[i - 2]);
      }else if (i % 2 == 1, i > 1, valor >= valores[i] - valores[i - 2]) {
          romano = romano + simbolos[i - 2] + simbolos[i];
          valor = valor - (valores[i] - valores[i - 2]);
      }
      else {
        i--;
      }
    }
  }
  cout << "El numero romano es " << romano << endl;
  return 0;
}
