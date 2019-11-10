//Pasar una palabra a MAYÚSCULA - Función strupr()

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char palabra[] = "alec";
	
	strupr(palabra);
	
	cout << palabra << endl;
	
	system("pause");
	return 0;
}
