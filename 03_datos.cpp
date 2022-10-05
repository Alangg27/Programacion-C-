// 03_datos.cpp
//practica para la captura de informacion
#include <iostream>
using namespace std;
int main ()
{
	string nombres,apellido1, apellido2, email, direccion, ciudad;
	int edad;
	long long telefono;
	cout<<"Escribe tus datos"<< endl;
	cout <<"Escribe tu nombre(s): "; getline(cin, nombres);
	cout <<"Escribe tu primer apellido:"; getline(cin,apellido1);
	cout <<"Escribe tu segundo apellido:"; getline(cin,apellido2);
	cout <<"Escibre tu direcion email:"; getline(cin,email);
	cout <<"Escribe tu direccion:"; getline(cin,direccion);
	cout <<"Escribe tu ciudad:"; getline(cin,ciudad);
	cout <<"Escribe tu edad:"; cin >> edad;
	cout <<"Escribe tu telefono:"; cin >> telefono;
	cout << endl << "Tus Datos" << endl;
	cout << "Nombre : "<<nombres<<" "<<apellido1<<" "<<apellido2<<endl;
	cout << "Edad: "<<edad<<endl;
	cout << "direccion: "<<direccion<<endl;
	cout << "E-mail: "<<email<<endl;
	cout <<"ciudad: "<<ciudad<<endl;
	cout <<"Telefono: "<<telefono<<endl;
}
