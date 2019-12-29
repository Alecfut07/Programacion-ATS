/*Crear una lista que almacene "n" números reales 
y calcular su suma y promedio de estos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	float dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main()
{
	Nodo *lista = NULL;
	float dato;
	char rpt;
	
	do
	{
		cout << "Digite un numero: ";
		cin >> dato;
		insertarLista(lista, dato);
		
		cout << "\nDesea agregar otro numero? (s/n): ";
		cin >> rpt;
	} while ((rpt == 'S') || (rpt == 's'));
	
	cout << "\nElementos de la lista:\n";
	mostrarLista(lista);
	
	calcularSumaPromedio(lista);
	
	system("pause");
	return 0;
}

void insertarLista(Nodo *&lista, float n)
{
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if (lista == NULL)
	{
		lista = nuevo_nodo;
	}
	else
	{
		aux = lista;
		while (aux->siguiente != NULL)
		{
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo;
	}
	
	cout << "\tElemento " << n << " agregado a lista correctamente.";
}

void mostrarLista(Nodo *lista)
{
	while (lista != NULL)
	{
		cout << lista->dato << " -> ";
		lista = lista->siguiente;
	}
}

void calcularSumaPromedio(Nodo *lista)
{
	float suma = 0, promedio = 0;
	int cont = 0;
	
	while (lista != NULL)
	{
		suma += lista->dato;
		cont++;
		lista = lista->siguiente; 
	}
	
	promedio = suma / cont;
	
	cout << "\nLa suma total de los elementos ingresados es: " << suma << endl;
	cout << "El promedio total de los elementos ingresados es: " << promedio << endl;
}
