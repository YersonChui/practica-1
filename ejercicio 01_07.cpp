// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 7
// Problema planteado: Número amigo(divisores)
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
