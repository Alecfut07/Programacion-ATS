/*Realice un programa que lea de la entrada estándar números hasta que se
introduzca un cero. En ese momento el programa debe terminar y mostrar en 
la salida estándar el número de valores mayores que cero leídos.*/

#include <iostream>

using namespace std;

int main()
{
	int numero, suma = 0;
	
	do
	{
		cout << "Digite un numero: ";
		cin >> numero;
		
		if (numero != 0)
		{
			suma += 1;
		}
	}while (numero != 0);
	
	cout << "El número de valores mayores que cero es: " << suma << endl;
	
	return 0;
}
