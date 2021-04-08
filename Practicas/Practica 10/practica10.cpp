#include "iostream"
using namespace std;
int main() {
    inicio:
    int t, limit;
    cout << "Elija que tabla desea realizar" << endl;
    for (int i = 1; i <= 10; i++) cout << i << "\tpara la tabla del " << i << endl;
    cout << "etc...\n0\tpara salir" << endl;
    cin >> t;
    if (t == 0) goto fin; 
    limit = t<10?10:t;
    for (int i = 1; i <= limit; i++) cout << t << "x" << i << "=\t" << (t*i) << endl;
    system("pause");
    goto inicio;
    fin:
    return 0;
}
