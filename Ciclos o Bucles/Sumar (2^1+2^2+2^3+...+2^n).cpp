//Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
	int suma = 0, elevacion = 0, numero;
	
	cout << "Digite el numero de elementos a sumar: ";
	cin >> numero;
	
	for (int i = 1; i <= numero; i++)
	{
		elevacion = pow(2, i);
		suma += elevacion; 
	}
	
	cout << "\nLa suma total es: " << suma << endl;
	
	system("pause");
	return 0;
}
