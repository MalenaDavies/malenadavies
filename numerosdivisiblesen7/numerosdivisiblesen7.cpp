#include <iostream>
using namespace std;

int main() {
    int n, numero, d = 0, nod = 0;

    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;

        if (numero % 7 == 0) {
            d++;
        }
        else {
            nod++;
        }
    }

    cout << "La cantidad de numeros divisibles por 7: " << d << endl;
    cout << "La cantidad de numeros no divisibles por 7: " << nod;

    return 0;
}
