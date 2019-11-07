/*Hacer un programa que pida al usuario que digite una cadena de caracteres, luego
verificar la longitud de la cadena, y si ésta supera a 10 caracteres mostrarla en 
pantalla, caso contrario no mostrarla.*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
	char cadena[100];
	int longitud = 0;
	
	cout << "Digite su cadena de caracteres: ";
	cin.getline(cadena, 100, '\n');
	
	longitud = strlen(cadena);
	
	if (longitud > 10)
	{
		cout << cadena << endl;
	}
	else
	{
		system("pause");
	    return 0;
	}
}
