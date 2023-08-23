// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 10
// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es ninguna letra que diga que es carácter especial.
#include <iostream>

using namespace std;
int main(){
    char caracter;
    cout<<"Ingrese un caracter: ";
    cin >> caracter;
    if ((caracter>='a',caracter<='z') || (caracter >= 'A',caracter <= 'Z')){
        switch (caracter){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cout<<"Es una vocal."<<endl;
                break;
            default:
                cout<<"Es una consonante."<<endl;
                break;
        }
    }else{
        cout << "No es una letra."<<endl;
    }
    return 0;
}
