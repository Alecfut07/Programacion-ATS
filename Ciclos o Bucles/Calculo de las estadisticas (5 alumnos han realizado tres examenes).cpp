/*En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
    a) Alumnos que aprobaron todos los exámenes.
    b) Alumnos que aprobaron al menos un examen.
    c) Alumnos que aprobaron únicamente el último examen.

Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.*/

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
	int examen1, examen2, examen3, todos = 0, uno = 0, ultimo = 0;
	int alumnos = 5;
	
	for (int i = 1; i <= alumnos; i++)
	{
		cout << "Digite el valor de la nota del primer examen: ";
		cin >> examen1;
		cout << "Digite el valor de la nota del segundo examen: ";
		cin >> examen2;
		cout << "Digite el valor de la nota del tercer examen: ";
		cin >> examen3;
		
		if ((examen1 >= 5) && (examen2 >= 5) && (examen3 >= 5))
		{
			todos++;
		}
		else if ((examen1 >= 5) || (examen2 >= 5) || (examen3 >= 5))
		{
			uno++;
		}
		else if ((examen1 < 5) && (examen2 < 5) && (examen3 >= 5))
		{
			ultimo++;
		}
		
		cout<<"\na) Aprobaron todos los examenes: " << todos;
	    cout<<"\nb) Aprobaron almenos un examen: " << uno;
	    cout<<"\nc) Aprobaron unicamente el ultimo examen: " << ultimo << endl;
	    
	    cout << "\n";
	}
	
	system("pause");
	return 0;
}
