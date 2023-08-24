// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 52
// Problema planteado:Escriba un programa que permita al usuario obtener los valores de las funcione trigonométricas:
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.141592653589793;
    const double radian = PI / 180.0;
    double angulo;
    cout << "Ingrese el angulo en grados: ";cin >> angulo;
    angulo = angulo * radian;
    double seno = sin(angulo);
    double coseno = cos(angulo);
    double tangente = tan(angulo);
    cout<<"El seno de " << angulo<<" radianes es " << seno << endl;
    cout<<"El coseno de " << angulo<<" radianes es " << coseno << endl;
    cout<<"La tangente de " << angulo<<" radianes es " << tangente << endl;
    return 0;
}
