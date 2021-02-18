#include "iostream"

using namespace std;

int main(){
    float f, v, r, m;
    cout << "Ingrese la fuerza centripeta: ";
    cin >> f;
    cout << "\nIngrese la velocidad: ";
    cin >> v;
    cout << "\nIngrese el radio: ";
    cin >> r;
    m = (f * r) / (v * v);
    cout << "\nLa masa es: " << m << endl;
    return 0;
}