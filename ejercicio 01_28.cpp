// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 28
// Problema planteado:Multiplicar dos n�meros naturales, sin emplear el operador de la multiplicaci�n, empleando sumas sucesivas.
#include <iostream>
using namespace std;

int main() {
    int acum,cont,a,b;
    cout<<"introduzca primer valor: "; cin>>a;
    cout<<"introduzca segundo valor: "; cin>>b;
    if (a>=0,b>=0){
        acum=0;
        if (b!=0){
            cont=1;
            while(cont<=a){
                acum+=b;
                cont++;
            }
        }
        cout<<"el resultado es: "<<acum;
    } else{
        cout<< "los numeros debenser mayores a 0";
    }
    return 0;
}
