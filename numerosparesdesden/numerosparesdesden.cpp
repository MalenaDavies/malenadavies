#include <iostream>
using namespace std;

int main() {
    int n;
    string op;

    cout << "Ingrese el primer numero de la secuencia: ";
    cin >> n;


    if (n % 2 != 0) {
        n++;
    }

    do {
        cout << "Numero par: " << n << endl;
        n += 2; 

        cout << "Quiere calcular el proximo numero par? ";
        cin >> op;

    } while (op == "si" || op == "SI");

    return 0;
}
