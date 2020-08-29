#include <iostream>
using namespace std;

int sumaMult(int x)
{
  return (x+1)*3;
}

int main()
{
  int x;
  cin >> x;
  int y = sumaMult(x);
  cout << y << endl;
  return 0;
}