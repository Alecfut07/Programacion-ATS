/*Escribe un programa que defina un vector de números y calcule la suma de
sus elementos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numeros[] = { 1, 2, 3, 4, 5 };
	int suma = 0;
	
	for (int i = 0; i < 5; i++)
	{
		suma += numeros[i];
	}
	
	cout << "\nLa suma de los elementos del vector es: " << suma << endl;
	
	system("pause");
	return 0;
}
