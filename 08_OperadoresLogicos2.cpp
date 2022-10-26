//08_OperadoresLogicos2
/*Ejercicio pedir un numero entre 10 y 20 si cumple con la
condicion imprimir: tu numero esta bien escrito, en caso contrario
que imprima tu numero esta mal escrito
*/

#include<iostream>
 using namespace std;
 int main ()
 {
 	int a;
 	 cout<< "Escribe un numero entero: ";
 	 cin>> a;
 	 string  C="El numero esta bien escrito", I="El numero esta mal escrito";
 	 bool c = a>=10 and a <=20;
	 cout <<"Numero: "<<(c?C:I)<<endl;
 	
 	return 0;
 }

