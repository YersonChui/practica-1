// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 5
// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y
#include <iostream>
#include <math.h>

 using namespace std;
int main(){
    int x1,x2,y1,y2;
    float distancia;
    cout<<"ingrese x1: ";cin>>x1;
    cout<<"ingrese y1: ";cin>>y1;
    cout<<"ingrese x2: ";cin>>x2;
    cout<<"ingrese y2: ";cin>>y2;
    distancia=(pow((x2-x1),2)+(pow((y2-y1),2)));
    cout<<"el resultado es: "<<distancia<<endl;
    }
