#include <iostream>
using namespace std;
int main() 
  {
	string usuario;
	int password,i=0;
  bool j=0;
  while(i!=3)
  { 
	cout<<"Ingresa tu usuario:";
	getline(cin,usuario);
	cout<<"Ingresa tu password: ";
	cin>>password;
  cin.get();
	if(usuario == "root" && password == 1234){
		cout<<"Bienvenido al sistema"; 
  }
  else
  { 
    i++;
	}
  }
  cout<<"Se ha superado el numero de intentos permitidos";
return 0;
}