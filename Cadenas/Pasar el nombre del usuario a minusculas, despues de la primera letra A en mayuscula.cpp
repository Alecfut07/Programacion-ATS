/*Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A,
convertir su nombre a minusculas, caso contrario no convertirlo.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char nombre[30];
	
	cout << "Digite su nombre en MAYUSCULAS: ";
	cin.getline(nombre, 30, '\n');
	
	for (int i = 0; i < nombre[i]; i++)
	{
		if (nombre[i] == 'A')
		{
			strlwr(nombre);
			cout << nombre[i];
		}
		else
		{
			cout << nombre[i];
		}
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}
