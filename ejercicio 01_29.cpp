// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 29
// Problema planteado:En una llantería se ha establecido una promoción de las llantas marca “Ponchadas”, dicha promoción consiste en lo siguiente:
#include <iostream>
using namespace std;

int main() {
    int llantas, precio;
    cout<<"ingrese el numero de llantas que requiere: "<<endl; cin>>llantas;
    if(llantas<5){
        precio=llantas*300;
        cout<<"el precio de total a pagar es:  "<<precio;
    }
    if(llantas>=5,llantas<=10){
        precio=llantas*250;
        cout<<"el precio de total a pagar es:  "<<precio;
    }
    if(llantas>10){
        precio=llantas*200;
        cout<<"el precio de total a pagar es:  "<<precio;
    }
}
