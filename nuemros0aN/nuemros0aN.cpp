#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un numero entero: ";
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    for (int i = 0; i <= n; i++) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
