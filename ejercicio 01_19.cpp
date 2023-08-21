// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 19
// Problema planteado:. Convertir coordenadas polares en rectangulares.
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    double x,y,r,alpha;
    cout<<"ingrese las coordenadas polares:"<< endl;
    cout<<"ingrese valor de radio: "<< endl;cin>>r;
    cout<<"ingrese valor del angulo en grados: "<< endl;cin>>alpha;
    x=r*cos(alpha*3.14159/180);
    y=r*sin(alpha*3.14159/180);

    cout<<"el valor de x es:"<<setprecision(4)<<x<<" o "<<r<<" cos"<<alpha<<endl;
    cout<<"el valor de y es:"<<setprecision(4)<<y<<" o "<<r<<" sin"<<alpha<<endl;

}
