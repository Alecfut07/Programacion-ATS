/*Pedir su nombre al usuario y devolver el número de vocales que hay.
NOTA: Recuerda que debes utilizar punteros.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

//Prototipo de Función.
void pedirDatos();
int contandoVocales(char *);

char nombreUsuario[30];

int main()
{
	pedirDatos();
	
	cout << "\nEl numero de vocales del nombre es: " << contandoVocales(nombreUsuario) << endl;
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite su nombre: ";
	cin.getline(nombreUsuario, 30, '\n');
	
	strupr(nombreUsuario); //Transformando a MAYÚSCULA EL NOMBRE.
}

int contandoVocales(char *nombre)
{
	int cont = 0;
	
	while (*nombre) //Mientras nombre no sea nulo '\0'
	{
		switch (*nombre)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		nombre++;
	}
	
	return cont; 
}
