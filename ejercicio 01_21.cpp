// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 21
// Problema planteado:Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está dentro del intervalo obtenga su cuadrado (n*n), si es menor que el límite inferior, obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2).
#include <iostream>

using namespace std;
int main() {
    int n,a,b,solu;
    cout<<"ingrese el valor de n: ";cin>>n;
    cout<<"\ningrese los intervalos (a,b): ";
    cout<<"\ningrese el valor de a: ";cin>>a;
    cout<<"ingrese el valor de b: ";cin>>b;
    if (a<b){
            if (n>=a,n<=b){
                solu = n*n;
                cout<<"el valor esta dentro el intervalo. Se obtuvo su cuadrado y es:"<<solu<<endl;
            }
            if (n<a){
                    solu = 1.0/n;
                    cout<<"el valor esta inferior el intervalo. Se obtuvo la inversa y es:"<<solu<<endl;
            }
            if (n>b){
                    solu = n/2.0;
                    cout<<"el valor es superior el intervalo. Se dividio a la mitad y es:"<<solu<<endl;
            }
    }else
    cout<<"b debe ser mayor de a";

    return 0;
}
