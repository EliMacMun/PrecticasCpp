#include "iostream"

using namespace std;

int main(){
    
    double pm,pr,t;
inicio:
	system("cls");
	cout<<"Cantidad del Prestamo a desear: $"; cin>> pr;
	cout<<"A cuantos meses desea su prestamo (6, 12 o 24)? "; cin>> t;

	if (t==6)	{
		pm= (pr/t) + ((pr/t) * 0.1);
	    cout<<"Pago por mes: $" <<pm<<endl;
		cout<<"GRACIAS por su atencion";	
    }
    if (t==12) {
	    pm= (pr/t) + ((pr/t) * .2);
	    cout<<"Pago por mes: $" <<pm<<endl;
		cout<<"GRACIAS por su atencion";
	}
	if (t==24) {
		pm= (pr/t) + ((pr/t) * .4);
	    cout<<"Pago por mes: $" <<pm<<endl;
		cout<<"GRACIAS por su atencion";
	}
	if ((t!=6)&&(t!=12)&&(t!=24)) { 
		cout<<"Solo disponibles prestamos de 6, 12 o 24 meses"<<endl;
		cout<<"GRACIAS por su atencion";
	}
	cout<<"\n\n";
	system("pause");
	goto inicio;
    
}