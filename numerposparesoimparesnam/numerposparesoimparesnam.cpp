#include <iostream>
using namespace std;

int main() {
    int n,m;
    string op;

    cout << "Ingrese el primer numero: ";
    cin >> n;

    cout << "Ingrese el segundo numero: ";
    cin >> m;

    if (n>m) {
        int temp = n;
        n=m;
        m = temp;
    }

    cout << "¿Quiere ver los numeros pares o los numeros impares entre estos dos numeros?";
    cin >> op;


    if (op == "pares" || op == "PARES") {
        cout << "Los numeros pares entre " << n << " y " << m << " son: ";
        for (int i = n; i <= m; i++) {
            if (i % 2 == 0) cout << i << " ";
        }
    }
    else if (op == "impares" || op == "IMPARES") {
        cout << "Los numeros impares entre " << n << " y " << m << " son: ";
        for (int i = n; i <= m; i++) {
            if (i % 2 != 0) cout << i << " ";
        }
    }
    else {
        cout << "Por favor, escriba pares o impares";
    }

    cout << endl;
    return 0;
}
