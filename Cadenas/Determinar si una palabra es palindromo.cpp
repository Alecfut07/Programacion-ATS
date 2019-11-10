//Hacer un programa que determine si una palabra es políndroma

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	int i = 0;
	string palabra;
	
	cout << "Digite una palabra: ";
	cin >> palabra;
	
	int j = palabra.length() - 1;
	int mitad = j / 2;
	
	while (palabra[i] == palabra[j])
	{
		if (mitad == i)
		{
			cout << "La palabra " << palabra << " es palindromo" << endl;
			break;
		}
		j--;
		i++;
	}
	
	if (mitad != i)
	{
		cout << "La palabra " << palabra << " no es palindromo" << endl;
	}
	
	system("pause");
	return 0;
}
