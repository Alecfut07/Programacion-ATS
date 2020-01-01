//Eliminar un nodo del árbol - parte 3.

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};

//Prototipos de las funciones.
void menu();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

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
		cout << "6. Recorrer el arbol en PostOrden" << endl;
		cout << "7. Salir" << endl;
		cout << "Opcion: ";
		cin >> opc;
		
		switch (opc)
		{
			case 1:
				do
				{
					cout << "\nDigite un numero: ";
					cin >> dato;
					insertarNodo(arbol, dato, NULL); //Insertamos un nuevo nodo.
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
			case 6:
				cout << "\nRecorrido en PostOrden: ";
				postOrden(arbol);
				cout << "\n\n";
				system("pause");
				break;
		}
		system("cls");
	} while (opc != 7);
}

//Función para crear un nuevo nodo.
Nodo *crearNodo(int n, Nodo *padre)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

//Función para insertar elementos en el árbol.
void insertarNodo(Nodo *&arbol, int n, Nodo *padre)
{
	if (arbol == NULL) //Si el árbol esta vacio.
	{
		Nodo *nuevo_nodo = crearNodo(n, padre);
		arbol = nuevo_nodo;
	}
	else //Si el árbol tiene un nodo o más.
	{
		int valorRaiz = arbol->dato; //Obtenemos el valor de la raíz.
		if (n < valorRaiz) //Si el elemento es menor a la raíz, insertamos en izquierda.
		{
			insertarNodo(arbol->izq, n, arbol);
		}
		else //Si el elemento es mayor a la raíz, insertamos en derecha.
		{
			insertarNodo(arbol->der, n, arbol);
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

//Función para recorrido en profundidad - PostOrden.
void postOrden(Nodo *arbol)
{
	if (arbol == NULL) //Si el árbol está vacío.
	{
		return;
	}
	else
	{
		postOrden(arbol->izq); //Izquierda.
		postOrden(arbol->der); //Derecha.
		cout << arbol->dato << " - "; // <- es la raíz.
	}
}

//Eliminar un nodo del árbol.
void eliminar(Nodo *arbol, int n)
{
	if (arbol == NULL) //Si el árbol está vacío.
	{
		return; //No haces nada.
	}
	else if (n < arbol->dato) //Si el valor es menor.
	{
		eliminar(arbol->izq, n); //Busca por la izquierda.
	}
	else if (n > arbol->dato) //Si el valor es mayor.
	{
		eliminar(arbol->der, n); //Busca por la derecha.
	}
	else //Si ya encontraste el valor.
	{
		eliminarNodo(arbol);
	}
}

//Función para determinar el nodo más izquierdo posible.
Nodo *minimo(Nodo *arbol)
{
	if (arbol == NULL) //Si el árbol está vacío.
	{
		return NULL; //Retornas nulo.
	}
	
	if (arbol->izq) //Si tiene hijo izquierdo.
	{
		return minimo(arbol->izq); //Buscamos la parte más izquierda posible.
	}
	else //Si no tiene hijo izquierdo.
	{
		return arbol; //Retornamos el mismo nodo.
	}
}

//Función para reemplazar dos nodos.
void reemplazar(Nodo *arbol, Nodo *nuevoNodo)
{
	if (arbol->padre)
	{
		//arbol->padre hay que asignarle su nuevo hijo.
		if (arbol->dato == arbol->padre->izq->dato)
		{
			arbol->padre->izq = nuevoNodo;
		}
		else if (arbol->dato == arbol->padre->der->dato)
		{
			arbol->padre->der = nuevoNodo;
		}
	}
	
	if (nuevoNodo)
	{
		//Procedemos a asignarle su nuevo padre.
		nuevoNodo->padre = arbol->padre;
	}
}

//Función para destruir un nodo.
void destruirNodo(Nodo *nodo)
{
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}

//Función para eliminar el nodo encontrado.
void eliminarNodo(Nodo *nodoEliminar)
{
	if (nodoEliminar->izq && nodoEliminar->der) //Si el nodo tiene hijo izquierdo y derecho.
	{
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	}
	else if (nodoEliminar->izq) //Si tiene hijo izquierdo.
	{
		reemplazar(nodoEliminar, nodoEliminar->izq);
		detruirNodo(nodoEliminar);
	}
	else if (nodoEliminar->der) //Si tiene hijo derecho.
	{
		reemplazar(nodoEliminar, nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}
}
