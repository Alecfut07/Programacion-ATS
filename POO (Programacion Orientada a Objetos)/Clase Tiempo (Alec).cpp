/*Construya una clase Tiempo que contenga los siguientes atributos enteros:
horas, minutos y segundos. Haga que la clase contenga 2 constructores, el
primero debe tener 3 parámetros Tiempo(int, int, int) y el segundo sólo tendrá
un campo que serán los segundos y desensamble el número entero largo en horas,
minutos y segundos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Tiempo
{
	private:
		int horas, minutos, segundos;
	public:
		Tiempo(int, int, int);
		Tiempo(long);
		void mostrarTiempo();
};

Tiempo::Tiempo(int _horas, int _minutos, int _segundos)
{
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}

Tiempo::Tiempo(long tiempo)
{
	horas = tiempo / 3600; //Extraer horas.
	tiempo %= 3600; 
	minutos = tiempo / 60; //Extraer minutos.
	segundos = tiempo % 60; //Extraer segundos.
}

void Tiempo::mostrarTiempo()
{
	if (minutos >= 60)
	{
		minutos -= 60;
		horas++;
	}
	
	if (segundos >= 60)
	{
		segundos -= 60;
		minutos++;
	}
	
	cout << "El tiempo es: " << horas << ":" << minutos << ":" << segundos << endl;
}

int main()
{
	Tiempo t1(5, 35, 20);
	Tiempo t2(20120);
	
	t1.mostrarTiempo();
	t2.mostrarTiempo();
	
	return 0;
}
