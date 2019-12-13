/*Escriba una plantilla de función llamada maximo() que devuelva el valor
máximo de tres argumentos que se transmitan a la función cuando sea llamada.
Suponga que los tres argumentos serán del mismo tipo de datos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

template <class T>
T maximo(T dato1, T dato2, T dato3);

int main()
{	
	//3 argumentos de tipo int
	int num1, num2, num3;
	cout << "Digite 3 numeros enteros: ";
	cin >> num1 >> num2 >> num3;
	cout << "El variable mayor de los int es: " << maximo(num1, num2, num3) << endl;
	
	//3 argumentos de tipo double
	double n1, n2, n3;
	cout << "\nDigite 3 numeros decimales: ";
	cin >> n1 >> n2 >> n3;
	cout << "El numero mayor de los double es: " << maximo(n1, n2, n3) << endl;
	
	//3 argumentos de tipo float
	float numero1, numero2, numero3;
	cout << "\nDigite 3 numeros decimales: ";
	cin >> numero1 >> numero2 >> numero3;
	cout << "El numero mayor de los float es: " << maximo(numero1, numero2, numero3) << endl;
	
	//3 argumentos de tipo char
	char letra1, letra2, letra3;
	cout << "\nDigite 3 letras: ";
	cin >> letra1 >> letra2 >> letra3;
	cout << "La letra mayor de los char es: " << maximo(letra1, letra2, letra3) << endl;
	
	system("pause");
	return 0;
}

template <class T>
T maximo(T dato1, T dato2, T dato3)
{
	T max;
	
	if (dato1 > dato2 && dato1 > dato3)
	{
		max = dato1;
	}
	else if (dato2 > dato1 && dato2 > dato3)
	{
		max = dato2;
	}
	else
	{
		max = dato3;
	}
	
	return max;
}
