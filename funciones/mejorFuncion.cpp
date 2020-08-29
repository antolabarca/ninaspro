#include <stdio.h>
#include <iostream>
using namespace std;

int r(int x, int y)
{
    return (9*x*x) + (y*y);
}

int b(int x, int y)
{
    return (2*x*x) + (25*y*y);
}

int c(int x, int y)
{
    return (-100 * x) + (y*y*y);
}


int main()
{
 
    int N, x, y;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> x >> y;
        int rafael = r(x,y);
        int beto = b(x,y);
        int carlos = c(x,y);
        
        if(rafael>carlos && rafael>beto)
        {
            cout << "Rafael ganhou\n";
        }
        if(beto>carlos && beto>rafael)
        {
            cout << "Beto ganhou\n";
        }
        if(carlos>beto && carlos>rafael)
        {
            cout << "Carlos ganhou\n";
        }
    }
 
    return 0;
}