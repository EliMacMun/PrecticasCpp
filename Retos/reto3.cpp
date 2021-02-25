#include "iostream"

using namespace std;

int main() {
    double m, v, p, ph;
    cout << "Ingrese la masa del objeto" << endl;
    cin >> m;
    cout << "Ingrese el volumen del objeto" << endl;
    cin >> v;
    cout << "Ingrese el peso del objeto" << endl;
    cin >> p;
    ph = m * v * p;
    cout << "La presion hidrostatica es de "<< ph << " N/m^2 y es de ";
    if (ph >= 200) {
        cout << "MAXIMO NIVEL" << endl;
    } else if (ph > 100 && ph < 200) {
        cout << "NIVEL 2" << endl;
    } else {
        cout << "NIVEL 1" << endl;
    }
    system("pause");
    return 0;
}