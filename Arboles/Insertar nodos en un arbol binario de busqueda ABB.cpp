/**/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;
};

//Prototipos de las funciones.
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);

Nodo *arbol = NULL;

int main()
{
	menu();
	
	return 0;
}

//Funci�n de menu.
void menu()
{
	int dato, opc;
	char rpt;
	
	do 
	{
		cout << "\t.:MENU:." << endl;
		cout << "1. Insertar un nuevo nodo" << endl;
		cout << "2. Salir" << endl;
		cout << "Opcion: ";
		cin >> opc;
		
		switch (opc)
		{
			case 1:
				do
				{
					cout << "\nDigite un numero: ";
					cin >> dato;
					cout << "Desea agregar otro numero? (s/n): ";
					cin >> rpt;
				} while ((rpt == 'S') || (rpt == 's'));
				insertarNodo(arbol, dato); //Insertamos un nuevo nodo.
				cout << "\n";
				system("pause");
				break;
		}
		system("cls");
	} while (opc != 2);
}

//Funci�n para crear un nuevo nodo.
Nodo *crearNodo(int n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	
	return nuevo_nodo;
}

//Funci�n para insertar elementos en el �rbol.
void insertarNodo(Nodo *&arbol, int n)
{
	if (arbol == NULL) //Si el �rbol esta vacio.
	{
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}
	else //Si el �rbol tiene un nodo o m�s.
	{
		int valorRaiz = arbol->dato; //Obtenemos el valor de la ra�z.
		if (n < valorRaiz) //Si el elemento es menor a la ra�z, insertamos en izquierda.
		{
			insertarNodo(arbol->izq, n);
		}
		else //Si el elemento es mayor a la ra�z, insertamos en derecha.
		{
			insertarNodo(arbol->der, n);
		}
	}
}
