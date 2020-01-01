//Añadir texto al final de un archivo.

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void agregar();

int main()
{
	agregar();
	
	system("pause");
	return 0;
}

void agregar()
{
	//Creando variable.
	ofstream archivo; //Escribir más texto en el archivo (ofstream).
	string texto;
	
	archivo.open("prueba.txt", ios::app); //Abrimos el archivo en modo agregar texto.
	
	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo.";
		exit(1);
	}
	
	cout << "Digite el texto que quiere agregar: ";
	getline(cin, texto);
	
	archivo << texto << endl;
	
	archivo.close(); //Cerramos el archivo.
}
