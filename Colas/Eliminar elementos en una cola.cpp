//Eliminar elementos en una cola

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

//Prototipos de Funci�n.
void insertarCola(Nodo *&, Nodo*&, int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo*&, int&);

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
	
	//Eliminar los elementos de la cola.
	cout << "\nQuitando los nodos de la cola: ";
	while (frente != NULL)
	{
		suprimirCola(frente, fin, dato);
		
		if (frente != NULL)
		{
			cout << dato << " , ";
		}
		else
		{
			cout << dato << ".";
		}
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}

//Funci�n para insertar elementos en una cola.
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

//Funci�n para determinar si la cola est� vac�a o no.
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

void suprimirCola(Nodo *&frente, Nodo *&fin, int &n)
{
	n = frente->dato;
	Nodo *aux = frente;
	
	if (frente == fin)
	{
		frente = NULL;
		fin = NULL;
	}
	else
	{
		frente = frente->siguiente;
	}
	
	delete aux;
}
