#include <iostream>
using namespace std;

int main() {
    int n;
    double nota, suma = 0;
    int tn = 0, nno = 0;

    cout << "Ingrese la cantidad de notas que desea calcular: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese la nota numero " << i << " .ATENCION: Debe ser entre 0 y 5. ";
        cin >> nota;

        if (nota >= 0 && nota <= 5) {
            suma += nota;
            tn++;
        }
        else {
            cout << "Por favor, ingresar notas dentro del rango solicitado.";
            nno++;
        }
    }

    if (tn > 0) {
        double p, pno;
        p= suma / tn;
        pno = (double(nno) / n) * 100;

        cout << "El promedio de las notas fue: " << p << endl;
        cout << "El porcentaje de las notas que no fueron correctas es: " << pno << "%";
    }
    else {
        cout << "No se ingresaron notas validas para calcular promedio.";
    }

    return 0;
}
