/*Construya una clase llamada Rectangulo que tenga los siguientes
atributos: largo y ancho, y los siguientes m�todos: perimetro() y area().*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Rectangulo
{
	private: //Atributos.
		float largo, ancho;
	public: //M�todos.
		Rectangulo(float, float); //Constructor de la clase.
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(float _largo, float _ancho)
{
	largo = _largo;
	ancho = _ancho;
}

void Rectangulo::perimetro()
{
	float _perimetro = 0;
	_perimetro = (2 * largo) + (2 * ancho);
	
	cout << "El perimetro es: " << _perimetro << endl; 
}

void Rectangulo::area()
{
	float _area = 0;
	_area = largo * ancho;
	
	cout << "El area es: " << _area << endl;
}

int main()
{
	Rectangulo r1(11, 7);
	
	r1.perimetro();
	r1.area();
	
	return 0;
}
