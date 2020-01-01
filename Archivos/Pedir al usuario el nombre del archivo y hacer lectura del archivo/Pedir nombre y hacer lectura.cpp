/*Realice un programa que pida al usuario el nombre o ubicación de un
fichero de texto y, a continuación de lectura a todo el fichero.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void pedirDatos();
void lectura();

char nombreArchivo[50];

int main()
{
	pedirDatos();
	lectura();
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el nombre del archivo (sin la extension .txt): ";
	cin.getline(nombreArchivo, 50, '\n');
	
	cout << endl;
	
	strcat(nombreArchivo, ".txt"); //Añado al final del nombre ".txt"
}

void lectura()
{
	ifstream archivo;
	string texto;
	
	archivo.open("C++.txt", ios::in);
	
	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	
	while (!archivo.eof())
	{
		getline(archivo, texto);
		cout << texto << endl;
	}
	cout << endl;
	
	archivo.close();
}
