/*Pedir al usuario una cadena de caracteres, almacenarla en un arreglo
y copiar todo su contenido hacia otro arreglo de caracteres.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char cadena[100];
	char cadena2[100];
	
	cout << "Digite una frase: ";
	cin.getline(cadena, 100, '\n');
	
	strcpy(cadena2, cadena);
	
	cout << cadena2 << endl;
}
