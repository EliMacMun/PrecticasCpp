#include "iostream"
#include "ctype.h"
#include "conio.h"

//ejemplo 1
int funcionentera() //-->Función sin parámetros
{
    int suma = 5 + 5;
    return suma;  //Acá termina la ejecución de la función
    return 5 + 5; //Este return nunca se ejecutará
    int x = 10;   //Esta línea nunca se ejecutará
}

//INVOCAR UNA FUNCIÓN
int a = funcionentera();

//EJEMPLO 2 FUNCIONES
char funcionChar(int n) //Función con un parámetro
{
    //Usamos el parámetro en la función
    if (n == 0)
    {
        char mensaje[10] = 'Es Cero';
        return mensaje;
        //Notar que de aquí para abajo no se ejecuta nada más
    }
    else
    {
        char msje[10] = 'No es cero';
    }
    return msje; //Este return sólo se ejecuta cuando n NO es cero
}

char msje = funcionChar(10); // ‘No es cero’;
char msje = funcionChar(0);  // ‘Es Cero’;

//EJEMPLO 3 DE FUNCIONES
bool funcionBool(int n, string mensaje)
//Función con dos parámetros
{
    if (n == 0) //Usamos el parámetro en la función
    {
        cout << mensaje; //Mostramos el mensaje
        return FALSE;    //Equivalente
    }
    cout << mensaje; //Mostramos el mensaje
    return TRUE;     //Equivalente
}

bool Mensajito = funcionBool(0,”Mensaje mostrado por cero”);
bool Mensajito = funcionBool(2,”Mensaje mostrado por 2”);
