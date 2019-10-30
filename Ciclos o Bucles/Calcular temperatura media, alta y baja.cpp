/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola
durante un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la
temperatura media del día, la temperatura más alta y la más baja.*/

#include <iostream>

using namespace std;

int main()
{
	double temperatura, temp_alta = 0, temp_baja = 100000, temp_media = 0;
	
	for (int i = 0; i < 6; i++)
	{
		cout << "Digite la temperatura: ";
		cin >> temperatura;
		
		temp_media += temperatura;
		
		if (temperatura > temp_alta)
		{
			temp_alta = temperatura;
			continue;
		}
		
		if (temperatura < temp_baja)
		{
			temp_baja = temperatura;
			continue;
		}
	}
	
	temp_media /= 6;
	
	cout << "\nLa temperatura alta es: " << temp_alta << endl;
	cout << "La temperatura baja es: " << temp_baja << endl;
	cout << "La temperatura media es: " << temp_media << endl;
	
	return 0;
}
