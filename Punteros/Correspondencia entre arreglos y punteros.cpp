//Correspondencia entre arrays y punteros

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numeros[] = { 1, 2, 3, 4, 5 };
	int *dir_numeros;
	
	dir_numeros = numeros;
	
	//Imprimir los elementos del vector.
	for (int i = 0; i < 5; i++)
	{
		cout << "Elemento del vector [" << i << "]: " << *dir_numeros++ << endl;
	}
	
	cout << endl;
	
	//Imprimir la posición de memoria de cada elemento del vector.
	for (int i = 0; i < 5; i++)
	{
		cout << "Posicion de memoria " << numeros[i] << " es: " << dir_numeros++ << endl;
	}
	
	system("pause");
	return 0;
}
