/*Paso de parámetros de tipo vector

Parametros de la función: 
    void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)
	
Llamada a la función
    nombreDeFuncion(nombreArreglo, tamañoArreglo)
*/

//Cuadrados de los elementos del vector

#include <iostream>
#include <stdlib.h>

using namespace std;

void muestra_vector(int vec[], int);
void cuadrado(int vec[], int);
void muestra_cuadrado(int vec[], int);

int main()
{
	const int TAM = 5;
	int vec[TAM] = { 1, 2, 3, 4, 5 };
	
	muestra_vector(vec, TAM);
	cuadrado(vec, TAM);
	muestra_cuadrado(vec, TAM);
	
	system("pause");
	return 0;
}

void muestra_vector(int vec[], int tam)
{
	cout << "Vector con los numeros establecidos:" << endl;
	for (int i = 0; i < tam; i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}

void cuadrado(int vec[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		vec[i] *= vec[i];
	}
}

void muestra_cuadrado(int vec[], int tam)
{
	cout << "Vector con los numeros al cuadrado:" << endl;
	for (int i = 0; i < tam; i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}
