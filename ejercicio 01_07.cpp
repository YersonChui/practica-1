// Materia: Programaci�n I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 7
// Problema planteado: N�mero amigo(divisores)
#include <iostream>

using namespace std;

int main(){
    int numero, resto;
	cout << "Ingrese el valor: ";
	cin >> numero;
	cout << "Sus divisores son: ";
		for(int i=1; i<=numero ; i=i+1){
			resto = numero%i;
			if(resto==0){
				cout << i <<" ";
				}
			}
	return 0;
	}
