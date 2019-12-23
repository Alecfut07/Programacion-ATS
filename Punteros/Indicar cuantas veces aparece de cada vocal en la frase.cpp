/*Pedir una cadena de caracteres (string) al usuario, e indicar
cuantas veces aparece la vocal a, e, i, o, u; en la cadena de caracteres.
NOTA: Usar punteros.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void pedirDatos();
void contadorVocales(char *);

char frase[100];

int main()
{
	pedirDatos();
	contadorVocales(frase);
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite la frase: ";
	cin.getline(frase, 100, '\n');
}

void contadorVocales(char *frase)
{
	int cont_Aa = 0, cont_Ee = 0, cont_Ii = 0, cont_Oo = 0, cont_Uu = 0;
	
	while (*frase)
	{
		switch (*frase)
		{
			case 'A':
			case 'a': cont_Aa++; break;
			case 'E':
			case 'e': cont_Ee++; break;
			case 'I':
			case 'i': cont_Ii++; break;
			case 'O':
			case 'o': cont_Oo++; break;
			case 'U':
			case 'u': cont_Uu++; break;
		}
		frase++;
	}
	
	cout << "La cantidad de vocales de A o tambien a son: " << cont_Aa << endl;
	cout << "La cantidad de vocales de E o tambien e son: " << cont_Ee << endl;
	cout << "La cantidad de vocales de I o tambien i son: " << cont_Ii << endl;
	cout << "La cantidad de vocales de O o tambien o son: " << cont_Oo << endl;
	cout << "La cantidad de vocales de U o tambien u son: " << cont_Uu << endl;
}
