/*Realice un programa que pida al usuario el nombre o ubicación de un fichero
de texto y, a continuación añada texto en él hasta que el usuario lo decida.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void pedirDatos();
void agregar();

char nombreArchivo[50];

int main()
{
	pedirDatos();
	agregar();
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el nombre del archivo (sin la extension .txt): ";
	cin.getline(nombreArchivo, 50, '\n');
	
	cout << endl;
	
	strcat(nombreArchivo, ".txt");
}

void agregar()
{
	ofstream archivo;
	string texto;
	char rpt;
	
	archivo.open("prueba.txt", ios::app);
	
	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo.";
		exit(1);
	}
	
	do
	{
		fflush(stdin);
		cout << "Digite el texto que quiere agregar: ";
		getline(cin, texto);
			
		archivo << texto << endl;
			
		cout << "\nDesea agregar mas texto al archivo? (s/n): ";
		cin >> rpt;
	} while ((rpt == 'S') || (rpt == 's'));
	/*
	getline(archivo, texto);
	cout << texto << endl;
	*/
	
	archivo.close();
}
