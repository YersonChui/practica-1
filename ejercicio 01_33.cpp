// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 33
// Problema planteado:Leer dos fechas y mostrar el n�mero de d�as que hay de diferencia. Suponiendo todos los meses de 30 d�as.
#include <iostream>
using namespace std;

int main() {
    int dia1,mes1,anio1,dia2,mes2,anio2;
    cout<<"ingrese la fecha (dd/mm/aaaa)"<<endl;cin>>dia1>>mes1>>anio1;
    cout<<"ingrese la segunda fecha (dd/mm/aaaa)"<<endl;cin>>dia2>>mes2>>anio2;
    int totaldia1=dia1+(mes1*30)+(anio1*360);
    int totaldia2=dia2+(mes2*30)+(anio2*360);
    int diferencia=totaldia2-totaldia1;

    cout<<"la diferencia de dias es: "<<diferencia<<" dias"<<endl;

}
