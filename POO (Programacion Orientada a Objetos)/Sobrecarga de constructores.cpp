//Sobrecarga de Constructores.

#include <iostream>
#include <stdlib.h>

using namespace std;

class Fecha
{
	private: //Atributos.
		int dia, mes, year;
	public: //Métodos.
		Fecha(int, int, int); //Constructor1
		Fecha(long); //Constructor2
		void mostrarFecha();
};

/*
	dia/mes/year --- year/mes/dia
	  9/1/2017   --- 20170109
*/

//Constructor1.
Fecha::Fecha(int _dia, int _mes, int _year)
{
	year = _year;
	mes = _mes;
	dia = _dia;
}

//Constructor2.
Fecha::Fecha(long fecha)
{
	year = int(fecha / 10000); //Extraer el year.
	mes = int ((fecha - year * 10000) / 100); //Extraer el mes.
	dia = int (fecha - year * 10000 - mes * 100); //Extraer el dia.
}

void Fecha::mostrarFecha()
{
	cout << "La fecha es: " << dia << "/" << mes << "/" << year << endl;
}

int main()
{
	Fecha hoy(9, 1, 2017);
	Fecha ayer(20170108);
	
	hoy.mostrarFecha();
	ayer.mostrarFecha();
	
	return 0;
}
