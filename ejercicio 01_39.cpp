// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 39
// Problema planteado:Calcular la siguiente sucesi�n
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
