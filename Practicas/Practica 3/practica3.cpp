#include "iostream"

using namespace std;

int main() {
    double horas, paga, total;
    int unidades;
    cout << "Ingrese la cantidad de paga por hora" << endl;
    cin >> paga;
    cout << "\nIngrese las horas trabajadas" << endl;
    cin >> horas;
    cout << "\nIngrese las unidades producidas" << endl;
    cin >> unidades;
    total = horas*paga;
    if (unidades > 100) {
        total += total*0.4;
    }
    cout << "\nTotal: " << total << endl;
    system("pause");
    return 0;
}
