//Busqueda Secuencial

//a[5] = { 3, 4, 2, 1, 5 }; variable -> dato = 4;


#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	int a[] = { 3, 4, 2, 1, 5 }; //char a[] = { 'e', 'i', 'o', 'a', 'u' }, dato;
	int i, dato;
	char bandera = 'F';
	
	dato = 1; //dato = 'o';
	
	//Busqueda Secuencial
	i = 0;
	while ((bandera == 'F') && (i < 5))
	{
		if (a[i] == dato)
		{
			bandera = 'V';
		}
		i++;
	}
	
	if (bandera == 'F')
	{
		cout << "El numero a buscar no existe en el arreglo" << endl;
	}
	else if (bandera == 'V')
	{
		cout << "El numero a sido encontrado en la posicion: " << i - 1 << endl;
	}
	
	system("pause");
	return 0;
}
