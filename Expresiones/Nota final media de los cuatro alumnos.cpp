/*Escriba un programa que lea la nota final de cuatro alumnos y 
calcule la nota final media de los cuatro alumnos.*/

#include <iostream>

using namespace std;

int main()
{
	float final_al1, final_al2, final_al3, final_al4, final_media = 0;
	
	cout << "Digite la nota final del alumno 1: "; 
	cin >> final_al1;
	cout << "Digite la nota final del alumno 2: ";
	cin >> final_al2;
	cout << "Digite la nota final del alumno 3: ";
	cin >> final_al3;
	cout << "Digite la nota final del alumno 4: ";
	cin >> final_al4;
	
	final_media = (final_al1 + final_al2 + final_al3 + final_al4) / 4;
	
	cout << "\nLa nota final media de los cuatro alumnos es: " << final_media << endl;
	
	return 0;
}
