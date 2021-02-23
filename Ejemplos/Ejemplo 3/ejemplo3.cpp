// Programa que calcula la Ley de Newton, según lo desea el usuario
#include "iostream"
using namespace std;
int main() {
inicio:
    system("cls");
    char opc;
    float f, m, a;
    cout << "PROGRAMA QUE DETERMINA FUERZA, MASA O ACELERACION" << endl;
    cout << "Capture su opción a calcular: " << endl;
    cout << "F. uerza" << endl << "M. asa" << endl << "A. celeración" << endl;
    cin >> opc;
    if ((opc == 'F') || (opc == 'f')) {
        cout << " Capture la Masa" << endl;
        cin >> m;
        cout << " Capture la Aceleración" << endl;
        cin >> a;
        f = m * a;
        cout << " El valor de la fuerza es:" << f << endl;
        system("pause");
        goto inicio;
    } else {
        if ((opc == 'M') || (opc == 'm')) {
            cout << " Capture la Fuerza" << endl;
            cin >> f;
            cout << " Capture la Aceleración" << endl;
            cin >> a;
            m = f / a;
            cout << " El valor de la masa es:" << m << endl;
            system("pause");
            goto inicio;
        } else {
            if ((opc == 'A') || (opc == 'a')) {
                cout << " Capture la Masa" << endl;
                cin >> m;
                cout << " Capture la Fuerza" << endl;
                cin >> f;
                a = f / m;
                cout << " El valor de la Aceleración es:" << a << endl;
                system("pause");
                goto inicio;
            } else {
                cout << " \n OPCION NO RECONOCIDA!!! \n\n ";
                system("pause");
                goto inicio;
            }
        }
    }
    return 0;
}
