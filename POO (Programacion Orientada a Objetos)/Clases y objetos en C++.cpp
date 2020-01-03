//Clases en C++.

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Persona
{
	//Atributos.
	private:
		int edad;
		string nombre;
	
	//Métodos.
	public:
		Persona(int, string); //Constructor de la clase.
		void leer();
		void correr();
};

//Constructor, nos sirve para inicializar los atributos de la clase.
Persona::Persona(int _edad, string _nombre)
{
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer()
{
	cout << "\nSoy " << nombre << " y estoy leyendo un libro." << endl;
}

void Persona::correr()
{
	cout << "\nSoy " << nombre << " y estoy corriendo una maraton y tengo " << edad << " de edad." << endl;
}

int main()
{
	Persona p1 = Persona(19, "Alec");
	Persona p2(20, "Alejandro");
	Persona p3(21, "Juan");
	
	p1.leer();
	p2.correr();
	
	p3.leer();
	p3.correr();
	
	return 0;
}
