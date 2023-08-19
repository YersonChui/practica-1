// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 1
// Problema planteado: Área de un triangulo
#include <iostream>
float base,altura,resultado;
using namespace std;
int main(){
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    resultado=(base*altura)/2; // Formula matematica para calcular el area del triangulo.
    cout << "El area de su triangulo es: " << resultado << endl;

   return 0;
}
