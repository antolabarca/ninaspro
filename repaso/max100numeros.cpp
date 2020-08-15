#include <iostream>
using namespace std;

/* Lee 100 numeros, y muestra en pantalla el numero mas grande y la posicion en la que vino

Nota: para el primer elemento, se debe considerar la posicion 1, no 0 */

int main() {
  int numeros[100];
  for(int i=0; i<100; i++)
  {
    cin >> numeros[i];
  }

  int max = numeros[0];
  int index = 0;
  for(int i=1; i<100; i++)
  {
    if(numeros[i]>max)
    {
      max=numeros[i];
      index=i;
    }
  }

  cout << max << endl;
  cout <<index+1 <<endl;

  return 0;
}