/*Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla
de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en
pantalla.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int filas, columnas, matriz1[100][100], matriz2[100][100];
	
	cout << "Digite el numero de filas: "; 
	cin >> filas;
	cout << "Digite el numero de columnas: ";
	cin >> columnas;
	
	//Digitando los datos de la primera matriz.
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> matriz1[i][j];
		}
	}
	
	//Copiando los datos de la matriz1 a la matriz2.
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			matriz2[i][j] = matriz1[i][j];
		}
	}
	
	cout << endl;
	
	//Mostrando la matriz2.
	cout << "MATRIZ 2" << endl;
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "[" << matriz2[i][j] << "]";
		}
		cout << "\n";
	}
	
	system("pause");
	return 0;
}
