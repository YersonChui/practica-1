// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 18
// Problema planteado:Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada.
#include <iostream>
using namespace std;
int main() {
    float vol,altura,area;
    cout<<"introduzca la altura de la piramide: "<<endl;cin>>altura;
    cout<<"introduzca el area ()^2: "<<endl;cin>>area;

    vol=(1.0/3.0)*area*altura;
    cout<<"el volumen de la piramide es:"<<vol<<"()^3"<<endl;

    return 0;

}
