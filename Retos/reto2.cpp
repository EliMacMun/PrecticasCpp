#include "iostream"

using namespace std;

int main(){
    int cantidadEntradas = 0, entradasNinios = 0, entradasEstudiantes = 0, entradasAdultos = 0;
    double total = 0, descuento = 0;
    char cmd;
    //precio del boleto $80
    cout << "Bienvenido al sistema de compra de boletos" << endl;
    comprarBoleto:
    cout << cantidadEntradas << endl;
    cout << "Que boleto desea comprar?\n\tAdulto\t\t=\tA\n\tNinio\t\t=\tN\n\tEstudiante\t=\tE" << endl;
    cin >> cmd;
    if((cmd == 'A') || (cmd == 'a')) {
        cantidadEntradas++;
        entradasAdultos++;
    } else if ((cmd == 'N') || (cmd == 'n')) {
        cantidadEntradas++;
        entradasNinios++;
    } else if ((cmd == 'E') || (cmd == 'e')) {
        cantidadEntradas++;
        entradasEstudiantes++;
    } else {
        cout << "Opcion no reconocida" << endl;
        if (cantidadEntradas==0) {
            goto comprarBoleto;
        }
    }
    comprarOtro:
    if (cantidadEntradas<4) {
        cout << "Desea comprar otro boleto? (S/N)";
        cin >> cmd;
        if ((cmd == 'S') || (cmd == 's')) {
            goto comprarBoleto;
        } else {
            goto recibo;
        }
    } else {
        cout << "El limite de 4 boletos a sido alcanzado" << endl;
    }
    recibo:
    cout <<  endl;
    cout << "Entradas compradas: " << cantidadEntradas << "\n" << endl;
    cout << "Entrada\t\tPrecio\t\tCantidad\tDescuento\tSubtotal\n" << endl;
    if (entradasAdultos>0) {
        cout << "Adultos\t\t$80\t\t" << entradasAdultos << "\t\t";
        if (entradasAdultos==4) {
            descuento = ((80*4)*0.2);
        } else {
            descuento = 0;
        }
        cout << "$" << descuento <<"\t\t$" <<(80*entradasAdultos)-descuento << endl;
        total += (80*entradasAdultos)-descuento;
    }
    if (entradasNinios>0) {
        cout << "Ninios\t\t$80\t\t" << entradasNinios << "\t\t";
        descuento = ((80*entradasNinios)*0.3);
        cout << "$" << descuento <<"\t\t$" <<(80*entradasNinios)-descuento << endl;
        total += (80*entradasNinios)-descuento;
    }
    if (entradasEstudiantes>0) {
        cout << "Estudiantes\t$80\t\t" << entradasEstudiantes << "\t\t";
        descuento = ((80*entradasEstudiantes)*0.5);
        cout << "$" << descuento <<"\t\t$" <<(80*entradasEstudiantes)-descuento << endl;
        total += (80*entradasEstudiantes)-descuento;
    }    
    cout << endl;
    cout << "\t\t\t\t\t\tTotal:\t\t$" << total << endl;
    cout << endl;
    system("pause");
    // goto comprarBoleto;
    return 0;
}