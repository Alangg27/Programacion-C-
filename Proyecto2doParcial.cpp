#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
string I,II,III,IV,V,VI;

int n1,n2,op;

char letra (char l,char l1);

template <class A>
A Suma (A b,A c);

int main(){

do
{	
cout<<"1.Capturar letras alternadas en mayusculas y minusculas mediante una funcion Recursiva y las imprima en forma inversa (captura a regresa A, captura A regresa a)"<<endl;
cout<<"2.Capturar caracteres hasta que aparezca un numero imprima los caracteres"<<endl;
cout<<"3.Capture 2 valores (0 o 1) y aplique el operador and con ellos e indique si la operacion es verdadera o falsa"<<endl;
cout<<"4.Capture 12 letras e imprimir 3 por renglon 1er renglon a,b,c 2do renglon r,d,e etc"<<endl;
cout<<"5.Capture dos caracteres mediante una plantilla sumarlos, como enteros y como caracteres"<<endl;
cout<<"6.Salir"<<endl;
cout<<"Ingrese una opcion: "<<endl;
cin>>op;


if (op==1)
{
system("cls");
char lm,x;
cout << "Capturar letras en y devolveras invertidas" << endl<<endl;
do{
cout << "Ingrese una letra minuscula"<< endl;
cin>>lm;
x=lm-32;
} while (lm<97 or lm>122);
cout<<"="<<x<<endl;
system ("Pause");
system ("cls");
}


else if (op==2)
{		
			system ("cls");
			char l, l1;
			cout << "Capturar caracteres hasta que aparezca un numero"<<endl;
			do {
			cout << "Ingrese letras, la finalizacion es cuando se ingresa un numero" << endl;
			cin >> l;
			cout << endl;
		      } while (l<47 or l>57);
			  cout<<l<<endl;	
		      system ("pause");
		      system ("cls");
}

else if (op==3)
{
		bool p, s;
	cout<<"Operadores Logicos"<< endl;
	cout <<"Escribe un primer valor booleano (0-1): ";
	cin>> p;
	cout<<"Escribe un segundo valor boolenao (0-1): ";
	cin>> s;
	cout << "Los operandos capturados son: p= " << p <<" s= "<< s<<endl;
	cout << p << " and " << s << "= "<<(p and s)<<endl;
	string v="Verdadero", f="Falso";
	cout <<"Primer Operando: "<<(p?v:f)<<endl;
	cout <<"Segundo Operando: "<<(s?v:f)<<endl;  
}
else if (op==4)
{
system ("cls");
		char letras [12];
		int i = 0;
		cout << "Capturar 12 letras y imprimirlos en distintos renglones"<<endl;
		cout << "Ingrese las 12 letras: "<<endl;
		while (i<12)
		{
		cin >> letras [i];
		i++;
	    }
	    cout << endl;
	    for (i=0; i < 12; i++);
	    cout<<""<<i<<endl;
}


else if (op==5)
{
	system ("cls");
			char b, c;
			cout << "Capturar 2 caracteres, mediante una plantilla sumarlos como enteros y como caracter"<<endl;
			cout << "Ingrese el valor de l: ";
			cin  >> b;
			cout << "Ingrese el valor de l1: ";
			cin >> c;
			cout << endl;
			cout << "Suma de l+l1 como caracter: " <<Suma<char> (b,c) <<endl;	
			cout << "Suma de l+l1 como entero: " <<Suma<int> (b,c) <<endl;
			system ("pause");
		    system ("cls");
}
else if (op==6)
{
	cout << endl<< "Finalizacion del programa, gracias por utilizarlo"<<endl;
			system ("pause");
}
}
	while(op!=6);
}
template <class A>
A Suma(A b,A c)
{
	return b + c;
}




