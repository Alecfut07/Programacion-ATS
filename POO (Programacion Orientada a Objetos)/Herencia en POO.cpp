//Herencia en POO

#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona
{
	private: //Atributos
		string nombre;
		int edad;
	public:	//Métodos
		Persona(string, int); //Constructor
		void mostrarPersona();
};

class Alumno : public Persona
{
	private: //Atributos
		string codigoAlumno;
		float notaFinal;
	public: //Métodos
		Alumno(string, int, string, float); //Constructor de la clase Alumno
		void mostrarAlumno();
};

//Constructor de la clase Persona (Clase Padre)
Persona::Persona(string _nombre, int _edad)
{
	nombre = _nombre;
	edad = _edad;
}

//Constructor de la clase Alumno(Clase Hija)
Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad)
{
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

void Persona::mostrarPersona()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

void Alumno::mostrarAlumno()
{
	cout << "\n";
	mostrarPersona();
	cout << "Codigo Alumno: " << codigoAlumno << endl;
	cout << "Nota Final: " << notaFinal << endl;
}

int main()
{
	Persona persona1("Alec", 19);
	Alumno alumno1("Alejandro", 20, "12312312", 15.6);
	
	persona1.mostrarPersona();
	alumno1.mostrarAlumno();
	
	return 0;
}
