// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 6
// Problema planteado: numero primo
#include <iostream>

using namespace std;

int main(){
    int a,b=0;
    cout<<"ingrese el numero: ", cin>>a;
    for(int i=1;i<=a;i++){
            if(a%i==0){
                b++;
            }
    }
    if(b!=2){
        cout<<"NO es numero primo"<< endl;
    }
    else{
        cout<<"es numero primo"<< endl;
    }
    return 0;
}
