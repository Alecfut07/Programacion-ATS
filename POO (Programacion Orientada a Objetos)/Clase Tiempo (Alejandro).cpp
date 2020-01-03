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
		Tiempo(int, int, int); //Constructor1
		Tiempo(int); //Constructor2
		void mostrarTiempo();
};

//Constructor1
Tiempo::Tiempo(int _horas, int _minutos, int _segundos)
{
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}

//Constructor2
Tiempo::Tiempo(int tiempoSeg)
{
	horas = tiempoSeg / 3600; //Extraer horas.
	tiempoSeg %= 3600; 
	minutos = tiempoSeg / 60; //Extraer minutos.
	segundos = tiempoSeg % 60; //Extraer segundos.
}

void Tiempo::mostrarTiempo()
{
	cout << "La hora es: " << horas << ":" << minutos << ":" << segundos << endl;
}

int main()
{
	Tiempo horaActual(16, 23, 30);
	Tiempo haceUnaHora(55410);
	
	horaActual.mostrarTiempo();
	haceUnaHora.mostrarTiempo();
	
	return 0;
}
