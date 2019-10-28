/*Comprobar si un número digitado por el 
usuario es positivo o negativo.*/

#include <iostream>

using namespace std;

int main()
{
	int numero;
	
	cout << "Digite un numero: ";
	cin >> numero;
	
	if (numero > 0)
	{
		cout << "El numero es postivo: " << numero << endl;
	}
	else
	{
		cout << "El numero es negativo: " << numero << endl;
	}
	
	return 0;
}
