/*Hacer un programa que calcule el resultado de la siguiente expresión:
1-2+3-4+5-6...n*/

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
	int numero, suma_positivos = 0, suma_negativos = 0, negativo, suma_total = 0;
	
	cout << "Digite el numero de elementos: ";
	cin >> numero;
	
	for (int i = 0; i < numero; i++)
	{
		i += 1;
		suma_positivos += i;
	}
	
	for (int j = 1; j < numero; j++)
	{
		j += 1;
		negativo = j * (-1);
		suma_negativos += negativo;
	}
	
	suma_total = suma_positivos + suma_negativos;
	
	cout << "\nLa suma es: " << suma_total << endl;
	
	return 0;
}
