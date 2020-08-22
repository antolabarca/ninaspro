#include <iostream>
using namespace std;

int main()
{
  int k;
  cin >> k;
  string idiomas[k];

  for(int i=0; i<k; i++)
  {
    cin >> idiomas[i];
  }

  string idioma0=idiomas[0];
  string idioma=idioma0;

  for(int i=0; i<k; i++)
  {
    if(idioma0 != idiomas[i])
    {
      idioma="ingles";
      break;
    }
  }

  cout << idioma << endl;
  return 0;

}