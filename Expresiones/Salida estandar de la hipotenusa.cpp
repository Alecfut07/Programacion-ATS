/*Escriba un programa que lea de la entrada estándar los dos catetos de un
triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float cateto_opuesto, cateto_adyacente, hipotenusa = 0;
	
	cout << "Digite el valor del cateto opuesto: ";
	cin >> cateto_opuesto;
	cout << "Digite el valor del cateto adyacente: ";
	cin >> cateto_adyacente;
	
	hipotenusa = sqrt(pow(cateto_opuesto, 2) + pow(cateto_adyacente, 2));
	
	cout << "\nEl valor de la hipotenusa es: " << hipotenusa << endl;
	
	
	return 0;
}
