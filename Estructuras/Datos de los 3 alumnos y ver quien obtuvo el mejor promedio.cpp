/*Hacer una estructura llamada alumno, en la cual se tendrán los siguientes
campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos,
comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir
los datos del alumno.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

struct Alumno
{
	char nombre[20];
	int edad;
	float promedio;
} alumnos[3];

int main()
{
	for (int i = 0; i < 3; i++)
	{
		fflush(stdin);
		cout << "Digite su nombre: ";
		cin.getline(alumnos[i].nombre, 20, '\n');
		cout << "Digite su edad: ";
		cin >> alumnos[i].edad;
		cout << "Digite su promedio: ";
		cin >> alumnos[i].promedio;
		cout << "\n";
	}
	
	if ((alumnos[0].promedio > alumnos[1].promedio) && (alumnos[0].promedio > alumnos[2].promedio))
	{
		cout << "El primer alumno: " << alumnos[0].nombre << " tiene el mejor promedio" << endl;
		cout << "Su edad: " << alumnos[0].edad << endl;
		cout << "Su promedio: " << alumnos[0].promedio << endl;
	}
	else if ((alumnos[1].promedio > alumnos[0].promedio) && (alumnos[1].promedio > alumnos[2].promedio))
	{
		cout << "El segundo alumno: " << alumnos[1].nombre << " tiene el mejor promedio" << endl;
		cout << "Su edad: " << alumnos[1].edad << endl;
		cout << "Su promedio: " << alumnos[1].promedio << endl;
	}
	else
	{
		cout << "El tercer alumno: " << alumnos[2].nombre << " tiene el mejor promedio" << endl;
		cout << "Su edad: " << alumnos[2].edad << endl;
		cout << "Su promedio: " << alumnos[2].promedio << endl;
	}
	
	system("pause");
	return 0;
}
