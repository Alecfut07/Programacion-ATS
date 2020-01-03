//Desctructor

#include <iostream>
#include <stdlib.h>

using namespace std;

class Perro
{
	private:
		string nombre, raza;
	public:
		Perro(string, string); //Constructor
		~Perro(); //Destructor
		void mostrarDatos();
		void jugar();
};

//Constructor
Perro::Perro(string _nombre, string _raza)
{
	nombre = _nombre;
	raza = _raza;
}

//Destructor
Perro::~Perro()
{
}

void Perro::mostrarDatos()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Raza: " << raza << endl;
}

void Perro::jugar()
{
	cout << "El perro " << nombre << " esta jugando." << endl;
}

int main()
{
	Perro perro1("Fido", "Doberman");
	
	perro1.mostrarDatos();
	perro1.jugar();
	
	/*
	perro1.~Perro();
	NOTA: No es tan importante de declararlo porque al momento de finalizar el programa
	todos los objetos construidos serán eliminados o reservar memoria de la computadora.
	
	Porque:
	Perro::~Perro()
	{
	}
	 Ya automáticamente lo hace en ese destructor.
	*/
	perro1.~Perro(); //Destruyendo el objeto
	
	cout << "\n";
	
	return 0;
}
