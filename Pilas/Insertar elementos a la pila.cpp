//Insertar Elementos en la pila.

#include <iostream>
#include <stdlib.h> //new y delete.

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

//Prototipo de Función.
void agregarPila(Nodo *&, int);

int main()
{
	Nodo *pila = NULL;
	int n1, n2;
	
	cout << "Digite un numero: ";
	cin >> n1;
	agregarPila(pila, n1);
	
	cout << endl;
	
	cout << "Digite otro numero: ";
	cin >> n2;
	agregarPila(pila, n2);
	
	system("pause");
	return 0;
}

void agregarPila(Nodo *&pila, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout << "\nElemento " << n << " agregado a PILA correctamente." << endl;
}
