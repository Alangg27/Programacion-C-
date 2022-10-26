// 06 operadores aritmeticos em c++

#include<iostream>

using namespace std;
int main()
{
	cout<<"Operardores Aritmeticos"<<endl;
	int a, b, c;
	cout<<"Escribe un numero entero: ";
	cin>> a;
	cout<<"Escribe otro numero entero: ";
	cin>> b;
	
	// Operaciones basicas en c++
	
	cout<< "Suma: " << a <<" + "<< b <<" = "<< a+b <<endl;
	cout<< "Resta: " << a <<" - " << b <<" = "<< a-b <<endl;
	cout<< "Multiplicacion: " << a <<" * " << b <<" = "<< a*b <<endl;
    cout<< "Division: " << a <<" / " << b <<" = "<< a/b <<endl;
    cout<< "Modulo: " << a <<" % " << b <<" = "<< a%b <<endl;

   /*Operadores de asignacion compuesta o contraccion 
   para no perder el valor de los valores iniciales los copiamos en una nueva variable */
   c=a; c+=b; cout<< " a += b ; a= "<< c <<endl; //a=a+b
   c=a; c-=b; cout<< " a -= b ; a= "<< c <<endl; //a=a-b
   c=a; c*=b; cout<< " a *= b ; a= "<< c <<endl; //a=a*b
   c=a; c/=b; cout<< " a /= b ; a= "<< c <<endl; //a=a/b
   c=a; c%=b; cout<< " a %= b ; a= "<< c <<endl; //a=a%b
   
   /*Incremento y decremento*/
   
   c=a; cout << "++a * b= "<< ++c * b <<" ;a = " << c << endl; // Pre incremento
   c=a; cout << "a++ * b= "<< c++ * b <<" ;a = " << c << endl; // post incremento
   c=a; cout << "++a * b= "<< --c * b <<" ;a = " << c << endl; // Pre incremento
   c=a; cout << "a++ * b= "<< c-- * b <<" ;a = " << c << endl; // post incremento
}

