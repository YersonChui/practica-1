// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 24
// Problema planteado:Leer un numero entero y muestre la suma de sus dos primeros d�gitos.
#include <iostream>

using namespace std;
int main() {
    int n,suma;
    cout<<"ingrese un numero entero 1-99: ";cin>>n;
    if (n>1,n<100){
        suma=(n/10)+(n%10);
        cout<<"la suma de los digitos es: "<<suma;
    }else{
        cout<<"el numero supera los 2 digitos";
    }
    return 0;
}
