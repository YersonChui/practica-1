// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 35
// Problema planteado:Un supermercado decide efectuar una promoci�n de descuentos por el valor de lascompras que efect�an sus clientes, esta promoci�n se basa en las siguiente condiciones:
#include <iostream>
using namespace std;

int main() {
    int n;
    double monto, totaldeventas;
    cout <<"ingrese la cantidad de clientes: "<<endl;cin>>n;
    for (int i=0;i<n;i++){
        cout<<"ingrese el monto a pagar "<<i+1<<": ";cin>>monto;
        if(monto>=100,monto<=500){
            monto-=monto*0.05;
        }if (monto>500){
            monto-=monto*0.08;
        }
        cout<<"el monto total a pagar con descuento es: "<<monto<<endl;
        totaldeventas+=monto;
    }
    cout<<"los montos son: "<<totaldeventas<<endl;
    return 0;
}
