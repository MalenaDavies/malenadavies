#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, negativo=0, total=0;
    double mcc, mca, totalcc=0, totalca=0;

    cout << "Ingrese el numero de clientes que van a dar sus datos: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {


            cout << "Ingrese el monto consignado en cuentas corrientes: ";
            cin >> mcc;
            if (mcc >= 0) {
                totalcc += mcc;
            }
            else {
                negativo++;
            }
            total++;


            cout << "Ingrese el monto consignado en cuentas de ahorros: ";
            cin >> mca;
            if (mca >= 0) {
                totalca += mca;
            }
            else {
                negativo++;
            }
            total++;
    }

    double pneg;
    pneg = (static_cast<double>(negativo) / total) * 100;

    cout << fixed << setprecision(2);
    cout << "El total consignado de cuentas corrientes es: " << totalcc << endl;
    cout << "El total consignado de cuentas de ahorros es: " << totalca << endl;
    cout << "El porcentaje del total de consignaciones que fueron negativas es: " << pneg <<"%" << endl;

    return 0;


}

