// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 31
// Problema planteado:Leer dos números y verificar si uno es múltiplo del otro o no lo es

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"verficar si es multiplo o no"<<endl;
    cout<<"ingrese el primer valor: ";cin>>a;
    cout<<"ingrese el primer valor: ";cin>>b;

    if(a>b){
        if(a%b==0){
            cout<<a<<" es multiplo de "<<b;
        }else{
            cout<<a<<" no es multiplo de "<<b;
        }
    }else{
        if(b%a==0){
            cout<<b<<" es multiplo de "<<a;
    }else{
        cout<<b<<" no es multiplo de "<<a;
    }
    }
    return 0;
}
