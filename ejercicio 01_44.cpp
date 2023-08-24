// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 44
// Problema planteado:comercial “La Estrella del Sur” vende n productos en un día, de los cuales factura al precio de cada uno con un IVA del 13% y si el monto final se excede en 2500 Bs, se aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el día y calcular el pago del IVA del 13% al servicio de Impuestos Nacionales.
#include <iostream>
using namespace std;

int main() {
    int n;
    double monto, totaldeventas;
    cout<<"ingrese la cantidad de montos: "<<endl;cin>>n;
    for (int i=0;i<n;i++){
        cout<<"ingrese el monto "<<i+1<<": ";cin>>monto;
        if(monto<=2500){
            monto=monto+(monto*0.13);
        }if (monto>2500){
            monto=monto+(monto*0.13);
            monto=monto-(monto*0.05);
        }
        cout<<"el monto total con iva y descuento es: "<<monto<<endl;
        totaldeventas+=monto;
    }
    cout<<"los montos total: "<<totaldeventas<<endl;
    return 0;
}
