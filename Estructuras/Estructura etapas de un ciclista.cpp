/*Defina una estructura que indique el tiempo empleado por un ciclista en
una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado n etapas calcule el tiempo total empleado en
correr todas las etapas.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Etapas
{
	int horas, minutos, segundos;
} etapas[100];

int main()
{
	int n_etapas, horas_T =0, minutos_T = 0, segundos_T = 0;
	
	cout << "Digite el numero de etapas: ";
	cin >> n_etapas;
	
	for (int i = 0; i < n_etapas; i++)
	{
		//Pidiendo los datos al usuario.
		cout << "Horas: ";
		cin >> etapas[i].horas;
		cout << "Minutos: ";
		cin >> etapas[i].minutos;
		cout << "Segundos: ";
		cin >> etapas[i].segundos;
		
		horas_T += etapas[i].horas;
		
		minutos_T += etapas[i].minutos;
		if (minutos_T >= 60)
		{
			minutos_T -= 60;
			horas_T++;
		}
		
		segundos_T += etapas[i].segundos;
		if (segundos_T >= 60)
		{
			segundos_T -= 60;
			minutos_T++;
		}
		
		cout << "\n";
	}
	
	cout << "\nTiempo total empleado\n";
	cout << "Horas: " << horas_T << endl;
	cout << "Minutos: " << minutos_T << endl;
	cout << "Segundos: " << segundos_T << endl;
	
	system("pause");
	return 0;
}
