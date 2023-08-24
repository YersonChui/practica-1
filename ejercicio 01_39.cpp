// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 39
// Problema planteado:Calcular la siguiente sucesión
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos valores enteros distintos: ";cin >> a >> b;
    if(a>b){
        for(int i=a;i>=b;i--){
            cout<<i<< " ";
        }
    }else{
        for(int i=a;i<=b;i++) {
            cout<<i<< " ";
        }
    }
    cout<<endl;
    return 0;
}
