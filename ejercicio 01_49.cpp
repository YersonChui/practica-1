// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 49
// Problema planteado:Escribir un programa que muestre en pantalla, con los encabezados correspondientes,el capital (Cn) y los intereses ganados por un capital C0 depositado a un inter�s compuesto I durante N a�os. C0, I y N se deben leer por teclado. La f�rmula a emplear es:
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int cn,c0,I,n;
    cout<<"Capital inicial C0: "<<endl;cin>>c0;
    cout<<"interes compuesto I: "<<endl;cin>>I;
    cout<<"numero de anios: "<<endl;cin>>n;
    cn=((c0*(1+I))*n);
    cout << "el capital con los intereses ganados es: "<<cn<<endl;

    return 0;
}
