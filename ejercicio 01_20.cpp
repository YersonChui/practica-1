// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 20
// Problema planteado: Leer tres n�meros enteros y si son diferentes entre s� determine con alg�n mensaje el menor
#include <iostream>

using namespace std;
int main() {
    int a,b,c;
    cout<<"ingrese el primer valor: "<<endl;cin>>a;
    cout<<"ingrese el segundo valor: "<<endl;cin>>b;
    cout<<"ingrese el tercer valor: "<<endl;cin>>c;
    if (a>b,b>c){
    cout<<"el menor es el tercer valor: "<<c;
    }
    if (b>c,c>a){
        cout<<"el menor es el primer valor: "<<a;
    }
    if (c>a,a>b){
        cout<<"el menor es el segundo valor: "<<b;
    }
 return 0;
}
