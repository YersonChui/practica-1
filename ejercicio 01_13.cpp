// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 13
// Problema planteado:Indique la cantidad de dígitos que tiene un número entero
#include <iostream>

using namespace std;

int main(){
    int contardigitos,numero;
    cin>>numero;
    int contador=0;
    if(numero==0){
        cout<<1<<" digito(s)"<<endl;
    }
    else{
        while(numero!=0){
            numero=numero/10;
            contador++;
        }
        cout<<contador<<" digito(s)"<<endl;
    }
}
