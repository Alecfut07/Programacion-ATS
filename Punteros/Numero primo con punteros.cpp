/*Determinar si un n�mero es primo o no; con punteros y adem�s 
indicar en que posici�n de memoria se guardo el n�mero.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numero, *dir_numero;
	int divisor = 1, divisores = 0;
	
	cout << "Digite un numero: ";
	cin >> numero;
	
	dir_numero = &numero;
	
	do
	{
		if (numero % divisor == 0)
		{
			divisores++;
		}
		divisor++;
	} while(divisor <= numero);
	
	if (divisores == 2)
	{
		cout << "El numero " << *dir_numero << " es PRIMO." << endl;
		cout << "Posicion: " << dir_numero << endl; 
	}
	else
	{
		cout << "El numero " << *dir_numero << " NO es PRIMO." << endl;
		cout << "Posicion: " << dir_numero << endl;
	}
	
	system("pause");
	return 0;
}
