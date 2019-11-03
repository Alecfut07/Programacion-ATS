/*Escribe un programa que defina un vector de números y calcule la
multiplicación acumulada de sus elementos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numeros[] = { 1, 2, 3, 4, 5 };
	int numeros2[] = { 1, 2, 3, 4, 5};
	int numeros3[5]; 
	
	for (int i = 0; i < 5; i++)
	{
		numeros3[i] = numeros[i] * numeros2[i];
	}
	
	cout << "El resultado es:" << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << numeros3[j] << endl;
	}
	
	system("pause");
	return 0;
}
