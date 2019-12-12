/*Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier
número introducido por el usuario. Por ejemplo, si se introduce el número
256.879, debería desplegarse el número 0.879.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void parteFraccionaria(float x, float y);

float numerador, denominador;

int main()
{
	pedirDatos();
	parteFraccionaria(numerador, denominador);
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el numerador: ";
	cin >> numerador;
	cout << "Digite el denominador: ";
	cin >> denominador;
}

void parteFraccionaria(float x, float y)
{
	float resultado = x / y;
	
	cout << "\nEl resultado de la fraccion es: " << resultado << endl;
}
