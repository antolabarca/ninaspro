#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <string> nombres;
  
  for(int i=0; i<=5; i++)
  {
    string nombre;
    cin >> nombre;
    nombres.push_back(nombre);
  }
  
  for(int i=5; i>=0; i--)
  {
    cout << nombres[i] <<endl;
  }

  return 0;
}