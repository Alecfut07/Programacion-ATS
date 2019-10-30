/*Realice un programa que lea de la entrada est�ndar n�meros hasta que se
introduzca un cero. En ese momento el programa debe terminar y mostrar en 
la salida est�ndar el n�mero de valores mayores que cero le�dos.*/

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
	
	cout << "El n�mero de valores mayores que cero es: " << suma << endl;
	
	return 0;
}
