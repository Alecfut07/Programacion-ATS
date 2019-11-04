/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro
arreglo multiplicados por 2 y muestre el segundo arreglo.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numeros1[] = { 1, 2, 3, 4, 5 };
	int numeros2[5];
	
	for (int i = 0; i < 5; i++)
	{
		numeros2[i] = numeros1[i] * 2;
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << numeros2[i] << endl;
	}
	
	system("pause");
	return 0;
}
