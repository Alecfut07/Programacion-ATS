//Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int matriz1[100][100], matriz2[100][100], matriz3[100][100], filas, columnas;
	int producto = 0;
	
	cout << "Digite el numero de filas: ";
	cin >> filas;
	cout << "Digite el numero de columnas: ";
	cin >> columnas;
	
	//Almacenando los datos para la matriz 1.
	cout << "\nMATRIZ 1" << endl;
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> matriz1[i][j];
		}
	}
	
	cout << endl;
	
	//Almacenando los datos para la matriz 2.
	cout << "MATRIZ 2" << endl;
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> matriz2[i][j];
		}
	}
	
	//Realizando la elevación cuadrada de las dos matrices para la matriz 1 y la matriz 2.
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			matriz1[i][j] *= matriz1[i][j];
			matriz2[i][j] *= matriz2[i][j];
		}
	}
	
	cout << endl;
	
	//Imprimiendo la matriz 1 elevada al cuadrado.
	cout << "Matriz 1 al cuadrado" << endl;
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "[" << matriz1[i][j] << "]";
		}
		cout << "\n";
	}
	
	cout << endl;
	
	//Imprimiendo la matriz 2 elevada al cuadrado.
	cout << "Matriz 2 al cuadrado" << endl;
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "[" << matriz2[i][j] << "]";
		}
		cout << "\n";
	}
	
	//Realizando la multiplicación cuadrada entre matriz 1 y matriz 2.
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
		}
	}
	
	cout << endl;
	
	//Imprimiendo la matriz 3 con el TOTAL de la multiplicación cuadrada entre matriz 1 y matriz 2.
	cout << "Matriz 3 con el TOTAL" << endl;
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "[" << matriz3[i][j] << "]";
		}
		cout << "\n";
	}
	
	system("pause");
	return 0;
}
