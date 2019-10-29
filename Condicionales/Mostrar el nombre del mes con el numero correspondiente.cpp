/*Mostrar los meses del año, pidiéndole al usuario un número entre
(1-12), y mostrar el mes al que corresponde.*/

#include <iostream>

using namespace std;

int main()
{
	int num_mes;
	
	cout << "Digite el numero del mes (1-12): ";
	cin >> num_mes;
	
	switch(num_mes)
	{
		case 1: cout << "ENERO" << endl; break;
		case 2: cout << "FEBRERO" << endl; break;
		case 3: cout << "MARZO" << endl; break;
		case 4: cout << "ABRIL" << endl; break;
		case 5: cout << "MAYO" << endl; break;
		case 6: cout << "JUNIO" << endl; break;
		case 7: cout << "JULIO" << endl; break;
		case 8: cout << "AGOSTO" << endl; break;
		case 9: cout << "SEPTIEMBRE" << endl; break;
		case 10: cout << "OCTUBRE" << endl; break;
		case 11: cout << "NOVIEMBRE" << endl; break;
		case 12: cout << "DICIEMBRE" << endl; break;
	}
	
	return 0;
}
