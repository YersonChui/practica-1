// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 60
// Problema planteado: Los cubos de Nicómaco. Considera la siguiente propiedad descubierta por Nicómaco de Gerasa: Sumando el primer impar, se obtiene el primer cubo. Sumando los dos siguientes se obtiene el segundo cubo. Sumando los tres siguientes, se obtiene el tercer cubo, etc.
#include<iostream>
using namespace std;
main(){
	int num,aux,f;
	cout<<"Ingrese un numero: ";cin>>num;
	for (int i=1;i<=num;i++){
	cout<<"El resultado del cubo "<<i<< " es: "<<(i*i*i)<<endl;
	}
}
