// ifelse_formulagral.cpp: define el punto de entrada de la aplicación de consola.

#include "conio.h"
#include "iostream"
#include "math.h"

using namespace std;
int main() {
inicio:
    system("cls");
    float a, b, c, x1, x2;

    cout << "Ingresa el valor de a: " << endl;
    cin >> a;
    cout << "Ingresa el valor de b: " << endl;
    cin >> b;
    cout << "Ingresa el valor de c: " << endl;
    cin >> c;
    // Como nos indica la formula:
    // restamos el valor de b elevado a 2 (b*b), con el valor de 4 * a * c
    float x = pow(b, 2) - (4 * a * c);

    if (x <= 0) {
        cout << "NO HAY SOLUCIÓN" << endl;
        system("pause");
        goto inicio;
    } else {
        if (x == 0) {
            x1 = (-1 * b) / (2 * a);
            cout << "LA ÚNICA SOLUCIÓN ES " << x1 << endl;
            system("pause");
            goto inicio;
        } else {
            // Aplicamos la formula
            x1 = (-b + sqrt(x)) / (2 * a);
            x2 = (-b - sqrt(x)) / (2 * a);

            cout << "La primera solución es " << x1 << endl;
            cout << "La segunda solución es " << x2 << endl;
            system("pause");
            goto inicio;
        }
    }
}
