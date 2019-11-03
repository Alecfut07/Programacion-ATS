/*Escribe un programa que defina un vector de números y calcule
si existe algún número en el vector cuyo valor equivale a la suma
del resto de números del vector.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numeros[100], n, suma = 0, numero_equivalente;
	
	cout << "Digite el numero de elementos del arreglo: ";
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". Digite un numero: ";
		cin >> numeros[i];
		
		suma += numeros[i];
		
		if (suma == numeros[i])
		{
			numero_equivalente = numeros[i];
		}
	}
	
	cout << "\nLa suma total es: " << suma << endl;
	cout << "El numero parecido que digito es: " << numero_equivalente << endl;
	
	system("pause");
	return 0; 
}
