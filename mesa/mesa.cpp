#include <iostream>
using namespace std;

int main() {
    int reg;
    int ma = 0, mb = 0, ps = 0;

    cout << "Ingrese la cantidad de registros: ";
    cin >> reg;

    for (int i = 1; i <= reg; i++) {
        int p1, p2, p3, p4;
        cout << "Registro numero " << i << ": Ingrese las 4 longitudes de patas: "<<endl;
        cin >> p1 >> p2 >> p3 >> p4;

        if (p1 == p2 && p2 == p3 && p3 == p4) {
            ma++;
        }
   
        else {
   
            if (
                (p1 == p2 && p2 == p3) ||
                (p1 == p2 && p2 == p4) ||
                (p1 == p3 && p3 == p4) ||
                (p2 == p3 && p3 == p4)
                ) {
                mb++;
                ps += 1; 
            }
            else {
                ps += 4;
            }
        }
    }

    cout << "La cantidad de mesas de 4 patas: " << ma << endl;
    cout << "La cantidad de mesas de 3 patas: " << mb << endl;
    cout << "La cantidad de patas sobrantes: " << ps << endl;

    return 0;
}
