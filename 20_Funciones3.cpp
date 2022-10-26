/* Funciones recursivas
20_funciones3.cpp
*/
#include<iostream>
using namespace std;
int factorial(int n);//prototipo de la funcion

int main()
{
	int n,r;
	cout <<"Factorial: Escribe un numero para obtener su factorial: ";
	cin >>n;
	r=factorial(n);
	cout << n << "!= "<< r << endl;
}

int factorial(int n)
{
	if (n<0) return 0;
	else if (n>1)
	{
		return n*factorial(n-1); //recursividad mientras n>1
	}
	return 1; //Condicion para n==1 y n=0;
}
