// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 40
// Problema planteado:Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos los meses de 30 días.
#include <iostream>
using namespace std;

int main() {
    int a1=0,b1=0,c1=0,d1=0,e1=0,vuelto;
    double precio,pago;
    cout<<"ingrese el precio: ";cin>>precio;
    cout<<"ingrese el monto de pago: ";cin>>pago;
    if (pago>precio){
            vuelto=pago-precio;
            a1=vuelto/5.0;
            vuelto=vuelto%5;
            b1=vuelto/1.0;
            vuelto=vuelto%1;
            c1=vuelto/(0.5);
            vuelto=vuelto%(1/2);
            c1=vuelto/(0.2);
            vuelto=vuelto%(0.1);
    }if(pago==precio){
        cout<<"no se da cambio"<<endl;
    }if(pago<precio){
        cout<<"el pago es inferior al monto que se debe pagar  "<<endl;
    }
    cout<<a1<<" monedas de 5Bs: "<<endl;
    cout<<b1<<" monedas de 1Bs: "<<endl;
    cout<<c1<<" monedas de 0.5 Bs: "<<endl;
    cout<<d1<<" monedas de 0.2 Bs: "<<endl;
    cout<<e1<<" monedas de 0.1 Bs: "<<endl;
    return 0;
}

