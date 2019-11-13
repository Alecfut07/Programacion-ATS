//Búsqueda Binaria

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	int numeros[] = { 1, 2, 3, 4, 5 };
	int inf, sup, mitad, dato;
	char bandera = 'F';
	
	dato = 4;
	
	//Algoritmo de la Búsqueda Binaria
	inf = 0;
	sup = 5;
	
	while (inf <= sup)
	{
		mitad = (inf + sup) / 2;
		
		if (numeros[mitad] == dato)
		{
			bandera = 'V';
			break;
		}
		
		if (numeros[mitad] > dato)
		{
			sup = mitad;
			mitad = (inf + sup) / 2;
		}
		
		if (numeros[mitad] < dato)
		{
			inf = mitad;
			mitad = (inf + sup) / 2;
		}
	}
	
	if (bandera == 'V')
	{
		cout << "El numero a sido encontrado en la posicion: " << mitad << endl;
	}
	else
	{
		cout << "El numero NO a sido encontrado" << endl;
	}
	
	system("pause");
	return 0;
}
