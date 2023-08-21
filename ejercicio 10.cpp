// Materia: Programación I, Paralelo 1
// Autor: Yerson Mateo Chui Mamani
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 10
// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es ninguna letra que diga que es carácter especial.
#include <ctype.h>
#include <stdio.h>

using namespace std;

int esVocal(char letra){
    char letramin = tolower(letra);
    char vocal[] ="aeiou";

    for(int i=0;vocal[i];i++){
        if(letramin==vocal[i]){
            return 1;
        }
    }
    return 0;
    }
