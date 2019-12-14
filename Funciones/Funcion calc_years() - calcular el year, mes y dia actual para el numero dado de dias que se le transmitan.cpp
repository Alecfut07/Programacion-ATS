/*Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero que
represente el n�mero total de d�as desde la fecha 1/1/2000 y par�metros de 
referencia nombrados a�o, mes y d�a. La funci�n es calcular el a�o, mes y d�a
actual para el n�mero dado de d�as que se le transmitan. Para este problema
suponga que cada a�o tiene 365 d�as y cada mes tiene 30 d�as.*/

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
