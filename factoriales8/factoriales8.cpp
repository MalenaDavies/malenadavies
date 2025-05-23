#include <iostream>
using namespace std;

int main()
{
    int n, f, a;
    string op;
    n = 1;
    a = 1;

    do {

        cout << "Ingrese el numero al cual le quiere calcular el facrorial:";
        cin >> n;

        if (n == 0) {
            f = 1; //el factorial de 0 es 1
        }
        else {
            while (a <= n) { //para que multiplique por la misma cantidad de n[umeros (definicion de factorial)
                f *= a;
                a++;
            }
        }

        cout << "El factorial de " << n << " es:" << f << endl;
        cout << "Desea calcular otra factorial?";
        cin >> op;
    } while (op == "si" || op == "SI");

    return 0;

}