/*Convertir dos cadenas de minúsculas a MAYÚSCULAS. Compararlas,
y decir si son iguales o no.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char palabra1[50];
	char palabra2[50];
	
	cout << "Digite la primera palabra: ";
	cin.getline(palabra1, 50, '\n');
	cout << "Digite la segunda palabra: ";
	cin.getline(palabra2, 50, '\n');
	
	strupr(palabra1);
	strupr(palabra2);
	
	cout << endl;
	
	if (strcmp(palabra1, palabra2) == 0)
	{
		cout << "La primera palabra: " << palabra1 << endl;
		cout << "y la segunda palabra: " << palabra2 << endl;
		cout << "Ambas palabras son iguales" << endl;
	}
	else
	{
		cout << "La primera palabra: " << palabra1 << endl;
		cout << "y la segunda palabra: " << palabra2 << endl;
		cout << "Ambas palabras no son iguales" << endl;
	}
	
	system("pause");
	return 0;
}
