#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string puertas[n];
	for (int i = 0; i < n; i++)
	{
		cin >> puertas[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (puertas[i] == "rosado")
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}