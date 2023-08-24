// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 27
// Problema planteado: Crear un programa que indique si un número es perfecto o no, se dice que un número es perfecto si la suma de sus divisores es igual al número.
#include <iostream>
using namespace std;

int main(){
    int a,sum=0;
    cout<<"Ingrese un número: ";cin>>a;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum += i;
        }
    }
    if(sum==a){
        cout << "El numero es perfecto."<<endl;
    } else{
        cout << "El numero NO es perfecto."<<endl;
    }
    return 0;
}
