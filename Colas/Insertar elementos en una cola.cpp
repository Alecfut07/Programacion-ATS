//Insertar elementos en una cola

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

//Prototipos de Función.
void insertarCola(Nodo *&, Nodo*&, int);
bool cola_vacia(Nodo *);

int main()
{
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	char rpt;
	
	do
	{
		cout << "Digite un numero: ";
		cin >> dato;
		insertarCola(frente, fin, dato);
		
		cout << "\nDesea agregar mas numeros? (s/n): ";
		cin >> rpt;
	} while ((rpt == 'S') || (rpt == 's'));
	
	system("pause");
	return 0;
}

//Función para insertar elementos en una cola.
void insertarCola(Nodo *&frente, Nodo*& fin, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if (cola_vacia(frente))
	{
		frente = nuevo_nodo;
	}
	else
	{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
	
	cout << "\tElemento " << n << " insertado a cola correctamente\n";
}

//Función para determinar si la cola está vacía o no.
bool cola_vacia(Nodo *frente)
{
	return (frente == NULL)? true : false;
	
	//La linea 41 es similar al ejemplo de abajo.
	/*if (frente == NULL)
	  {
	  	  return true;
	  }
	  else
	  {
	  	  return false;
	  }
	*/
}
