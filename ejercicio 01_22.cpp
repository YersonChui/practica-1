// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 22
// Problema planteado:En una f�brica de computadoras se planea ofrecer a los clientes un descuento que depender� del n�mero de computadoras que compre. Si las computadoras son menos de cinco se les dar� un 10% de descuento sobre el total de la compra; si el n�mero de
//computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de descuento; y si son 10 o m�s se les da un 40% de descuento. El precio de cada computadora es un valor que el usuario ingrese desde el teclado.
#include <iostream>

using namespace std;
int main() {
    int unidades;
    double precio, pago;
    cout<<"\tunidades que desea comprar: ";cin>>unidades;
    cout<<"precio por cada unidad: ";cin>>precio;
    if (unidades<5){
        pago=((unidades*precio))-((unidades*precio)*0.10);
        cout<<"\tel monto a pagar es: "<<pago<<endl;
    }
    if (unidades>=5,unidades<10){
        pago=((unidades*precio))-((unidades*precio)*0.20);
        cout<<"\tel monto a pagar es: "<<pago<<endl;
    }
    if (unidades>10){
        pago=((unidades*precio))-((unidades*precio)*0.40);
        cout<<"\tel monto a pagar es: "<<pago<<endl;
    }
}
