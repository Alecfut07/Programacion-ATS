/*Escribe un programa que lea de la entrada estándar el precio de un producto y muestre 
en la salida estándar el precio del producto al aplicarle el IVA.*/

#include <iostream>

using namespace std;

int main()
{
	int precio_producto, precio_final = 0;
	double IVA = 0.16;
	
	cout << "Digite el precio del producto: "; 
	cin >> precio_producto;
	
	precio_final = (precio_producto * IVA) + precio_producto;
	
	cout << "\nEl precio del producto al aplicarle el IVA es: " << precio_final << endl;
	
	return 0;
}
