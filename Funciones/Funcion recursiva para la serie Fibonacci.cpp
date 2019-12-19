/*Realice una función recursiva para la serie Fibonacci.
Nota: La serie de Fibonaccia está formada por la secuencia de números:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34...*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
int fibonacci(int);

int numero;

int main()
{
	pedirDatos();
	
	for (int i = 0; i <= numero - 1; i++)
	{
		cout << "Fibonacci: " << i + 1 << " es: " << fibonacci(i) << endl;
	}
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el numero de elementos: ";
	cin >> numero;
}

int fibonacci(int n)
{
	if (n == 1 || n == 0)
	{
		return n;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
