#include "iostream"
#include "math.h"

using namespace std;

int main() {
	double n;
	cout << "Ingrese un numero: ";
	cin >> n;
	cout << "Su cuadrado es " << pow(n, 2) << " y su cubo es " << pow(n,3) << endl;
	system("pause");
    return 0;
}