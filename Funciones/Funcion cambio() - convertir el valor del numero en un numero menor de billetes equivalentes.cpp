/*Escriba una funci�n nombrada cambio() que tenga un par�metro en n�mero entero
y seis par�metros de referencia en n�mero entero nombrados cien, cincuenta,
veinte, diez, cinco y uno, respectivamente. La funci�n tiene que considerar el
valor entero trarnsmitido como una cantidad en d�lares y convertir el valor en
el n�mero menor de billetes equivalentes.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main()
{
	int dolares, cien, cincuenta, veinte, diez, cinco, uno;
	
	cout << "Digite un numero de dolares: ";
	cin >> dolares;
	
	cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);
	
	cout << "Cantidad de billetes a entregar como cambio:" <<endl; 
	cout << "\tCien: " << cien <<endl; 
	cout << "\tCincuenta: " << cincuenta << endl; 
	cout << "\tVeinte: " << veinte <<endl; 
	cout << "\tDiez: " << diez <<endl; 
	cout << "\tCinco: " << cinco <<endl; 
	cout << "\tUno: " << uno <<endl;
	
	system("pause");
	return 0;
}

void cambio(int dolares, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno)
{
    cien = dolares / 100;
    dolares %= 100;
    
    cincuenta = dolares / 50;
    dolares %= 50;
    
    veinte = dolares / 20;
    dolares %= 20;
    
    diez = dolares / 10;
    dolares %= 10;
    
    cinco = dolares / 5; 
    
	uno = dolares % 5;
}
