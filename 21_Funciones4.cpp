/* Funciones sin retorno del tipo viod void
21_funciones4.cpp
*/
#include <iostream>
using namespace std;
void multiplica(void);

int main()
{
    multiplica();
}

void multiplica(void)
{
  int a,b;
  cout << "Escribe dos numeros: ";
  cin >> a >> b;
  cout << a << " x " << b << " = " << a*b <<endl;	
}
