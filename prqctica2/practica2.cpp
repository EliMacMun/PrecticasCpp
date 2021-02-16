#include "iostream"

using namespace std;

int main(){
        float bM, bm, a, h;
        cout << "Ingrese la base mayor:";
        cin >> bM;
        cout << "\nIngrese la base menor:";
        cin >> bm;
        cout << "\nIngrese el area:";
        cin >> a;
        h = a*2/(bM+bm);
        cout << "\nLa altura es: " << h << endl;
        return 0;
}
