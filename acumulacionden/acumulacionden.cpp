#include <iostream>
using namespace std;

int main() {
    int n;
    double num, suma = 0;
    int t = 0, no = 0;

    cout << "Ingrese la cantidad de numeros para calular: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> num;

        if (num > 0) {
            suma += num;
            t++;
        }
        else {
            no++;
        }
    }

    double pno;
       pno = (double(no) / n) * 100;

    cout << "La suma de los numeros mayores a cero ingresados es: " << suma << endl;
    cout << "El porcentaje de los numeros no incluidos en el acumulado (por ser menores a 0) es: " << pno << "%";

    return 0;
}
