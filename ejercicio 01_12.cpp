// Materia: Programaci�n I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 12
// Problema planteado: Mostrar los primero 100 n�mero primos.
#include <iostream>

using namespace std;

int main(){

int i,j,primo;
i=0;
while(i<=100){
    primo=0;
    j=1;
    while(j<=i){
            if(i%j==0){
                primo=primo+1;//almacena los numeros primos
  }
  j=j+1;
 }
if(primo==2){
        cout<<i<<endl;
}
 i=i+1;
}
return 0;
}
