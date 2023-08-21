// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 9
// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal. Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido.

#include <iostream>

using namespace std;

int main(){
    int mes;
    cout<<"ingrese el numero del mes: "; cin>>mes;
    switch(mes){
        case 1: cout<<" mes: Enero "<<endl;
        break;
        case 2: cout<<" mes: Febrero "<<endl;
        break;
        case 3: cout<<" mes: Marzo "<<endl;
        break;
        case 4: cout<<" mes: Abril "<<endl;
        break;
        case 5: cout<<" mes: Mayo "<<endl;
        break;
        case 6: cout<<" mes: Junio "<<endl;
        break;
        case 7: cout<<" mes: Julio "<<endl;
        break;
        case 8: cout<<" mes: Agosto "<<endl;
        break;
        case 9: cout<<" mes: Septiembre "<<endl;
        break;
        case 10: cout<<" mes: Octubres "<<endl;
        break;
        case 11: cout<<" mes: Noviembre "<<endl;
        break;
        case 12: cout<<" mes: Diciembre "<<endl;
        break;
        default: cout<<" mes: no valido "<<endl;
        break;
    }

}
