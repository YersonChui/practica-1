// Materia: Programaci�n I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 8
// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una hora se cobra 5 Bs adicional por hora. Ingrese la cantidad de horas que un veh�culo est� estacionado y calcule cuanto debe pagar
#include <iostream>

using namespace std;

int main(){
    int precio, horas;
    cout<<"ingrese el numero de horas ocupadas: ";cin>>horas;
    if(horas==1){
        precio = 7;
        cout<<"El monto a pagar es: Bs "<<precio<<endl;
    }
    if(horas>1){
        horas=horas+1;
        precio=((horas-1)*5)+ 7;
        cout<<"El monto a pagar es: Bs "<<precio<<endl;
    }
    return 0;
}
