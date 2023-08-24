// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 26
// Problema planteado: Ayude a esta ama de casa a obtener el total de sus comprar, luego dellenar el carrito de manos con todos los artículos de primera necesidad.
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de productos: ";cin >> n;
    double total = 0,precio,unidades;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el precio del producto " << (i + 1) << ": ";cin >> precio;
        cout << "Ingrese las unidades del producto " << (i + 1) << ": ";cin >> unidades;
        total += precio * unidades;
    }
    cout << "El precio total de los productos es: " <<total<<endl;
    return 0;
}
