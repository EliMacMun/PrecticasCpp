#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int lados;
    double medida, apotema, area;
    cout << "Ingrese los lados: " << endl;
    cin >> lados;
    cout << "Ingrese la medida: " << endl;
    cin >> medida;
    cout << "Ingrese el apotema: " << endl;
    cin >> apotema;
    area = ((medida * lados) * apotema) / 2;
    cout << "el area es: " << area;
    return 0;
}