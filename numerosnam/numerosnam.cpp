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
        //intercambiar n y m para que m sea mas grande
    }

    for (int i = n; i <= m; i++) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
