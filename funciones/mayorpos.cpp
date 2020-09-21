#include <iostream>
using namespace std;

int mayorpos(int int1, int int2)
{
	if(int1>int2)
	{
		if (int1>0)
		{
			return int1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (int2>0)
		{
			return int2;
		}
		else
		{
			return 0;
		}
	}
}

int main(int argc, char const *argv[])
{
	int a, b;
	cin >> a >>b;
	int ans = mayorpos(a,b);
	cout << a << endl;
	return 0;
}

