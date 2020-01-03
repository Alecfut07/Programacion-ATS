/*Construya una clase llamada Rectángulo que
tenga los siguientes atributos: largo y ancho,
y los siguientes métodos: perímetro() y área().*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Rectangulo
{
	private:
		int largo, ancho;
	public:
		Rectangulo(int, int);
		void perimetro();
		void area();	
};

Rectangulo::Rectangulo(int _largo, int _ancho)
{
	largo = _largo;
	ancho = _ancho;
}

void Rectangulo::perimetro()
{
	int perimetro = 0;
	perimetro = (largo * 2) + (ancho * 2);
	
	cout << "El perimetro del rectangulo es: " << perimetro << endl;
}

void Rectangulo::area()
{
	int area = 0;
	area = largo * ancho;
	
	cout << "El area del rectangulo es: " << area << endl;
}

int main()
{
	Rectangulo r1(9, 5);
	
	r1.perimetro();
	r1.area();
	return 0;
}
