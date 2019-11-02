/*Realice un programa que calcule la descomposici�n en factores
primos de un n�mero entero. Por ejemplo: 20 = 2 * 2 * 5.*/

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
	int numero, x = 2;
	
	cout << "Digite el numero para descomponer en factores primos: ";
	cin >> numero;
	
	while (numero != 1)
	{
		if (numero % x == 0)
		{
			cout << x << "\t";
			numero /= x;
		}
		else
		{
			x += 1;
		}
	}
	
	cout << "\n";
	
	system("pause");
	return 0;
}
