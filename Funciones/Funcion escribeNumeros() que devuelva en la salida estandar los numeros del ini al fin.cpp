/*Escriba una funci�n escribeNumeros(int ini, int fin) que devuelva 
en la salida est�ndar los n�meros del ini al fin. Escriba una versi�n que escriba los 
n�meros en orden ascendente.

		escribeNumeros(ini,fin) = ini                             , si ini=fin
								  escribeNumeros(ini,fin-1)       , si fin>ini
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
int escribeNumeros(int, int);

int inicial, final;

int main()
{
	pedirDatos();
	
	for (int i = inicial; i <= final; i++)
	{
		cout << escribeNumeros(i, final) << " ";
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el numero inicial: ";
	cin >> inicial;
	cout << "Digite el numero final: ";
	cin >> final;
}

int escribeNumeros(int ini, int fin)
{
	if (ini == fin) //Caso base.
	{
		return ini;
	}
	else //Caso general.
	{
		return escribeNumeros(ini, fin - 1);
	}
}
