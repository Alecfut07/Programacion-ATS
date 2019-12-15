/*Realice una función que tome como parámetros un vector y su tamaño y
diga si el vector está ordenado crecientemente. Sugerencia: compruebe
que para todas las posiciones del vector, salvo para la 0, el elemento
del vector es mayor o igual que el elemento que le precede en el vector.*/

#include <iostream>
#include <stdlib.h>

#define true 1
#define false 0

using namespace std;

void pedirDatos();
void indicar_ordenado(int vec[], int);

int vec[100], tam;

int main()
{
	pedirDatos();
	indicar_ordenado(vec, tam);
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el numero de elementos para el vector: ";
	cin >> tam;
	
	for (int i = 0; i < tam; i++)
	{
		cout << i + 1 << ". Digite un numero: ";
		cin >> vec[i];
	}
}

void indicar_ordenado(int vec[], int tam)
{
	int i, ultimo, creciente = true, decreciente = true;
	
	//Hacer comprobaciones en el vector.
	ultimo = vec[0];
	for (int i = 1; i < tam; i++)
	{
		if (vec[i] < ultimo)
		{
			creciente = false;
		}
		
		if (vec[i] > ultimo)
		{
			decreciente = false;
		}
		
		ultimo = vec[i];
	}
	
	//Imprimir resultados.
	if (creciente && decreciente)
	{
		cout << "El vector tiene todos los valores repetidos.\n" << endl;
	}
	else if (creciente)
	{
		cout << "El vector esta ordenado de forma creciente.\n" << endl;
	}
	else if (decreciente)
	{
		cout << "El vector esta ordenado de forma decreciente.\n" << endl;
	}
	else 
	{
		cout << "El vector esta desordenado.\n" << endl;
	}
}
