// 07_Operadoreslogicos.c++
#include<iostream>
using namespace std;
int main ()
{
	
	bool p, s;
	cout<<"Operadores Logicos"<< endl;
	cout <<"Escribe un primer valor booleano (0-1): ";
	cin>> p;
	cout<<"Escribe un segundo valor boolenao (0-1): ";
	cin>> s;
	cout << "Los operandos capturados son: p= " << p <<" s= "<< s<<endl;
	cout << "Operaciones Basicas: "<<endl;
	cout << p << " and " << s << "= "<<(p and s)<<endl;
	cout << p << " or " << s << " = " <<(p or s)<<endl;
	cout << p << "xor " << s <<" = " << (p xor s)<<endl;
	cout << "NOT s = "<< !s <<endl;
	cout << "NOT p = "<< !p <<endl;
	string v="Verdadero", f="Falso";
	cout <<"Primer Operando: "<<(p?v:f)<<endl;
	cout <<"Segundo Operando: "<<(s?v:f)<<endl;  
}

