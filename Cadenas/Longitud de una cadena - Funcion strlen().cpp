//Longitud de unas cadenas de caracteres - Funci�n strlen()

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char palabra[] = "hola que tal?";
	int longitud = 0;
	
	longitud = strlen(palabra);
	
	cout << "Numero de elementos de la cadena es: " << longitud << endl;
	
	system("pause");
	return 0;
}
