/*Escriba un programa que lea de la entrada estándar un carácter e indique
en la salida estándar si el carácter es una vocal minúscula, es una vocal
mayúscula o no es una vocal.*/

#include <iostream>

using namespace std;

int main()
{
	char letra;
	
	cout << "Digite un caracter: ";
	cin >> letra;
	
	switch(letra)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U': cout << "Es una vocal minuscula"; break;
		default : cout << "No es una vocal minuscula"; break;
	}
}
