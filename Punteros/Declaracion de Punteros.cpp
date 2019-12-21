/*Punteros - Declaraci�n de Punteros

&n = La direcci�n de n
*n = la variables cuya direcci�n est� almacenada en n

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int num, *dir_num;
	
	num = 20;
	dir_num = &num;
	
	cout << "Numero: " << num << endl;
	cout << "Direccion de memoria: " << &num << endl;
	
	cout << "\nNumero: " << *dir_num << endl;
	cout << "Direccion de memoria: " << dir_num << endl;
	
	system("pause");
	return 0;
}
