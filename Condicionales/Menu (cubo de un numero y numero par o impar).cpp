/*Haga un menú que considere las siguientes opciones:
   Caso 1: Cubo de un número
   Caso 2: Número par o impar
   Caso 3: Salir.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int opc, numero;
	
	cout << "\tBienvenido al Menu Virtual" << endl;
	cout << "1. Cubo de un numero" << endl;
	cout << "2. Numero par o impar" << endl;
	cout << "3. Salir" << endl;
	cout << "Opcion: ";
	cin >> opc;
	
	cout << "\n";
	
	switch(opc)
	{
		case 1:
			cout << "\tCubo de un numero" << endl;
			cout << "Digite un numero que quiera elevar al cubo: ";
			cin >> numero;
			
			numero = pow(numero, 3);
			
			cout << "El cubo del numero: " << numero << endl;
			break;
		case 2:
			cout << "\tNumero par o impar" << endl;
			cout << "Digite un numero: ";
			cin >> numero;
			
			if (numero % 2 == 0)
			{
				cout << "El numero que digito: " << numero << ", es par." << endl;
			}
			else
			{
				cout << "El numero que digito: " << numero << ", es impar." << endl;
			}
			break;
	}
	
	return 0;
}
