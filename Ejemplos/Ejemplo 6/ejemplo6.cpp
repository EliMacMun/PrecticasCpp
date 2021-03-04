// opciones_1.cpp: programa en C++ que convierta centímetros a pulgadas y libras a kilogramos..//

#include "stdafx.h"
#include "conio.h"
#include "iostream"
#include "stdlib.h"


using namespace std; 

int main () { 
int x; 
double pulgadas, kilo, distancia, peso;
menu:
system("cls");
system("color 17");
cout<<"Que desea convertir, distancia o peso?"<<endl;
cout<<"Escriba 1 para distancia o 2 para peso"<<endl;
cin>>x;
 switch (x)
 {
  case 1: cout<<"Ingrese la distancia en centimetros"<<endl;
 cin>>distancia;
 pulgadas = distancia / 2.54;
  	cout<<"Las pulgadas son: "<<pulgadas<<endl;
  	break;
  case 2: 
  	cout<<"Ingrese el peso en libras"<<endl;
  	cin>>peso;
  	kilo = peso * (1 / 2.21);
  	cout<<"Las kilogramos son: "<<kilo<<endl;
  	break;
  default:
  	system("color 4E");
	cout<<"Opcion no valida"<<endl<<endl;
	system("pause");
	goto menu;
 }
 system("pause");
 goto menu;
}
