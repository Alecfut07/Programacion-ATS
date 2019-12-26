/*Hacer un programa en C++, utilizando Pilas que contenga
el siguiente menú:
	1. Insertar un carácter a la pila.
	2. Mostrar todos los elementos de la pila.
	3. Salir.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);
void opcion1();
void opcion2();

Nodo *pila = NULL;
int dato;

int opc;
char rpt;

int main()
{
	int opc;
	char rpt;
	
	do
	{
		system("CLS");
		cout << "Bienvenido al menu principal del programa!" << endl;
     	cout << "==========================================" << endl;
		cout << "1. Insertar un caracter a la pila" << endl;
		cout << "2. Mostrar todos los elementos de la pila" << endl;
		cout << "3. Salir del programa" << endl;
		cout << "==========================================" << endl;
		cout << "\nDigite la opcion: ";
		cin >> opc;
		
		switch (opc)
		{
			case 1:
				opcion1();
				break;
			case 2:
				opcion2();
				break;
			case 3:
				exit(0);
				break;
			default:
				cout << "ERROR" << endl;
				cout << "Intente de nuevo..." << endl;
				break;
		}
		
		cout << "\nDesea regresar al Menu Principal? (s/n): ";
		cin >> rpt;
	} while ((rpt == 'S') || (rpt == 's'));
	
	return 0;
}

void agregarPila(Nodo *&pila, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout << "\tElemento " << n << " ha sido agregado a PILA correctamente.";
}

void sacarPila(Nodo *&pila, int &n)
{
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}

void opcion1()
{
	do
	{
		cout << "\nDigite un numero: ";
		cin >> dato;
					
		agregarPila(pila, dato);
					
		cout << "\nDesea agregar otro elemento a PILA(s/n): ";
		cin >> rpt;
	} while ((rpt == 'S') || (rpt == 's'));
}

void opcion2()
{
	cout << "\nSacando todos los elementos de PILA:" << endl;
	while (pila != NULL)
	{
		sacarPila(pila, dato);
		if (pila != NULL)
		{
			cout << dato << " , ";
		}
		else
		{
			cout << dato << ".";
		}
	}
	cout << endl;
}
