/*Escriba un programa que lea dos números y determine cuál de ellos es el mayor.*/

#include <iostream>

using namespace std;

int main()
{
	int n1, n2;
	
	cout << "Digite dos numero: " << endl;
	cin >> n1 >> n2;
	
	cout << "\n";
	
	if (n1 == n2)
	{
		cout << "Ambos numeros son iguales" << endl;
	}
	else if (n1 > n2)
	{
		cout << "El mayor es: " << n1 << endl;
	}
	else
	{
		cout << "El mayor es: " << n2 << endl;
	}
	
	return 0;
}
