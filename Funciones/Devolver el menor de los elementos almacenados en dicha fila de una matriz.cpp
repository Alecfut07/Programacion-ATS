/*Realice una función que dada una matriz y un número de fila de la matriz
devuelva el menor de los elementos almacenados en dicha filas.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void menorElemento(int m[][100], int, int);

int m[100][100], nfilas, ncol;

int main()
{
	pedirDatos();
	menorElemento(m, nfilas, ncol);
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el numero de filas: ";
	cin >> nfilas;
	cout << "Digite el numero de columnas: ";
	cin >> ncol;
	
	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}
}

void menorElemento(int m[][100], int nfilas, int ncol)
{
	for (int i = 0; i < nfilas; i++)
	{
		int menor = m[i][0];
		for (int j = 0; j < ncol; j++)
		{
			if (m[i][j] < menor)
			{
				menor = m[i][j];
			}
		}
		cout << "Fila: " << i + 1 << ". El numero menor de esa fila es: " << menor << endl;
	}
}
