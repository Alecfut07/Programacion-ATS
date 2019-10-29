/*Escriba un programa que solicite una edad (un entero) e indique en la
salida estándar si la edad introducida está en el rango [18-25].*/

#include <iostream>

using namespace std;

int main()
{
	int edad;
	
	cout << "Digite su edad: ";
	cin >> edad;
	
	//18-19-20-21-22-23-24-25
	
	if ((edad >= 18) && (edad <= 25))
	{
		cout << "Su edad esta en el rango de [18-25]" << endl;
	}
	else
	{
		cout << "Su edad no esta en dicho rango" << endl;
	}
	
	return 0;
}
