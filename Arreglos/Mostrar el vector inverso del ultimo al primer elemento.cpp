/*Escribe un programa que defina un vector de n�meros y muestre en la 
salida est�ndar el vector en orden inverso - del �ltimo al primer 
elemento.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numeros[100], n;
	
	cout << "Digite el numero de elementos que va a tener el arreglo: ";
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cout << "Digite un numero: ";
		cin >> numeros[i];
	}
	
	for (int i = n; i > 0; i--)
	{
		cout << i - 1 << " -> " << numeros[i - 1] << endl;
	}
	
	system("pause");
	return 0;
}
