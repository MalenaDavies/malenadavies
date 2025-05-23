#include <iostream>
using namespace std;

int main() {
    int n,m;

    cout << "Ingrese el primer numero: ";
    cin >> n;

    cout << "Ingrese el segundo numero: ";
    cin >> m;

  
    if (n > m) {
        int temp = n;
        n = m;
        m = temp;
    }

    cout << "Los numeros pares entre " << n << " y " << m << " son: ";
    for (int i = n; i <= m; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
