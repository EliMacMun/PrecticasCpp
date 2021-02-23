#include "iostream"

using namespace std;

int main() {
    double l1, l2, l3;
    cout << "Ingrese el primer lado" << endl;
    cin >> l1;
    cout << "Ingrese el primer lado" << endl;
    cin >> l2;
    cout << "Ingrese el primer lado" << endl;
    cin >> l3;
    if ((l1 == l2) && (l3 == l2) && (l3 == l1)) {
        cout << "Es un triangulo equilatero" << endl;
    } else if ((l1 != l2) && (l3 != l2) && (l3 != l1)) {
        cout << "Es un triangulo escaleno" << endl;
    } else {
        cout << "Es un triangulo isoceles" << endl;
    }
    system("pause");
    return 0;
}