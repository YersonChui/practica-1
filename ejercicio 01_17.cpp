// Autor: Yerson Mateo Chui Mamani
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 17
// Problema planteado:Leer un valor en bolivianos y convierta a Euros, D�lares y Libras Esterlinas
#include <iostream>
using namespace std;
int main() {
    float bol,dolar,euro,librasest;
    cout<<"introduzca el valor en bolivianos: "<<endl;cin>>bol;
    dolar=bol*0.15;//1 boliviano equivale a 0.15 dolares
    euro=bol*0.13;//1 boliviano equivale a 0.13euros
    librasest=bol*0.11;//1 boliviano equivale a 0.11 libras esterlinas

    cout<<dolar<<" dolares"<<endl;
    cout<<euro<<" euros"<<endl;
    cout<<librasest<<" libras esterlinas"<<endl;

}
