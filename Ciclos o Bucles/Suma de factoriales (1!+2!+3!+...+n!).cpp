/*Escriba un programa que calcule el valor de:
1!+2!+3!+...+n! (suma de factoriales).*/

#include <iostream>

using namespace std;

int main()
{
	int numero, factorial = 1, suma = 0;
	
	cout << "Digite el numero de elementos: ";
	cin >> numero;
	
	for (int i = 1; i <= numero; i++)
	{
		factorial *= i; //primero sacamos los factoriales.
		suma += factorial; //luego los sumamos.
	}
	
	cout << "\nLa suma de factoriales es: " << suma << endl;
	
	return 0;
}
