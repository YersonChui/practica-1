// Materia: Programaci�n I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 2
// Problema planteado: �rea de una esfera
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
