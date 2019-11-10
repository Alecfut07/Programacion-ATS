/*Pedir al usuario que digite 2 caracteres de caracteres, e indicar si ambas cadenas
son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char frase1[100];
	char frase2[100];
	
	cout << "Digite la primera frase: ";
	cin.getline(frase1, 100, '\n');
	cout << "Digite la segunda frase: ";
	cin.getline(frase2, 100, '\n');
	
	if (strcmp(frase1, frase2) == 0)
	{
		cout << "La frase 1: " << frase1 << " y la frase 2 : " << frase2 << endl;
		cout << "Ambas frases son iguales" << endl;
	}
	else if (strcmp(frase1, frase2) > 0)
	{
		cout << frase1 << " esta despues alfabeticamente" << endl;
	}
}
