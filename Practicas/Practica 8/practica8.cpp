#include "iostream"

using namespace std;

void KmhToMs();
void KmToMi();
void msToKmh();
void miToKm();

int main() {
    inicio:
    int opcion;
    cout << "\nIngrese la opcion que desea realizar\n\n\t1\tKm/h a m/s\n\t2\tKm a mi\n\t3\tm/s a Km/h\n\t4\tmi a Km\n\t5\tEXIT\n";
    cin >> opcion;
    if (opcion == 1) {
        KmhToMs();
    } else if (opcion == 2) {
        KmToMi();
    } else if (opcion == 3) {
        msToKmh();
    }else if (opcion == 4) {
        miToKm();
    } else if (opcion == 5) {
        goto fin;
    } else {
        system("cls");
        cout << "ERROR: Opcion invalida" << endl;
        system("pause");
        system("cls");
    }
    goto inicio;
    fin:
    system("exit");
}

void KmhToMs(){
    double kmh;
    cout << "Ingrese Km/h: ";
    cin >> kmh;
    cout << kmh <<" Km/h son " << (kmh * 3.6) << " m/s" << endl;
    system("pause");
    system("cls");
    return;
}

void KmToMi(){
    double km;
    cout << "Ingrese Km: ";
    cin >> km;
    cout << km <<" Km son " << (km * 0.621371) << " mi" << endl;
    system("pause");
    system("cls");
    return;
}

void msToKmh(){
    double m;
    cout << "Ingrese m/s: ";
    cin >> m;
    cout << m <<" m/s son " << (m / 3.6) << " Km/h" << endl;
    system("pause");
    system("cls");
    return;
}

void miToKm(){
    double mi;
    cout << "Ingrese mi: ";
    cin >> mi;
    cout << mi <<" mi son " << (mi * 1.60934) << " Km" << endl;
    system("pause");
    system("cls");
    return;
}