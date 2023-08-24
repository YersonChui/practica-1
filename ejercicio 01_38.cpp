// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 38
// Problema planteado:Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos los meses de 30 días.
#include <iostream>
using namespace std;

int main() {
    int x,anio;
    float A=25000000, B=19900000;
    while (A>B){
            A=A+(A*0.02);
            B=B+(B*0.03);
            x++;
            anio=x+2009;
    }
    cout<<x<<" veces, osea en el "<<anio<<endl;
    return 0;
    }

