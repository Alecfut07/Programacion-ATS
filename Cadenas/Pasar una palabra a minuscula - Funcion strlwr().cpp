//Pasar una palabra a minúsculas - Función strlwr()

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char palabra[] = "PROGRAMACION-ATS";
	
	strlwr(palabra);
	
	cout << palabra << endl;
	
	system("pause");
	return 0;
}
