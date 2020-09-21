#include <iostream>
using namespace std;

int main()
{
  int casos, n;
  string idioma1, idioma2;
  cin >> casos;

  for(int i=0; i<casos; i++)
  {
    cin >> n;
    cin >>idioma1;
    for(int i=1; i<n; i++)
    {
      cin >> idioma2;
      if(idioma1!=idioma2)
      {
        idioma1="ingles";
      }
    }

    cout << idioma1 <<endl;

  }

  return 0;
}