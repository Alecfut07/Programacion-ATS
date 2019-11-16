/*Realizar un programa que lea un arreglo de estructuras los datos de N empleados
de la empresa y que imprima los datos del empleado con mayor salario.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Empleado
{
	char nombre[20];
	float salario;
} empleados[100];

int main()
{
	int n_empleados, pos_mayor = 0, pos_menor;
	float mayor = 0, menor = 999999;
	
	cout << "Digite el numero de empleados: ";
	cin >> n_empleados;
	
	for (int i = 0; i < n_empleados; i++)
	{
		fflush(stdin);
		cout << i + 1 << ". Digite su nombre: ";
		cin.getline(empleados[i].nombre, 20, '\n');
		cout << i + 1 << ". Digite su salario: ";
		cin >> empleados[i].salario;
		
		//200 - 250 - 100
		
		//Empleado de mayor salario.
		if (empleados[i].salario > mayor)
		{
			mayor = empleados[i].salario;
			pos_mayor = i;
		}
		
		//Empleado de menor salario.
		if (empleados[i].salario < menor)
		{
			menor = empleados[i].salario;
			pos_menor = i;
		}
		
		cout << "\n";
	}
	
	cout << "\n.:Datos del empleado con mayor salario:.\n";
	cout << "Nombre: " << empleados[pos_mayor].nombre << endl;
	cout << "Salario: " << empleados[pos_mayor].salario << endl;
	
	cout << "\n.:Datos del empleado con menor salario:.\n";
	cout << "Nombre: " << empleados[pos_menor].nombre << endl;
	cout << "Salario: " << empleados[pos_menor].salario << endl;
	
	system("pause");
	return 0;
}
