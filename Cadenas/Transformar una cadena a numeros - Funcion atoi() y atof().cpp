//Transformar una cadena a numeros - Funci�n atoi() y atof()

//Funci�n atoi() - Ejemplo: "123" -> 123
//Funci�n atof() - Ejemplo: "123.45" -> 123.45

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	//Funci�n atoi()
	char cad[] = "123";
	int numero;
	
	numero = atoi(cad);
	
	cout << numero << endl;
	
	//Funci�n atof()
	char cad2[] = "123.456";
	float numero2;
	
	numero2 = atof(cad2);
	
	cout << numero2 << endl;
	
	system("pause");
	return 0;
}
