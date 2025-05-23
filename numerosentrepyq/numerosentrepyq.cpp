#include <iostream>
using namespace std;

int main() {
    int p, q;

    cout << "Ingrese el primer valor del intervalo a analizar: ";
    cin >> p;
    cout << "Ingrese el segundo valor del intervalo a analizar: ";
    cin >> q;

    if (p < 0) p = -p;
    if (q < 0) q = -q;

    if (p > q) {
        int temp = p;
        p = q;
        q = temp;
    }

    int acum_1 = 0; 
    int suma_2 = 0; 
    int cuenta_3 = 0; 
    int ud;

    for (int i = p; i <= q; i++) {
        ud = i % 10;

        if (ud == 1) {
            acum_1 += i;
        }
        else if (ud == 2) {
            suma_2 += i;
        }
        else if (ud == 3) {
            cuenta_3++;
        }
    }

    cout << "Los numeros terminados en 1 es: " << acum_1 << endl;
    cout << "La suma de los numeros terminados en 2 es: " << suma_2 << endl;
    cout << "La cantidad de numeros terminados en 3 es: " << cuenta_3 << endl;

    return 0;
}
