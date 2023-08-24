// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 14
// Problema planteado:Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos
#include <iostream>
using namespace std;
int main() {
    int hrs,mins,segs,x;
    cout<<"introduzca los segundos deseados: ";cin>>x;
    hrs=x/3600;
    x=x%3600;
    mins=x/60;
    segs=x%60;
    cout<<"horas: "<<hrs<<endl;
    cout<<"minutos: "<<mins<<endl;
    cout<<"segundo: "<<segs<<endl;

    return 0;
}
