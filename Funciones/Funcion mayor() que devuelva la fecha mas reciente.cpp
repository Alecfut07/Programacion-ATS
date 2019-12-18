/*Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente
de cualquier par de fechas que se le transmitan. Por ejemplo, si se transmiten
las fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Fecha
{
	int dia, mes, year;
} fecha1, fecha2;

void pedirDatos();
Fecha mayor(Fecha, Fecha);

int main()
{
	pedirDatos();
	mayor(fecha1, fecha2);
	
	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el dia para la primera fecha: ";
	cin >> fecha1.dia;
	cout << "Digite el mes para la primera fecha: ";
	cin >> fecha1.mes;
	cout << "Digite el year para la primera fecha: ";
	cin >> fecha1.year;
	
	cout << endl;
	
	cout << "Digite el dia para la segunda fecha: ";
	cin >> fecha2.dia;
	cout << "Digite el mes para la segunda fecha: ";
	cin >> fecha2.mes;
	cout << "Digite el year para la segunda fecha: ";
	cin >> fecha2.year;
}

Fecha mayor(Fecha f1, Fecha f2)
{
	if (f1.dia > f2.dia)
	{
		if (f1.mes > f2.mes)
		{
			if (f1.year > f2.year)
			{
				cout << "La primera fecha: " << f1.dia << "/" << f1.mes << "/" << f1.year << " es mayor que la segunda fecha." << endl;
			}
		}
	}
	else
	{
		cout << "La segunda fecha: " << f2.dia << "/" << f2.mes << "/" << f2.year << " es mayor que la primera fecha." << endl;
	}
}
