#include <iostream>

using namespace std;

int main()
{
	char Base[60][235];
	int fila{ 0 }, columna{ 0 };


	fila = 30;
	columna = 170;

	for (int i{ 0 }; i < 60; i++)
	{
		for (int j{ 0 }; j < 235; j++)
		{
			Base[i][j] = '_';
			if (j == 234)
			{
				cout << "\n";
				cout << Base[i][j];
			}
			else if ((29 < i < 51) && (169 < j < 226))
			{
				Base[i][j] = '@';
			}
			else
			{
				cout << Base[i][j];
			}
		}
	}

	return 0;
}
