#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	for (int i = 1; i<=2; ++i)
	{
		float nota1, nota2, nota3, nota4, nota5;
		cout << "Ingresa tu nota para el postre "<<i<<endl;
		cin >> nota1 >> nota2 >> nota3 >> nota4 >> nota5;
		float suma = nota1 + nota2 + nota3 + nota4 + nota5;
		float promedio = suma/5;
		cout << "el promedio del postre "<< i << " es " << promedio;
	}
	return 0;
}