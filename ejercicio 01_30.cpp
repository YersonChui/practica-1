// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 30
// Problema planteado:Calcular la siguiente sucesi�n

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ingrese n: "<<endl;cin>>n;
    double sum = 0;
    for (int i=2;i<=n+1;i++){
        if(i%2==0){
            sum+= double (i)/(i - 1);
        }else{
            sum-= double (i)/(i - 1);
        }
    }
    cout << "La suma de la sucesion es: " << sum << endl;
    return 0;
}
