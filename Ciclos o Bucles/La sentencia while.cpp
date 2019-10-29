/*La sentencia while:
    
    while (expresión lógica)
    {
        conjunto de instrucciones;
    }
*/

#include <iostream>

using namespace std;

int main()
{
	int i, j;
	
	i = 1;
	j = 10;
	
	while(i <= 10)
	{
		cout << i << endl;
		i++;
	}
	
	cout << endl;
	
	while (j >= 1)
	{
		cout << j << endl;
		j--;
	}
	
	return 0;
}
