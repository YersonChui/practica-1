// Materia: Programaci�n I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 13
// Problema planteado:Indique la cantidad de d�gitos que tiene un n�mero entero
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
