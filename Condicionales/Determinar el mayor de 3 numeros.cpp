/*Escriba un programa que lea tres números y determine 
cuál de ellos es el mayor.*/

#include <iostream>

using namespace std;

int main()
{
	int n1, n2, n3;
	
	cout << "Digite tres numeros:" << endl;
	cin >> n1 >> n2 >> n3;
	
	cout << "\n";
	
	if (n1 == n2 && n1 == n3)
	{
		cout << "Los 3 numeros son iguales" << endl;
	}
	else if (n1 > n2 && n1 > n3)
	{
		cout << "El primer numero es el mayor de todos: " << n1 << endl;
	}
	else if (n2 > n1 && n2 > n3)
	{
		cout << "El segundo numero es el mayor de todos: " << n2 << endl;
	}
	else if (n3 > n1 && n3 > n2)
	{
		cout << "El tercer numero es el mayor de todos: " << n3 << endl;
	}
}
