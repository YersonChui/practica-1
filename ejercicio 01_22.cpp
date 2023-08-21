// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 22
// Problema planteado:En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá del número de computadoras que compre. Si las computadoras son menos de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de
//computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada computadora es un valor que el usuario ingrese desde el teclado.
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
