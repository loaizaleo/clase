/*Fecha: 09-Mar-2021
Autor: Leonardo Loaiza
Descripción: Programa para leer un archivo de datos, ponerlo en un
array y calcular la desviación estandar usando clases C++*/
#include "lectura.h"
#include <iostream>
using namespace std;

//Declaracion de MAIN
int main(int argc, char* argv[])
{
float x[80];
float sigma=0,h=0;
leer_archivo datos;
datos.leer_datos(x);
h=datos.promedio(x);
sigma=datos.desviacion(x,h);
cout<<h<<"\t+-"<<sigma<<endl;
}//Fin de MAIN

