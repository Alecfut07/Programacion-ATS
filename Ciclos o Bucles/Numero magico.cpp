/*Realice un programa que solicite al usuario que piense un n�mero entero
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo
rango[1-100], e indicarle al usuario si el numero que digito es menor o mayor
al numero aleatorio, as� hasta que lo adivine. Y por �ltimo mostrarle el numero
de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int numero, limite_inferior = 0, limite_superior = 0, dato, contador = 0;
	
	srand(time(NULL)); //generar un numero aleatorio;
	dato = 1 + rand() % (100);
	
	do
	{
		cout << "Digite un numero: ";
		cin >> numero; 
		
		if (numero > dato)
		{
			cout << "\nDigite un numero menor\n";
		}
		
		if (numero < dato)
		{
			cout << "\nDigite un numero mayor\n";
		}
		contador++;
	}while (numero != dato);
	
	cout << "\nFELICIDADES ADIVINASTE EL NUMERO\n";
	cout << "Numero de intentos: " << contador << endl;
	
	system("pause");
	return 0;
}
