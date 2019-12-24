/*Defina una estructura que indique el tiempo empleado por un
ciclista en recorrer una etapa. La estructura debe tener tres
Campos: horas, minutos y segundos. Escriba un programa que dado
3 etapas, calcule el tiempo total empleado en correr todas las 
etapas.
NOTA: Usar punteros.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Ciclista
{
	int horas, minutos, segundos;
} ciclista, *puntero_ciclista = &ciclista;

void pedirDatos();
void calcularTiempoTotal(Ciclista *);

int main()
{
	pedirDatos();
	calcularTiempoTotal(puntero_ciclista);
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Introducir los tiempos de cada etapa:\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Etapa [" << i + 1 << "]" << endl;
		cout << "Digite las horas: ";
		cin >> (puntero_ciclista + i)->horas;
		cout << "Digite los minutos: ";
		cin >> (puntero_ciclista + i)->minutos;
		cout << "Digite los segundos: ";
		cin >> (puntero_ciclista + i)->segundos;
		cout << "\n";
	}
}

void calcularTiempoTotal(Ciclista *puntero_ciclista)
{
	int totalHoras = 0, totalMinutos = 0, totalSegundos = 0;
	
	cout << "\nMostrando el tiempo total del ciclista:\n";
	for (int i = 0; i < 3; i++)
	{
		totalHoras += (puntero_ciclista + i)->horas;
		totalMinutos += (puntero_ciclista + i)->minutos;
		totalSegundos += (puntero_ciclista + i)->segundos;
		
		if (totalMinutos >= 60)
		{
			totalMinutos -= 60;
			totalHoras++;
		}
		
		if (totalSegundos >= 60)
		{
			totalSegundos -= 60;
			totalMinutos++;
		}
	}
	
	cout << "El tiempo total del ciclista es -> " << totalHoras << ":" << totalMinutos << ":" << totalSegundos << endl;
	cout << "Horas: " << totalHoras << endl;
	cout << "Minutos: " << totalMinutos << endl;
	cout << "Segundos: " << totalSegundos << endl;
}
