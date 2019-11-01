/*Escriba un programa que calcule x^y, donde tanto
"x" como "y" son enteros positivos, sin utilizar la
función pow.*/

#include <iostream>

using namespace std;

int main()
{
	int x, y, aux;
	
	cout << "Digite la base del numero: ";
	cin >> x;
	cout << "Digite el numero exponencial: ";
	cin >> y;
	
	aux = x;
	
	if (y > 0)
	{
		for (int i = 1; i < y; i++)
		{
			x *= aux;
		}
		
		cout << "\nEl resultado de la potencia es: " << x << endl;
	}
}
