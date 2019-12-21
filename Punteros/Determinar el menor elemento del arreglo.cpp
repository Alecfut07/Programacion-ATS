/*Rellenar un arreglo con n números, posteriormente utilizando
punteros determinar el menor elemento del arreglo.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int elementos;
	int numeros[elementos], *dir_numeros;
	
	cout << "Digite el numeros de elementos: ";
	cin >> elementos;
	
	for (int i = 0; i < elementos; i++)
	{
		cout << "Digite un numero [" << i << "]: ";
		cin >> numeros[i];
	}
	
	dir_numeros = numeros;
	
	int *menor = dir_numeros;
	
	for (int i = 0; i < elementos; i++)
	{
		if (*dir_numeros < *menor)
		{
			menor = dir_numeros;
		}
		dir_numeros++;
	}
	
	cout << "\nEL numero menor del arreglo es: " << *menor << endl;
	cout << "Y su posicion de memoria en ese numero es: " << menor << endl;
	
	system("pause");
	return 0;
}
