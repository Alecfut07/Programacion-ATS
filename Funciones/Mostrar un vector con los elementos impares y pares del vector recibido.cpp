/*Realiza una función que tome como parámetros un vector de enteros y su tamaño
e imprima un vector con los elementos impares y pares del vector recibido.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarImpares(int vec[], int);
void mostrarPares(int vec[], int);

int vec[100], tam;

int main()
{
	pedirDatos();
	mostrarImpares(vec, tam);
	mostrarPares(vec, tam);
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el numero de elementos del arreglo: ";
	cin >> tam;
	
	for (int i = 0; i < tam; i++)
	{
		cout << i + 1 << ". Digite un numero: ";
		cin >> vec[i];
	}
}

void mostrarImpares(int vec[], int tam)
{
	cout << "\nMostrando los elementos impares del vector:\n";
	for (int i = 0; i < tam; i++)
	{
		if (vec[i] % 2 == 1)
		{
			cout << vec[i] << " ";
		}
	}
	cout << endl;
}

void mostrarPares(int vec[], int tam)
{
	cout << "\nMostrando los elementos pares del vector:\n";
	for (int i = 0; i < tam; i++)
	{
		if (vec[i] % 2 == 0)
		{
			cout << vec[i] << " ";
		}
	}
	cout << endl;
}
