// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 66
// Problema planteado: billetes
#include <iostream>
using namespace std;

int main() {
int a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,vuelto;
    cout<<"ingrese el monto ";cin>>vuelto;
     if (vuelto>0){
            a1=vuelto/200;
            vuelto=vuelto%200;
            b1=vuelto/100;
            vuelto=vuelto%100;
            c1=vuelto/(50);
            vuelto=vuelto%(50);
            d1=vuelto/(20);
            vuelto=vuelto%(20);
            e1=vuelto/(10);
            vuelto=vuelto%10;
            f1=vuelto/(5);
            vuelto=vuelto%5;
            g1=vuelto/(2);
            vuelto=vuelto%2;
            h1=vuelto/(1);
            vuelto=vuelto%1;
    }

    cout<<"\t"<<a1<<" billetes de 200Bs: "<<endl;
    cout<<"\t"<<b1<<" billetes de 100Bs: "<<endl;
    cout<<"\t"<<c1<<" billetes de 50Bs: "<<endl;
    cout<<"\t"<<d1<<" billetes de 20Bs: "<<endl;
    cout<<"\t"<<e1<<" billetes de 10Bs: "<<endl;
    cout<<"\t"<<f1<<" monedas de 5 Bs: "<<endl;
    cout<<"\t"<<g1<<" monedas de 2 Bs: "<<endl;
    cout<<"\t"<<h1<<" monedas de  Bs: "<<endl;

    return 0;
}
