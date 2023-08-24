// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 37
// Problema planteado:Obtenga el factorial de un número entero sin emplear el producto.
#include <iostream>
using namespace std;
int main(){
   int n,i;
   double fact;
   cout << "Introduzca numero: ";cin>>n;
   fact=1;
   for(i=1;i<=n;i++)
        fact=fact*i;
   cout<<endl<<"Factorial de "<<n<<"es  "<<fact<< endl;
   return 0;
}
