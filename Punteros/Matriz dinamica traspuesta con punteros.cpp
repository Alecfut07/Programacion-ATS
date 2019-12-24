/*Realice un programa que lea una matriz dinámica de NxM
y cree su matriz traspuesta.
NOTA: La matriz traspuesta es aquella en la que la columna i era
la fila i de la matriz original.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz, nFilas, nCol;

int main()
{
	pedirDatos();
	mostrarMatriz(puntero_matriz, nFilas, nCol);
	
	for (int i = 0; i < nFilas; i++)
	{
		delete[] puntero_matriz[i];
	}
	
	delete[] puntero_matriz;
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el numero de filas: ";
	cin >> nFilas;
	cout << "Digite el numero de columnas: ";
	cin >> nCol;
	
	puntero_matriz = new int*[nFilas];
	for (int i = 0; i < nFilas; i++)
	{
		puntero_matriz[i] = new int[nCol];
	}
	
	cout << "\nDigite los elementos de la matriz: \n";
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			cout << "Digite un numero[" << i << "][" << j << "]: ";
			cin >> *(*(puntero_matriz + i) + j);
		}
	}
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int Col)
{
	cout << "\nMatriz Original\n";
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			cout << "[" << *(*(puntero_matriz + i) + j) << "]" << " ";
		}
		cout << "\n";
	}
	
	cout << "\nMatriz Traspuesta\n";
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			cout << "[" << *(*(puntero_matriz + j) + i) << "]" << " ";
		}
		cout << "\n";
	}
}
