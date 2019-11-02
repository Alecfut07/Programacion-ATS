//Realizar la serie de fibonacci -> 1 1 2 3 5 8 13...n

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
	int numero, x = 0, y = 1, z = 1;
	
	cout << "Digite el numero de elementos: ";
	cin >> numero;
	
	cout << "1 ";
	for (int i = 1; i < numero; i++)
	{
		z = x + y; //1 2 3 5
		
		cout << z << " "; //1 2 3 5
		
		x = y; //1 1 2 3
		y = z; //1 2 3 5
	}
	
	cout << "\n";
	
	system("pause");
	return 0;
}
