//Cadenas de Caracteres

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
	char palabra[] = "Alec";
	char palabra2[] = { 'A', 'l', 'e', 'c' };
	char nombre[20];
	
	cout << "Digite su nombre: ";
	cin.getline(nombre, 20, '\n');
	
	cout << nombre << endl;
	
	cout << palabra << endl;
	cout << palabra2 << endl;
	
	system("pause");
	return 0;
}
