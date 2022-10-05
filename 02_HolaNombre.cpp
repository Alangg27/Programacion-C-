// captutar un dato por teclado e imprimirlo

#include <iostream>
using namespace std;
int main ()
{
	string nombre;
	cout << "Escribe tu nombre:";
	// cin >> nombre;//
	getline(cin,nombre);
	
	cout<< "Hola "<< nombre<<endl;
	
	return 0;
}
