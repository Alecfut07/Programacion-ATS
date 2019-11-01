//Escriba un programa que calcule el valor de: 1*2*3*...*n

#include <iostream>

using namespace std;

int main()
{
	int numero, factorial = 1;
	
	cout << "Digite el numero de elementos: ";
	cin >> numero;
	
	for (int i = 1; i <= numero; i++)
	{
		factorial *= i;
	}
	
	cout << "\nEl factorial del numero es: " << factorial << endl;
	
	return 0;
}
