// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 45
// Problema planteado:Obtener el promedio de n�meros enteros positivos introducidos por teclado, el  algoritmo se detiene cuando se lea un n�mero negativo o cero.
#include <iostream>
using namespace std;
int main(){
    int suma = 0;
    for (int i=4; i<=10000; i++){
        int divisores = 0;
        for(int j=2; j<=i/2; j++){
            if (i%j == 0){
                divisores++;
            }
        }
        if (divisores>0){
            suma += i * i;
        }
        if (suma>0 && i%100==0){
            break;
        }
    }
    cout << "La suma de los cuadrados de los primeros 100 numeros compuestos es: " << suma << endl;
    return 0;
}


