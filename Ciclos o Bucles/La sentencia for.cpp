/*la sentencia for
   
    for (expresión1; expresión lógica; expresión2)
    {
        conjunto de instrucciones;
	}
*/

#include <iostream>

using namespace std;

int main()
{
	int i, j;
	
	for (i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}
	
	/*
	for (int i = 1; i <= 10; i++)
	{
	    cout << i << endl;
	}
	*/
	
	cout << endl;
	
	for (j = 10; j >= 1; j--)
	{
		cout << j << endl;
	}
	
	/*
	for (int j = 10; j >= 1; j--)
	{
	    cout << j << endl;
	}
	*/
	
	return 0;
}
