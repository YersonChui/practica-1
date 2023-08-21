// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 23
// Problema planteado:Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura de Ullman (en honor al matemático Ullman)
#include <iostream>

using namespace std;
int main() {
    int n;
    cout<<"ingrese el valor: ";cin>>n;
    while (n>1){
    if (n%2==0){
        n=n/2;
    }else{
        n=(n*3)+1;
    }
    cout<<"\n"<<n;
    }
    return 0;
}
