//Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int matriz1[3][3], matriz2[3][3], matriz3[3][3], suma = 0;
	
	//Digitando los datos para la matriz 1.
	cout << "MATRIZ 1" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> matriz1[i][j];
		}
	}
	
	cout << endl;
	
	//Digitando los datos para la matriz 2.
	cout << "MATRIZ 2" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> matriz2[i][j];
		}
	}
	
	//Haciendo la elevación cuadrada de la matriz 1 y matriz 2.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matriz1[i][j] *= matriz1[i][j];
			matriz2[i][j] *= matriz2[i][j];
		}
	}
	
	//Imprimiendo la matriz 1.
	cout << "\nLa matriz 1 cuadrada" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "[" << matriz1[i][j] << "]" << " ";
		}
		cout << "\n";
	}
	
	//Imprimiendo la matriz 2.
	cout << "\nLa matriz 2 cuadrada" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "[" << matriz2[i][j] << "]" << " ";
		}
		cout << "\n";
	}
	
	//Haciendo la sumatoria de la matriz 1 al cuadrado y la matriz 2 al cuadrado.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			suma = matriz1[i][j] + matriz2[i][j];
			matriz3[i][j] = suma;
		}
	}
	
	//Imprimiendo la matriz 3 TOTAL.
	cout << "\nLa matriz 3 TOTAL" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "[" << matriz3[i][j] << "]" << " ";
		}
		cout << "\n";
	}
	
	system("pause");
	return 0;
}
