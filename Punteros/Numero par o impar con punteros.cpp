/*Comprobar si un número es par o impar, y señalar la posición de memoria
donde se está guardando el número. Con punteros.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numero, *dir_numero;
	
	cout << "Digite un numero: ";
	cin >> numero;
	
	dir_numero = &numero; //Guardando la posición de memoria.
	
	if (*dir_numero % 2 == 0)
	{
		cout << "El numero " << *dir_numero << " es par" << endl;
		cout << "Posicion: " << dir_numero << endl;
	}
	else
	{
		cout << "EL numero " << *dir_numero << " es impar" << endl;
		cout << "Posicion: " << dir_numero << endl;
	}
	
	system("pause");
	return 0;
}
