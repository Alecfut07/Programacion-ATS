/*Escriba un programa que lea de la entrada est�ndar un car�cter e indique
en la salida est�ndar si el car�cter es una vocal min�scula, es una vocal
may�scula o no es una vocal.*/

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
