/*Utilizar las 2 estructuras del problema: "Estructuras anidadas promedio de un alumno",
pero ahora pedir los datos para N alumnos, y calcular cuál de todos tiene el mejor promedio,
e imprimir sus datos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Promedio
{
	float nota1, nota2, nota3;
};

struct Alumno
{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
} alumnos[100];

int main()
{
	int n_alumnos, mayor = 0, pos_mayor = 0; 
	
	cout << "Digite el numero de alumnos: ";
	cin >> n_alumnos;
	
	for (int i = 0; i < n_alumnos; i++)
	{
		fflush(stdin);
		cout << i + 1 << ". Digite su nombre: ";
		cin.getline(alumnos[i].nombre, 20, '\n');
		cout << i + 1 << ". Digite su sexo: ";
		cin.getline(alumnos[i].sexo, 20, '\n');
		cout << i + 1 << ". Digite su edad: ";
		cin >> alumnos[i].edad;
		
		cout << "\n.:Notas del Alumno:.\n";
		cout << i + 1 << ". Nota 1: ";
		cin >> alumnos[i].prom.nota1;
		cout << i + 1 << ". Nota 2: ";
		cin >> alumnos[i].prom.nota2;
		cout << i + 1 << ". Nota 3: ";
		cin >> alumnos[i].prom.nota3;
		
		float promedios_alumnos[n_alumnos];
		promedios_alumnos[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;
		
		if (promedios_alumnos[i] > mayor)
		{
			mayor = promedios_alumnos[i];
			pos_mayor = i;
		}
		
		cout << "\n";
	}
	
	cout << "\n.:Datos del alumno con mejor promedio:.\n";
	cout << "Nombre: " << alumnos[pos_mayor].nombre << endl;
	cout << "Sexo: " << alumnos[pos_mayor].sexo << endl;
	cout << "Edad: " << alumnos[pos_mayor].edad << endl;
	cout << "Promedio: " << mayor << endl;
	
	system("pause");
	return 0;
}
