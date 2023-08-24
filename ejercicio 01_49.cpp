// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 49
// Problema planteado:Escribir un programa que muestre en pantalla, con los encabezados correspondientes,el capital (Cn) y los intereses ganados por un capital C0 depositado a un interés compuesto I durante N años. C0, I y N se deben leer por teclado. La fórmula a emplear es:
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
