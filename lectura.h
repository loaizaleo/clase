#ifndef LECTURA_H
#define LECTURA_H
#include <fstream>
#include <cassert>
#include <math.h>

//Definicion de la clase "leer archivo"
class leer_archivo{
	float prom=0; float sigma=0; float sum=0; float desvest=0;
	int N=80;
	public:
//Funcion para leer los datos de archivo de texto
	void leer_datos(float y[]){
	std::ifstream read_file("pulso.dat");
	assert(read_file.is_open());
	for (int i=0; i<N; i++)
	{
	read_file >> y[i];
	}}
//Funcion para calcular el promedio del array
	float promedio(float x[]){
		for (int i=0; i<N; i++)
	{
	sum+=x[i];
	}
	prom=sum/N;
	return prom;
		}
//Funcion para hallar la desviación estandar
	float desviacion(float x[],float mean){
	for (int j=0; j<N; j++)
	{
	sigma+=pow((x[j]-mean),2);
	}
	desvest=sqrt(sigma/(N-1));
	return desvest;
	}
	
};//Fin de la Clase leer_archivo

#endif
