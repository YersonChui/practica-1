// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 20
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el menor
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
