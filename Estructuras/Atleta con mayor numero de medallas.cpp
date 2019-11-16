/*Hacer un arreglo de estructuras llamada atleta para N atletas que contenga los
siguientes campos: nombre, país, numero de medallas. Y devuelva los datos (Nombre,
país) del atleta que ha ganado el mayor número de medallas.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Atleta
{
	char nombre[20];
	char pais[30];
	int num_medallas;
} atletas[100];

int main()
{
	int n_atletas, mayor = 0, pos_mayor = 0;
	
	cout << "Digite el numero de atletas: ";
	cin >> n_atletas;
	
	for (int i = 0; i < n_atletas; i++)
	{
		fflush(stdin);
		cout << i + 1 << ". Digite su nombre: ";
		cin.getline(atletas[i].nombre, 20, '\n');
		cout << i + 1 << ". Digite su pais: ";
		cin.getline(atletas[i].pais, 30, '\n');
		cout << i + 1 << ". Digite la cantidad de medallas: ";
		cin >> atletas[i].num_medallas;
		
		if (atletas[i].num_medallas > mayor)
		{
			mayor = atletas[i].num_medallas;
			pos_mayor = i;
		}
		
		cout << "\n";
	}
	
	cout << "\n.:Datos del atleta con mayor numero de medallas:.\n";
	cout << "Nombre: " << atletas[pos_mayor].nombre << endl;
	cout << "Pais: " << atletas[pos_mayor].pais << endl;
	
	system("pause");
	return 0;
}
