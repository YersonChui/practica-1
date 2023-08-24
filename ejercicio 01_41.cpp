// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 41
// Problema planteado:Un cierto n�mero de obreros de una empresa reciben pagos semanales de dinero, en funci�n a las horas trabajadas y una tarifa hora. Se sabe que cuando las horas que trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al
//doble de una hora normal, considere adem�s un descuento del 5% a todos los obreros para pagar su prima de seguro. Por lo tanto determine: el pago total y el pago neto por
//cada obrero y tambi�n el pago general a todos los obreros y cuanto se retendr� por la prima de manera general.
#include <iostream>

using namespace std;
int main() {
    int numObreros = 0;
    float tarifaHora=0,horasTrabajadas=0;
    float pagoTotal=0,pagoNeto=0,descuento=0,pagoGeneral=0;
    cout << "Ingrese el n�mero de obreros: ";
    cin >> numObreros;
    for (int i=1; i<=numObreros;i++){
        cout << "Obrero " << i << std::endl;
        cout << "Ingrese la tarifa por hora: ";
        cin >> tarifaHora;
        cout << "Ingrese las horas trabajadas: ";
        cin >> horasTrabajadas;
        float pagoNormal = 0, pagoExtra = 0;
        if (horasTrabajadas > 40){
            pagoNormal = 40 * tarifaHora;
            pagoExtra = (horasTrabajadas - 40) * (tarifaHora * 2);
        } else {
            pagoNormal = horasTrabajadas * tarifaHora;
        }
        pagoTotal = pagoNormal+pagoExtra;
        descuento = pagoTotal*0.05;
        pagoNeto = pagoTotal-descuento;
        pagoGeneral += pagoNeto;
        cout << "Pago total: "<< pagoTotal <<endl;
        cout << "Pago neto: "<< pagoNeto <<endl;
        cout << "...................." << endl;
    }
    cout<< "Pago general de todos los obreros: $"<<pagoGeneral<<endl;
    return 0;
}
