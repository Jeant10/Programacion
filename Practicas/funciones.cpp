#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int menu(); 
float potencia(float x,int i); 
float factorial(int n); 
float exponencial(float x,int n); 
void segundo_despues(int h, int m, int s);
double hipotenusa(double a, double b);
bool armstrong(int n);
int inverso(int n);
bool capicua(int a);
int leerhora(int h,int m,int s);
void tiempo(int h,int m, int s);

int main(){
  int opcion=menu();
  int n; 
  int h,m,s;
  float x; 
  double c1,c2;
  const int N = 1000;
  int numero;
  int num;
  int h1, m1, s1, totalh1;
  int h2, m2, s2, totalh2;
  int h3, m3, s3, totalh3;
  while (opcion!=0){
    switch (opcion){
      case 1:
      { 
        cout<<"Ingresa el valor de x y n\n"; 
        cin>>x;
        cin>>n; 
        cout<<"La funcion exponencial para "<<x<<" y "<<n<<" es "<<exponencial(x,n)<<endl;
      }
      break;
      case 2:
      {    
        cout<<"\nIntroduzca horas: ";
        cin>>h;
        cout<<"\nIntroduzca minutos: ";
        cin>>m;
        cout<<"\nIntroduzca segundos: ";
        cin>>s;
        segundo_despues(h,m,s);
      }
      break;
      case 3:
      { 
        cout<<"Calcular la hipotenusa de un triangulo:"<<endl;
        cout<<"Cateto 1:"<<endl;
        cin>>c1;
        cout<<"Cateto 2:"<<endl;
        cin>>c2;
        cout<<"La hipotenusa es: "<<hipotenusa(c1,c2)<<endl;;
      }
      break;
      case 4:
      {
        cout << "Números entre 1 y "<<N<<" que son de Armstrong.\n";
        for (numero=1;numero<=N;numero++)
        {
          if (armstrong(numero)) 
          {
            cout <<numero<<" Suma de los cubos de sus dígitos ";
            cout <<numero<<endl;
          }
        }
      }
      break;
      case 5:
      {
        do{ 
          cout<<"Ingrese numero:"<<endl;
          cin>>num;
          if(capicua(num)){
            cout<<"Numero es capicua"<<endl;
            }
            else{
              cout<<"Numero no capicua"<<endl;
              }
        }while(num<0);
      }
      break;
      case 6:{ 
      cout<<"Ingrese el tiempo (dentro de un ciclo de 12 horas):"<<endl;
      cout<<"\nHora final:\n";
      totalh1 = leerhora(h1,m1,s1);
      do{
        cout<<"\nHora inicial:\n";
        totalh2 = leerhora(h2,m2,s2);
        if(totalh1<totalh2)
        { 
          cout<<"\nERROR:La hora final debe ser mayor a la hora inicial\n\n"; 
        }
      }while(totalh1<totalh2);
      { 
      totalh3 = totalh1 - totalh2;
      h3 = totalh3/360;
      m3 = (totalh3 - h3*360)/60;
      s3 = totalh3 - (h3*360 + m3*60 );
      cout<<"El tiempo transcurrido es: ";
      tiempo(h3,m3,s3);
      }
      }
      break;
      } 
      opcion = menu();
   }
   return 0;
}

//Menu

int menu(){
   int op=-1;
   while((op<0) || (op>6)) {
      cout << "*****Menú del programa*****" << endl;
      cout << "1 - Funcion exponencial" << endl;
      cout << "2 - Segundo despues" << endl;
      cout << "3 - Hipotenusa" << endl;
      cout << "4 - Numero armstrong"<< endl;
      cout << "5 - Numero capicua" << endl;
      cout << "6 - Tiempo en segundos" << endl;
      cout << "0 - Salir" << endl;
      cout << "Opción: " << endl;
      cin >> op;
      if ((op<0) || (op>6)) {
         cout<<"¡Opción no válida!"<<endl;
      }
   }
   return op;
}

//Ejercicio 4.1

float potencia(float x, int i)
{ 
  int k; 
  float pot=1; 
  for(k=1;k<=i;k++)
  {  
    pot=pot*x; 
  }
  return pot; 
} 

float factorial(int n)
{ 
  int i,fact=1; 
  for(i=1;i<=n;i++)
  { 
    fact=fact*i; 
  }
  return fact; 
} 
    
float exponencial(float x,int n)
{ 
  int i; 
  float suma=0; 
  for(i=0;i<=n;i++)
  { 
    suma = suma + potencia(x,i)/factorial(i);
  }
  return suma;
}

//Ejercicio 4.2

void segundo_despues(int h, int m, int s)
{
  if(h>=0 && h<=23 && m>=0 && m<=59 && s>=0 && s<=59)
  {
    s++;
    if(s==60)
    {
      s=0;
      m++;
      if(m==60)
      {
        m=0;
        h++;
        if (h==24){ 
          h = 0; 
        }
      }
    }
    cout<<"\nUn segundo despues de la hora es:"<<endl;
    tiempo(h,m,s);
  }
  else
    { 
      cout<<"\nERROR: La hora es incorrecta."<<endl; 
    }
}

//Ejercicio 4.3

double hipotenusa(double a, double b)
{
  return sqrt(pow(a,2)+pow(b,2));
}

//Ejercicio 4.4

bool armstrong(int n){
    int suma = 0;
    int digito;
    int rest = n;
    while (rest!= 0) { 
        digito = rest % 10;       
        suma += (digito*digito*digito);
        rest = rest / 10;               
    }
    return (suma == n); 
}

//Ejercicio 4.5

int inverso(int n){
  int aux,resto,numInv=0;
  aux=n;
  while(aux>0){
    resto=aux%10;
    aux=aux/10;
    numInv=numInv*10+resto;
  }
  return numInv;
}

bool capicua(int a)
{
  return (inverso(a)==a);
}

//Ejercicio 4.6

int leerhora(int h,int m,int s)
{
  bool valida = true;
  do{
    
    cout<<"Horas: "; 
    cin>>h;
    cout<<"Minutos: "; 
    cin>>m;
    cout<<"Segundos: "; 
    cin>>s;
    
    if(h<0 || h>12){  
      valida = false; 
    }
    else if(m<0 || m>59) 
    { 
      valida = false; 
    }
    else if(s<0 || s>59){ 
      valida = false;
    }
    else
    { 
      valida = true;
    }

    if(valida==false){ 
      cout<<"\nHora no valida\n\n"; 
    }

  }while(valida==false);

return (h*360) + (m*60 + s);

}

void tiempo(int h,int m, int s)
{
  if(h<10){
    cout<<"0";
    }
    else{
      cout<<"";
      } 
      
  cout<<h<<":";
  
  if(m<10){
    cout<<"0";
    }
    else{
      cout<<"";
      }

  cout<<m<<":";
      
  if(s<10){
    cout<<"0";
    }
    else{
      cout<<"";
      }
    cout<<s<<endl;
}