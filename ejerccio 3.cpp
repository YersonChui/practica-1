// Materia: Programaci�n I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 3
// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general.
#include<iostream>
using namespace std;
main(){
 int n;//cantidad de notas
 float A,B=0,prom;
 cout<<"ingrese la cantidad de notas: ";cin>>n;
 for(int i=0;i<n;i++){
 cout<<"ingrese la nota "<<i+1<<": ";cin>>A;//acumulaci�n de las notas ingrsadas
 B=B+A;
 }
 prom=B/n;
 cout<<"el promedio es: "<<prom;
}
