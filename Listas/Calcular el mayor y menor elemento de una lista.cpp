/*Crear una lista que almacene "n" números enteros y calcular el menor y mayor 
de ellos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *);

int main()
{
	Nodo *lista = NULL;
	int dato;
	char rpt;
	
	do
	{
		cout << "Digite un numero: ";
		cin >> dato;
		insertarLista(lista, dato); //Agregando un nuevo elemento a la lista.
		
		cout << "Desea agregar otro numero? (s/n): ";
		cin >> rpt;
	} while ((rpt == 'S') || (rpt == 's'));
	
	cout << "\nElementos de la lista: \n";
	mostrarLista(lista);
	
	calcularMayorMenor(lista);
	
	return 0;
}

//Agregar elementos al final de la lista.
void insertarLista(Nodo *&lista, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if (lista == NULL) //Si la lista está vacía.
	{
		lista = nuevo_nodo; //Agregamos el primer elemento a la lista.
	}
	else
	{
		aux = lista; //aux apunta al inicio de la lista.
		
		while (aux->siguiente != NULL) //Recorrer la lista.
		{
			aux = aux->siguiente; //Avanzamos posiciones en la lista.
		}
		aux->siguiente = nuevo_nodo; //Agrego el nuevo nodo a la lista.
	}
	
	cout << "\tElemento " << n << " agregado a lista correctamente.\n";
}

//Mostrar todos los elementos de la lista.
void mostrarLista(Nodo *lista)
{
	while (lista != NULL) //Mientras no sea el final de la lista.
	{
		cout << lista->dato << " -> ";
		lista = lista->siguiente; //Avanzamos a una posición en lista.
	}
}

//Calcular el mayor y menor elemento de la lista.
void calcularMayorMenor(Nodo *lista)
{
	int mayor = 0, menor = 99999;
	
	while (lista != NULL) //Recorremos la lista.
	{
		if ((lista->dato) > mayor) //Calculando el mayor elemento.
		{
			mayor = lista->dato;
		}
		
		if ((lista->dato) < menor) //Calculando el menor elemento.
		{
			menor = lista->dato; 
		}
		lista = lista->siguiente; //Avanzamos una posición en lista.
	}
	
	cout << "\nEl mayor elemento es: " << mayor << endl;
	cout << "El menor elemento es: " << menor << endl;
}
