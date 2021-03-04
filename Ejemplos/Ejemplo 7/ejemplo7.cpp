
#include "conio.h"
#include "iostream"
#include "ctype.h"
using namespace std; 

void main () 
{ 
 double salario, aumento;
 char contrato;
menu: 
system("cls");
system("color 57");
cout<<"\t\t\t Indique su tipo de contrato"<<endl;
cout<<"\t\t A) Por obra"<<endl;
cout<<"\t\t B) Por tiempo indeterminado"<<endl;
cout<<"\t\t C) Por periodo de prueba"<<endl;
cout<<"\t\t D) Por capacitación inicial"<<endl<<endl;
cout<<"\t\t Seleccione su tipo de contrato: ";
cin>>contrato;
contrato = toupper(contrato);
cout<<"Ingrese su PAGO o SALARIO por obra actual"<<endl;
cin>>salario;

 	switch (contrato)
 	{
  	case 'A': 
  		aumento = salario + (salario * 0.2);
  		cout<<"Su nuevo salario sera: "<<aumento<<endl;
		break;
  	case 'B': 
  		aumento = salario + (salario * 0.1);
  		cout<<"Su nuevo salario sera: "<<aumento<<endl;
  		break;
  	case 'C': 
  		aumento = salario + (salario * 0.05);
  		cout<<"Su nuevo salario sera: "<<aumento<<endl;
  		break;
  	case 'D': 
  		aumento = salario + (salario * 0.03);
  		cout<<"Su nuevo salario sera: "<<aumento<<endl;
  		break;
  	default:
  		system("color 4F");
		cout<<"Opcion no valida";
		system("pause");
		goto menu;

 	}
 system("pause");
 goto menu;
}
