/*Recorrido de un �rbol en InOrden.
NOTA: InOrden(izquierda, ra�z, derecha).*/

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

//Funci�n de menu.
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

//Funci�n para mostrar el �rbol completo.
void mostrarArbol(Nodo *arbol, int cont)
{
	if (arbol == NULL) //Si el �rbol est� vac�o.
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

//Funci�n para buscar un elemento en el �rbol.
bool busqueda(Nodo *arbol, int n)
{
	if (arbol == NULL) //Si el �rbol est� vac�o.
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

//Funci�n para recorrido en profundidad - PreOrden.
void preOrden(Nodo *arbol)
{
	if (arbol == NULL) //Si el �rbol est� vac�o.
	{
		return;
	}
	else
	{
		cout << arbol->dato << " - "; // <- es la ra�z.
		preOrden(arbol->izq); //Izquierda.
		preOrden(arbol->der); //Derecha.
	}
}

//Funci�n para recorrido en profundidad - InOrden.
void inOrden(Nodo *arbol)
{
	if (arbol == NULL) //Si el �rbol est� vac�o.
	{
		return;
	}
	else
	{
		inOrden(arbol->izq); //Izquierda.
		cout << arbol->dato << " - "; // <- es la ra�z. 
		inOrden(arbol->der); //Derecha.
	}
}
