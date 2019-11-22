/*Escriba una función llamada al_cuadrado() que calcule el cuadrado del
valor que se le transmite y despliegue el resultado. La función deberá
ser capaz de elevar al cuadrado números flotantes.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void al_cuadrado(float x);

float num1;

int main()
{
	pedirDatos();
	al_cuadrado(num1);
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite un numero que quiera elevar al cuadrado: ";
	cin >> num1;
}

void al_cuadrado(float x)
{
	float exp = num1 * num1;
	
	cout << "El numero elevado al cuadrado es: " << exp << endl;
}
