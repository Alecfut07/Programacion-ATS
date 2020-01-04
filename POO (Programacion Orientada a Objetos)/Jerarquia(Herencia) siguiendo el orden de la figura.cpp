/*Realice un programa en C++, de tal manera que se construya una solución
para la jerarquía(herencia) de clases mostrada en la siguiente figura:
								Persona
						    <-          ->
				Empleado                     Estudiante
				                              |
				                              V
				                             Universitario*/
				                             
#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona
{
	private:
		string nombre;
		int edad;
	public:
		Persona(string, int);
		void mostrarPersona();	
};

class Empleado : public Persona
{
	private:
		string codigoEmpleado;
		string nombreTrabajo;
	public:
		Empleado(string, int, string, string);
		void mostrarEmpleado();	
};

class Estudiante : public Persona
{
	private:
		string codigoAlumno;
		int notaFinal;
	public:
		Estudiante(string, int, string, int);
		void mostrarAlumno();
};

class Universitario : public Estudiante
{
	private:
		string nombreCarrera;
		string grupo;
	public:
		Universitario(string, int, string, int, string, string);
		void mostrarUniversitario();
};

Persona::Persona(string _nombre, int _edad)
{
	nombre = _nombre;
	edad = _edad;
}

Empleado::Empleado(string _nombre, int _edad, string _codigoEmpleado, string _nombreTrabajo) : Persona(_nombre, _edad)
{
	codigoEmpleado = _codigoEmpleado;
	nombreTrabajo = _nombreTrabajo;
}

Estudiante::Estudiante(string _nombre, int _edad, string _codigoAlumno, int _notaFinal) : Persona(_nombre, _edad)
{
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

Universitario::Universitario(string _nombre, int _edad, string _codigoAlumno, int _notaFinal, string _nombreCarrera, string _grupo) : Estudiante(_nombre, _edad, _codigoAlumno, _notaFinal)
{
	nombreCarrera = _nombreCarrera;
	grupo = _grupo;
}

void Persona::mostrarPersona()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

void Empleado::mostrarEmpleado()
{
	mostrarPersona();
	cout << "Codigo del empleado: " << codigoEmpleado << endl;
	cout << "Nombre del trabajo: " << nombreTrabajo << endl;
}

void Estudiante::mostrarAlumno()
{
	mostrarPersona();
	cout << "Codigo del alumno: " << codigoAlumno << endl;
	cout << "Nota Final del alumno: " << notaFinal << endl;
}

void Universitario::mostrarUniversitario()
{
	mostrarAlumno();
	cout << "Nombre de la Carrera: " << nombreCarrera << endl;
	cout << "Grupo: " << grupo << endl;
}

int main()
{
	Persona persona1("Alan", 20);
	Empleado empleado1("Jose", 35, "abc", "Constructor de casas");
	Estudiante estudiante1("Sofia", 16, "xyz", 10);
	Universitario universitario1("Alec", 19, "T030247", 9, "Ingeniero en Ciencias Computacionales", "C3");
	
	persona1.mostrarPersona();
	cout << endl;
	empleado1.mostrarEmpleado();
	cout << endl;
	estudiante1.mostrarAlumno();
	cout << endl;
	universitario1.mostrarUniversitario();
	
	return 0;
}
