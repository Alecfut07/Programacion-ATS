//Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n, suma = 0;
	
	cout << "Digite el numero de elementos: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		suma += (2 * i) - 1; //1+3+5+...+2n-1
	}
	
	cout << "\nLa suma es: " << suma << endl;
	
	return 0;
}
