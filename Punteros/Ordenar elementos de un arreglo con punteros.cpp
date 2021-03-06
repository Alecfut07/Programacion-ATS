/*Pedir al usuario N n�meros, almacenarlos en un arreglo din�mico
posteriormente ordenar los n�meros en orden ascendente y mostrarlos en pantallas.
NOTA: Utilizar cualquier m�todo de ordenamiento.*/

#include <iostream>
#include <stdlib.h> //new y delete.

using namespace std;

//Prototipo de Funci�n.
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

int nElementos, *elemento;

int main()
{
	pedirDatos();
	ordenarArreglo(elemento, nElementos);
	mostrarArreglo(elemento, nElementos);
	
	delete[] elemento; //Liberar la memoria utilizada para el arreglo din�mico.
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el numero de elementos del Arreglo: ";
	cin >> nElementos;
	
	elemento = new int[nElementos];
	
	for (int i = 0; i < nElementos; i++)
	{
		cout << "Digite un numero [" << i << "]: ";
		cin >> *(elemento + i); // o tambi�n se puede con: elemento[i];
	}
}

void ordenarArreglo(int *elemento, int nElementos)
{
	//M�todo burbuja.
	int aux;
	
	//Ordenar el arreglo con el m�todo burbuja.
	for (int i = 0; i < nElementos; i++)
	{
		for (int j = 0; j < nElementos - 1; j++)
		{
			if (*(elemento + j) > *(elemento + j + 1)) //elemento[j] > elemento[j + 1]
			{
				aux = *(elemento + j);
				*(elemento + j) = *(elemento + j + 1);
				*(elemento + j + 1) = aux;
			}
		}
	}
}

void mostrarArreglo(int *elemento, int nElementos)
{
	cout << "\n\nMostrando arreglo ordenado: ";
	
	for (int i = 0; i < nElementos; i++)
	{
		cout << *(elemento + i) << " "; //elemento[i]
	}
	
	cout << endl;
}
