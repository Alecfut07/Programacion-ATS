/*Hacer una función para almacenar N números en un arreglo
dinámico, posteriormente en otra función buscar un número 
en particular.
NOTA: Puedes utilizar cualquier método de búsqueda (Secuencial o Binaria).*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void buscarSecuencial(int *, int);

int nElementos, *elemento, dato;

int main()
{
	pedirDatos();
	buscarSecuencial(elemento, dato);
	
	delete[] elemento;
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el numero de elementos del arreglo: ";
	cin >> nElementos;
	
	elemento = new int[nElementos];
	
	for (int i = 0; i < nElementos; i++)
	{
		cout << "Digite un numero[" << i << "]: ";
		cin >> elemento[i];
	}
	
	cout << "\nDigite el dato que anda buscando: ";
	cin >> dato;
}

void buscarSecuencial(int *elemento, int dato)
{
	//Búsqueda Secuencial.
	int i = 0;
	char bandera = 'F';
	
	while ((bandera == 'F') && (i < 5))
	{
		if (elemento[i] == dato)
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
}
