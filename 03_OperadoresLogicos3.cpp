/* 03_OperadoresLogicos3
pedir 2 palabras si son iguakles imprimir "Coinciden"
si no, imprimir "Error de captura*/
#include <iostream>
using namespace std;
int main ()
{
string c1,c2;
cout<<"Ingrese una palabra: ";
cin>>c1;
cout<<"Repita la palabra: ";
cin>>c2;
string v="Coinciden", f="Error de captura";
cout <<endl<<((c1==c2)?v:f)<<endl;

}
