// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 38
// Problema planteado:Leer dos fechas y mostrar el n�mero de d�as que hay de diferencia. Suponiendo todos los meses de 30 d�as.
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

