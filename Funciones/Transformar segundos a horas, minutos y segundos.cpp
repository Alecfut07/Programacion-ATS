/*Escriba una función nombrada tiempo() que tenga un parámetro en número
entero llamado totalSeg y tres parámetros de referencia enteros nombrados horas, min
y seg. La función es convertir el número de segundos transmitido en un número 
equivalente de horas, minutos y segundos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void tiempo(int, int&, int&, int&);

int main()
{
	int totalSeg, horas, min, seg;
	
	cout << "Digite el numero total de segundos: ";
	cin >> totalSeg;
	
	tiempo(totalSeg, horas, min, seg);
	
	cout << "Tiempo equivalente a la cantidad de segundos digitados: " << endl;
	cout << "\t- Horas: " << horas << endl;
	cout << "\t- Minutos: " << min << endl;
	cout << "\t- Segundos: " << seg << endl;
	
	system("pause");
	return 0;
}

void tiempo(int totalSeg, int& horas, int& min, int& seg)
{
	horas = totalSeg / 3600;
	totalSeg %= 3600;
	
	min = totalSeg / 60;
	
	seg = totalSeg % 60;
}
