//Comparar cadenas - Función strcmp()

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
	char palabra1[] = "Hola";
	char palabra2[] = "Hola";
	char palabra3[] = "Alec";
	char palabra4[] = "alec";
	char palabra5[] = "becerro";
	char palabra6[] = "avion";
	
	if (strcmp(palabra1, palabra2) == 0)
	{
		cout << "Ambas cadenas son iguales" << endl;
	}
	
	if (strcmp(palabra3, palabra4) != 0) //else if (strcmp(palabra1, palabra2) == 1) <- es la misma condición
	{
		cout << "Ambas cadenas son diferentes" << endl;
	}
	
	if (strcmp(palabra5, palabra6) > 0)
	{
		cout << palabra5 << " esta despues alfabeticamente" << endl;
	}
	else if (strcmp(palabra5, palabra6) < 0)
	{
		cout << palabra5 << " esta despues alfabeticamente" << endl;
	}
	
	system("pause");
	return 0;
}
