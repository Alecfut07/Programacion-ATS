//Ejemplo encontrar el mayor de 2 numeros

#include <iostream>
#include <stdlib.h>

using namespace std;

//Prototipo de Función
int encontrarMax(int x, int y);

int main()
{
	int n1, n2, mayor;
	
	cout << "Digite 2 numeros: ";
	cin >> n1 >> n2;
	
	mayor = encontrarMax(n1, n2);
	
	cout << "El mayor de los 2 numeros es: " << mayor << endl;
	//cout << "El mayor de los 2 numeros es: " << encontrarMax(n1, n2) << endl;
	
	system("pause");
	return 0;
}

int encontrarMax(int x, int y)
{
	int numMax;
	
	if (x > y)
	{
		numMax = x;
	}
	else
	{
		numMax = y;
	}
	
	return numMax;
}
