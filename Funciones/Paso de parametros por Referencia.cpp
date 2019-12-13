//Paso de Parametros por Referencia

#include <iostream>
#include <stdlib.h>

using namespace std;

void valNuevo(int&, int&);

int main()
{
	int num1, num2;
	
	cout << "Digite 2 numeros: ";
	cin >> num1 >> num2;
	
	valNuevo(num1, num2);
	
	cout << "\nEl nuevo valor del primer numero es: " << num1 << endl;
	cout << "El nuevo valor del segundo numero es: " << num2 << endl;
	
	system("pause");
	return 0;
}

//La dirección de memoria
void valNuevo(int& xnum, int& ynum)
{
	cout << "El valor del primer numero es: " << xnum << endl;
	cout << "El valor del segundo numero es: " << ynum << endl;
	
	xnum = 89;
	ynum = 45;
}
