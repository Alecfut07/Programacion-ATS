/*Escriba una función nombrada calc_años() que tenga un parámetro entero que
represente el número total de días desde la fecha 1/1/2000 y parámetros de 
referencia nombrados año, mes y día. La función es calcular el año, mes y día
actual para el número dado de días que se le transmitan. Para este problema
suponga que cada año tiene 365 días y cada mes tiene 30 días.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void calc_years(int&, int&, int&, int&);

int main()
{
	int dia_inicial = 1, mes_inicial = 1, year_inicial = 2000;
	int totalDias = 0;
	
	cout << "Digite el numero de dias actuales desde la fecha 1/1/2000: ";
	cin >> totalDias;
	
	calc_years(totalDias, year_inicial, mes_inicial, dia_inicial);
	
	cout << "La fecha actual es: " << dia_inicial << "/" << mes_inicial << "/" << year_inicial << endl; 
	
	system("pause");
	return 0;
}

void calc_years(int& totalDias, int& year, int& mes, int& dia)
{
	year += (totalDias / 365);
	
	mes += ((totalDias % 365) / 30); 
	
	dia += ((totalDias % 365) % 30);
}
