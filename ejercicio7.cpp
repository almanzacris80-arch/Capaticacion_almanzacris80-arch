#include <iostream>
#include <iomanip>

int main (){
    using namespace std;

    double cuenta, porcentaje, total, propina;
    cout << "Cuenta = $";
    cin >> cuenta;
    cout << "Propina = %";
    cin >> porcentaje;
    propina = cuenta * (porcentaje / 100);
    total = cuenta + propina;

    cout << fixed << setprecision(2) << "Propina: $" << propina << endl;
    cout << fixed << setprecision(2) << "Total a pagar: $" << total << endl;

    return 0;
}