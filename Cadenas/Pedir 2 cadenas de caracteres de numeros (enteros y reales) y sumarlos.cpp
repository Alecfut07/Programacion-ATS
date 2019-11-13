/*Pedir al usuario, 2 cadenas de caracteres de numeros, uno entero
y el otro real, convertirlos a sus respectivos valores y por último
sumarlos.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	char cad[30], cad2[30];
	int numero;
	float numero2, suma = 0;
	
	cout << "Digite numeros enteros: ";
	cin.getline(cad, 30, '\n');
	
	cout << "Digite numeros reales: ";
	cin.getline(cad2, 30, '\n');
	
	numero = atoi(cad);
	numero2 = atof(cad2);
	
	cout << endl;
	
	suma = numero + numero2;
	
	cout << "La suma de de ambos numeros es: " << suma << endl;
	
	system("pause");
	return 0;
}
