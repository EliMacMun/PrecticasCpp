#include "iostream"

using namespace std;

int main(){
    double r, v, i;
    cout << "\nCapture V: ";
    cin >> v;
    cout << "\nCapture I: ";
    cin >> i;
    r = v/i;
    cout << "\nLa resistencia es " << r << " y es ";
    if (r > 4000) {
        cout << "piel callosa";
    } else if (r > 300 && r <= 4000) {
        cout << "piel seca normal";
    } else if (r > 150 && r <= 300) {
        cout << "piel sudorosa";
    } else if (r > 0 && r <= 150) {
        cout << "piel mojada" << endl;
    }
    system("Pause");
    return 0;
}