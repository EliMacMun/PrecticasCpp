#include "iostream"

using namespace std;

void ATMToPascal();
void pascalToBar();
void barToPascal();
void barToATM();

int main() {
    inicio:
    int opcion;
    cout << "\nIngrese la opcion que desea realizar\n\n\t1\tATM a Pascal\n\t2\tPascal a Bar\n\t3\tBar a ATM\n\t4\tBar a Pascal\n\t5\tEXIT\n";
    cin >> opcion;
    if (opcion == 1) {
        ATMToPascal();
    } else if (opcion == 2) {
        pascalToBar();
    } else if (opcion == 3) {
        barToPascal();
    }else if (opcion == 4) {
        barToATM();
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

void ATMToPascal(){
    double atm;
    cout << "Ingrese ATM: ";
    cin >> atm;
    cout << atm <<" ATM son " << (atm * 101325) << " Pascales" << endl;
    system("pause");
    system("cls");
    return;
}

void pascalToBar(){
    double pascal;
    cout << "Ingrese Pascal: ";
    cin >> pascal;
    cout << pascal <<" Pascales son " << (pascal / 100000) << " Bar" << endl;
    system("pause");
    system("cls");
    return;
}

void barToPascal(){
    double bar;
    cout << "Ingrese Bar: ";
    cin >> bar;
    cout << bar <<" Bar son " << (bar * 100000) << " ATM" << endl;
    system("pause");
    system("cls");
    return;
}

void barToATM(){
    double bar;
    cout << "Ingrese Bar: ";
    cin >> bar;
    cout << bar <<" Bar son " << (bar * 0.986923) << " Pascal" << endl;
    system("pause");
    system("cls");
    return;
}