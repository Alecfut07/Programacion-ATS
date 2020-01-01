/*Recorrido de un árbol en InOrden.
NOTA: InOrden(izquierda, raíz, derecha).*/

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
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);

Nodo *arbol = NULL;

int main()
{
	menu();
	
	return 0;
}

//Función de menu.
void menu()
{
	int dato, opc, contador = 0;
	char rpt;
	
	do 
	{
		cout << "\t.:MENU:." << endl;
		cout << "1. Insertar un nuevo nodo" << endl;
		cout << "2. Mostrar el arbol completo" << endl;
		cout << "3. Buscar un elemento en el arbol" << endl;
		cout << "4. Recorrer el arbol en PreOrden" << endl;
		cout << "5. Recorrer el arbol en InOrden" << endl;
		cout << "6. Salir" << endl;
		cout << "Opcion: ";
		cin >> opc;
		
		switch (opc)
		{
			case 1:
				do
				{
					cout << "\nDigite un numero: ";
					cin >> dato;
					insertarNodo(arbol, dato); //Insertamos un nuevo nodo.
					cout << "Desea agregar otro numero? (s/n): ";
					cin >> rpt;
				} while ((rpt == 'S') || (rpt == 's'));
				cout << "\n";
				system("pause");
				break;
			case 2:
				cout << "\nMostrando el arbol completo:\n\n";
				mostrarArbol(arbol, contador);
				cout << "\n";
				system("pause");
				break;
			case 3:
				cout << "\nDigite el elemento a buscar: ";
				cin >> dato;
				if (busqueda(arbol, dato) == true)
				{
					cout << "\nElemento " << dato << " ha sido encontrado en el arbol\n";
				}
				else
				{
					cout << "\nElemento no encontrado\n";
				}
				cout << "\n";
				system("pause");
				break;
			case 4:
				cout << "\nRecorrido en PreOrden: ";
				preOrden(arbol);
				cout << "\n\n";
				system("pause");
				break;
			case 5:
				cout << "\nRecorrido en InOrden: ";
				inOrden(arbol);
				cout << "\n\n";
				system("pause");
				break;
		}
		system("cls");
	} while (opc != 6);
}

//Función para crear un nuevo nodo.
Nodo *crearNodo(int n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	
	return nuevo_nodo;
}

//Función para insertar elementos en el árbol.
void insertarNodo(Nodo *&arbol, int n)
{
	if (arbol == NULL) //Si el árbol esta vacio.
	{
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}
	else //Si el árbol tiene un nodo o más.
	{
		int valorRaiz = arbol->dato; //Obtenemos el valor de la raíz.
		if (n < valorRaiz) //Si el elemento es menor a la raíz, insertamos en izquierda.
		{
			insertarNodo(arbol->izq, n);
		}
		else //Si el elemento es mayor a la raíz, insertamos en derecha.
		{
			insertarNodo(arbol->der, n);
		}
	}
}

//Función para mostrar el árbol completo.
void mostrarArbol(Nodo *arbol, int cont)
{
	if (arbol == NULL) //Si el árbol está vacío.
	{
		return;
	}
	else
	{
		mostrarArbol(arbol->der, cont + 1);
		for (int i = 0; i < cont; i++)
		{
			cout << "   ";
		}
		cout << arbol->dato << endl;
		mostrarArbol(arbol->izq, cont + 1);
	}
}

//Función para buscar un elemento en el árbol.
bool busqueda(Nodo *arbol, int n)
{
	if (arbol == NULL) //Si el árbol está vacío.
	{
		return false;
	}
	else if (arbol->dato == n) //Si el nodo es igual al elemento.
	{
		return true;
	}
	else if (n < arbol->dato) //Si el elemento es menor que el nodo.
	{
		return busqueda(arbol->izq, n);
	}
	else if (n > arbol->dato) //Si el elemento es mayor que el nodo.
	{
		return busqueda(arbol->der, n);
	}
}

//Función para recorrido en profundidad - PreOrden.
void preOrden(Nodo *arbol)
{
	if (arbol == NULL) //Si el árbol está vacío.
	{
		return;
	}
	else
	{
		cout << arbol->dato << " - "; // <- es la raíz.
		preOrden(arbol->izq); //Izquierda.
		preOrden(arbol->der); //Derecha.
	}
}

//Función para recorrido en profundidad - InOrden.
void inOrden(Nodo *arbol)
{
	if (arbol == NULL) //Si el árbol está vacío.
	{
		return;
	}
	else
	{
		inOrden(arbol->izq); //Izquierda.
		cout << arbol->dato << " - "; // <- es la raíz. 
		inOrden(arbol->der); //Derecha.
	}
}
