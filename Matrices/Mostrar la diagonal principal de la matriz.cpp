/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo
para que muestre la diagonal principal de la matriz.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numeros[100][100], filas, columnas;
	
	cout << "Digite el numero de filas: "; 
	cin >> filas;
	cout << "Digite el numero de columnas: ";
	cin >> columnas;
	
	//Creando la matriz.
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> numeros[i][j];
		}
	}
	
	//Mostrando la matriz.
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "[" << numeros[i][j] << "]";
		}
		cout << "\n";
	}
	
	cout << endl;
	
	//Mostrando la diagonal principal.
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if (i == j)
			{
				cout << "[" << numeros[i][j] << "]" << endl;
			}
		}
	}
	
	system("pause");
	return 0;
}
