// Materia: Programaci�n I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 15
// Problema planteado:Escriba la sucesi�n de Fibonacci
#include <iostream>
using namespace std;
int main ()
{
 int num=0,a=0,b=1,c=1;
 cout<<"numero de elementos:";
 cin>>num;
 for (int i=1;i<num;i++){
  c = a + b;
  cout<<c<<" ";
  a = b;
  b = c;
 }
 return 0;
}
