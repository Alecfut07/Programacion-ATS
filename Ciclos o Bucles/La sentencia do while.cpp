/*La sentencia do while
   
   do
   {
     conjunto de instrucciones;
   }while (expresión lógica);
*/

#include <iostream>

using namespace std;

int main()
{
	int i, j;
	
	i = 1;
	j = 10;
	
	do
	{
		cout << i << endl;
		i++; //aumenta el iterador de uno en uno.
	}while (i <= 10);
	
	cout << endl;
	
	do
	{
		cout << j << endl;
		j--; //decrementa el iterador de uno en uno.
	}while (j >= 1);
	
	return 0;
}
