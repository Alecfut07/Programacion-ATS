//Estructura Básica en C++

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Persona
{
	char nombre[20];
	int edad;
}

persona1 = { "Alejandro", 20 },
persona2 = { "Ruperto", 15 },
persona3;

int main()
{
	cout << "Nombre1: " << persona1.nombre << endl;
	cout << "Edad1: " << persona1.edad << endl;
	
	cout << "\nNombre2: " << persona2.nombre << endl;
	cout << "Edad2: " << persona2.edad << endl;
	
	cout << "\nNombre3: ";
	cin.getline(persona3.nombre, 20, '\n');
	cout << "Edad3: ";
	cin >> persona3.edad;
	
	cout << "\nImprimiendo datos" << endl;
	cout << "Nombre3: " << persona3.nombre << endl;
	cout << "Edad3: " << persona3.edad << endl;
	
	system("pause");
	return 0;
}
