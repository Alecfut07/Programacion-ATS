/*Realice un programa que lea un valor entero y determine si se trata de un
número par o impar.*/

#include <iostream>

using namespace std;

int main()
{
	int numero;
	
	cout << "Digite un numero: ";
	cin >> numero;
	
	cout << "\n";
	
	if (numero % 2 == 0)
	{
		cout << "El numero es par" << endl;
	}
	else
	{
		cout << "El numero es impar" << endl;
	}
}
