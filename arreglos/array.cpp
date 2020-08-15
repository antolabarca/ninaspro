#include <iostream>
using namespace std;

int main()
{
  string palabras[6]; // Declaramos el arreglo
  
  // Guardamos los datos
  for (int i = 0; i < 6;  i++)
  {
    cin >> palabras[i];
  }
        
  // Imprimimos los datos
  for (int i = 5; i >= 0;  i--)
  {
    cout << palabras[i] << endl;
  }

  return 0;
}