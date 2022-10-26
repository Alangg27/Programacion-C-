/*Funciones con declaracion de prototipo 
19_funciones2.cpp
*/
#include<iostream>
using namespace std;

float suma(float a, float b); //prototipo de la funcion (declarar la funcion)}

int main()
{
	float n1,n2,n3;
	cout<< "Escribe dos valores: ";
	cin>>n1>>n2;
	n3=suma(n1,n2);
	cout<< "EL resultado de la suma es :" <<n3 << endl;
	
}


float suma(float a,float b)
{
	float c=a+b;
	return c;
}
