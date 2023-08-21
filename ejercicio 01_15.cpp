// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 15
// Problema planteado:Escriba la sucesión de Fibonacci
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
