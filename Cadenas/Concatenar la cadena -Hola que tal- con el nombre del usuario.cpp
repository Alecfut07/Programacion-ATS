/*Crear una cadena que tenga la siguiente frase "Hola que tal",
luego crear otra cadena para preguntarle al usuario su nombre,
por último añadir el nombre al final de la primera cadena y
mostrar el mensaje completo: "Hola que tal (Nombre del usuario)".*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char cad1[] = "Hola que tal ";
	char cad2[50]; //Nombre del usuario
	char cad3[50]; //Cadena final
	
	cout << "Digite su nombre: ";
	cin.getline(cad2, 50, '\n');
	
	strcpy(cad3, cad1); //cad3 = "Hola que tal"
	
	strcat(cad3, cad2); //cad3 = "Hotal que tal (Nombre del usuario)"
	
	cout << cad3 << endl;
	
	system("pause");
	return 0;
}
