//Eliminar todos los elementos de la lista.

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

//Prototipos de Funciones.
void menu();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);
void eliminarLista(Nodo *&, int &);

Nodo *lista = NULL;

int main()
{	
	menu();
	
	system("pause");
	return 0;
}

void menu()
{
	int opcion, dato;
	char rpt;
	
	do
	{
		cout << "\t.:MENU:.\n";
		cout << "1. Insertar elementos a la lista\n";
		cout << "2. Mostrar los elementos de la lista\n";
		cout << "3. Buscar un elemento en lista\n";
		cout << "4. Eliminar un elemento en lista\n";
		cout << "5. Eliminar todos los elementos en la lista\n";
		cout << "6. Salir\n";
		cout << "Opcion: ";
		cin >> opcion;
		
		switch (opcion)
		{
			case 1:
				do
				{
					cout << "\nDigite un numero: ";
					cin >> dato;
					insertarLista(lista, dato);
					
					cout << "\nDesea agregar mas numeros? (s/n): ";
					cin >> rpt;
				} while ((rpt == 'S') || (rpt == 's'));
				break;
			case 2: 
				mostrarLista(lista);
				cout << "\n";
				system("pause");
				break;
			case 3:
				cout << "\nDigite un numero a buscar: ";
				cin >> dato;
				buscarLista(lista, dato);
				cout << "\n";
				system("pause");
				break;
			case 4:
				cout << "\nDigite el elemento que desea eliminar: ";
				cin >> dato;
				eliminarNodo(lista, dato);
				cout << "\n";
				system("pause");
				break;
			case 5:
				while (lista != NULL) //Mientras no sea el final de la lista.
				{
					eliminarLista(lista, dato);
					cout << dato << " -> ";
				}
				cout << "\n";
				system("pause");
				break;
		} 
		system("cls");
	} while (opcion != 6);
}

void insertarLista(Nodo *&lista, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while ((aux1 != NULL) && (aux1->dato < n))
	{
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if (lista == aux1)
	{
		lista = nuevo_nodo;
	}
	else
	{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	
	cout << "\tElemento " << n << " ha sido insertado a lista correctamente.\n";
}

void mostrarLista(Nodo *lista)
{
	Nodo *actual = new Nodo();
	
	actual = lista;
	while (actual != NULL)
	{
		cout << actual->dato << " -> ";
		actual = actual->siguiente;
	}
}

void buscarLista(Nodo *lista, int n)
{
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while ((actual != NULL) && (actual->dato <=n))
	{
		if (actual->dato == n)
		{
			band = true;
		}
		actual = actual->siguiente;
	}
	
	if (band == true)
	{
		cout << "Elemento " << n << " SI a sido encontrado en lista\n";
	}
	else
	{
		cout << "Elemento " << n << " NO a sido encontrado en lista\n";
	}
}

void eliminarNodo(Nodo *&lista, int n)
{
	//Preguntar si la lista no esta vacía.
	if (lista != NULL)
	{
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		
		aux_borrar = lista;
		
		//Recorrer la lista.
		while ((aux_borrar != NULL) && (aux_borrar->dato != n))
		{
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
	
		//El elemento no ha sido encontrado.
		if (aux_borrar == NULL)
		{
			cout << "El elemento no ha sido encontrado.\n";
		}
		//El primer elemento es el que vamos a eliminar.
		else if (anterior == NULL)
		{
			lista = lista->siguiente;
			delete aux_borrar;
		}
		//El elemento está en la lista pero, no es el primer nodo.
		else
		{
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}

//Dejar vacía la lista.
void eliminarLista(Nodo *&lista, int &n)
{
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
}
