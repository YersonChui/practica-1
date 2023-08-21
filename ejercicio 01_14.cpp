// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 14
// Problema planteado:Escriba un programa que dato varios valores numéricos, hasta el que el usuario ingrese el valor de cero calculo la suma y el promedio de estos.
#include <iostream>
using namespace std;
int main() {
    int numero,total= 0,conta= 0;
    cout << "Ingrese valores numericos, para detenerlo introduzca el valor 0" << endl;
    do{
        cout << "introduzca el numero deseado:";
        cin >> numero;
        if (numero != 0){
            total += numero;//sumatoria
            conta++;//total de numeros almacenados
        }
    }
    while (numero != 0);
    if (conta>0) {
        float promedio = static_cast<float>(total)/conta;
        cout<<"Suma de los valores: " << total << endl;
        cout<<"Promedio de los valores: " << promedio << endl;
    }
    else{
        cout<<"no ingreso datos"<< endl;
    }
    return 0;
}
