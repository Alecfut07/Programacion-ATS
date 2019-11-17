/*Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos: el nombre de la persona
y un valor de tipo lógico que indica si la persona tiene algún tipo
de discapacidad. Realice un programa que dado un vector de personas
rellene dos nuevos vectores: uno que contenga las personas que no 
tienen ninguna discapacidad y otro que contenga las personas con 
discapacidad.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Persona
{
	char nombre[20];
	bool discapacidad; // (1 <- VERDADERO) ó (0 <- FALSO)
} personas_con[100], personas_sin[100];

int main()
{
	int N_personas_con, N_personas_sin;
	
	cout << "Digite el numero de personas con discapacidad: ";
	cin >> N_personas_con;
	cout << "Digite el numero de personas sin discapacidad: ";
	cin >> N_personas_sin;
	
	cout << "\nRellene la lista de las personas que SI tienen discapacidad." << endl;
	for (int i = 0; i < N_personas_con; i++)
	{
		fflush(stdin);
		cout << "Digite 1 (si la persona tiene discapacidad): ";
		cin >> personas_con[i].discapacidad;
		
		if (personas_con[i].discapacidad == 1)
		{
			fflush(stdin);
			cout << i + 1 << ". Digite su nombre: ";
			cin.getline(personas_con[i].nombre, 20, '\n');
		}
		
		cout << "\n";
	}
	
	cout << "\nRellene la lista de las personas que NO tienen discapacidad." << endl;
	for (int j = 0; j < N_personas_sin; j++)
	{	
	    fflush(stdin);
	    cout << "Digite 0 (si la persona no tiene discapacidad): ";
	    cin >> personas_sin[j].discapacidad;
		    
		if (personas_sin[j].discapacidad == 0)
	    {	
		   	fflush(stdin);
		   	cout << j + 1 << ". Digite su nombre: ";
		   	cin.getline(personas_sin[j].nombre, 20, '\n');
	   	}
	}
	
	cout << endl;
	
	cout << "Lista de las personas que SI tienen discapacidad" << endl;
	for (int i = 0; i < N_personas_con; i++)
	{
		cout << i + 1 << ". Nombre: " << personas_con[i].nombre << endl;
	}
	
	cout << endl;
	
	cout << "Lista de las personas que NO tienen discapacidad" << endl;
	for (int j = 0; j < N_personas_sin; j++)
	{
		cout << j + 1 << ". Nombre: " << personas_sin[j].nombre << endl;
	}
	
	system("pause");
	return 0;
}
