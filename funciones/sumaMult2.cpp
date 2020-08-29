#include <iostream>
using namespace std;

void sumaMult(int x)
{
  int y = (x+1)*3;
  cout << y << endl;
}

int main()
{
  int x;
  cin >> x;
  sumaMult(x);
  return 0;
}