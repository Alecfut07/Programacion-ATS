/*Escribe un programa que lea de la entrada estándar tres números. Después debe
leer un cuarto número e indicar si el número coincide con alguno de los
introducidos con anterioridad.*/

#include <iostream>

using namespace std;

int main()
{
	int n1, n2, n3, n4;
	
	cout << "Digite 3 numeros: " << endl;
	cin >> n1 >> n2 >> n3;
	
	cout << endl;
	
	cout << "Digite otro numero mas: ";
	cin >> n4;
	
	cout << endl;
	
	if (n4 == n1)
	{
		cout << "Con el cuarto numero: " << n4 << ", coincidio con el primer numero: " << n1 << endl;
	}
	else if (n4 == n2)
	{
		cout << "Con el cuarto numero: " << n4 << ", coincidio con el segundo numero: " << n2 << endl;
	}
	else if (n4 == n3)
	{
		cout << "Con el cuarto numero: " << n4 << ", coincidio con el tercer numero: " << n3 << endl;
	}
	
	return 0;
}
