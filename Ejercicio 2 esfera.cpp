// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 2
// Problema planteado: Área de una esfera
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int R;
    double volume;
    const double PI = 3.14159;
    cout << "\tIntroduzca el radio de la esfera, en metros: ";cin >> R;
    volume = 4.0/3.0 * PI * R * R * R;
    cout << "\tEl volumen de la esfera es" << setprecision(3) << fixed << volume << endl;
    return 0;
}
