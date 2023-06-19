#include <iostream>

using namespace std;

int n{ 0 };
bool primo{ false };
int main() 
{
	cout << "ingrese un numero para n: " << endl;
	cin >> n;
	

	for (int i = 2 ; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			cout << "no es primo";
			cout << "\n";
			primo = false;
		}
		else
		{
			cout << "es primo";
			cout << "\n";
			primo = true;
		}
	}
	
	if (primo == true) 
	{
		for (int i = 1; i <= n; i++)
		{
			if ((n / 2) + 1 == i)
			{
				cout << " " << " @ " << " " << endl;
			}
			else if ((n / 2) + 1 < i)
			{
				cout << "@ " << " " << " @" << endl;
			}
			else if ((n / 2) + 1 > i)
			{
				cout << "@ " << " " << " @" << endl;
			}
		}
	}
	



	return 0;
}