/*Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz
es simétrica si es cuadrada y si es igual a su matriz transpuesta.


|8 1 3|        |8 1 3|
|1 7 4|  -->   |1 7 4|
|3 4 9|        |3 4 9|

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numeros[100][100], filas, columnas;
	char bandera = 'F';
	
	cout << "Digite el numero de filas: ";
	cin >> filas;
	cout << "Digite el numero de columnas: ";
	cin >> columnas;
	
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> numeros[i][j];
		}
	}
	
	if (filas == columnas)
	{
		for (int i = 0; i < filas; i++)
		{
			for (int j = 0; j < columnas; j++)
			{
				if (numeros[i][j] == numeros [j][i])
				{
					bandera = 'V';
				}
			}
		}
	}
	
	if (bandera == 'V')
	{
		cout << "\nLa matriz es simetrica" << endl;
	}
	else
	{
		cout << "\nLa matriz no es simetrica" << endl;
	}
	
	system("pause");
	return 0;
}
