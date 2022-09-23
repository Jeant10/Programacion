#include <iostream>
#include <ctime>
#include <cstdlib> 
#include <string>
using namespace std;

int menu();
int menu_notas();

void calificaciones();
void ingresar(int a[],int n);

int agregar(int a[],int n);
int buscar(int a[], int n,int busca);
int eliminar(int a[],int n);
int insertar(int a[],int n);
void ordenar(int a[],int n);

void ingresar_numeros(int a[],int n);
void imprimir(int a[],int n);

void palindromo();
bool Palindromo(string cadena, int longitud);

void duplicados();
void sin_repetidos(int a[], int &num);

void dados();


int main() {
  int opcion = menu();
  while (opcion != 0) {
    switch (opcion) {
      case 1:
         {
           calificaciones();
         }
         break;
      case 2:
         {
           cin.ignore();
           palindromo();
         }
      break;
      case 3:
      {
        duplicados();
      }
      break;
      case 4:
      {
        dados();
      }
      break;
      } 
      opcion = menu();
   } 
   cout<<"Gracias!";
   return 0;
}

int menu() {
   int op = -1;
   while ((op < 0) || (op > 4)) {
      cout << "*****Menú del programa*****" << endl;
      cout << "1 - Calificaciones" << endl;
      cout << "2 - Palindromo" << endl;
      cout << "3 - Duplicados" << endl;
      cout << "4 - Dados" << endl;
      cout << "0 - Salir" << endl;
      cout << "Opción: " << endl;
      cin >> op;
      if ((op < 0) || (op > 4)) {
         cout << "¡Opción no válida!" << endl;
      }
   }
   return op;
}

//1.-Ejercicio 5.1

void calificaciones() {
  int n;
  const int max= 50;
  int calificaciones[max];
  int nota;
  do
  { 
    cout<<"Ingrese la cantidad de calificaciones: "<<endl;
    cin>>n;
    cout<<"Ingrese las calificaciones: ";
    ingresar(calificaciones,n);
    if(n<=0)
    {
      cout<<"Cantidad ingresada no valida"<<endl;
      }
      if(n>max)
      {
        cout<<"Cantidad maxima es "<<max<<endl;
      }
  }while(n<=0 || n>max);
  int opcion = menu_notas();
  while (opcion != 0 ) {
    switch (opcion) {
      case 1:
      {
        n=agregar(calificaciones,n);
      }
      break;
      case 2:
      {
        cout<<"\tIngrese la Nota a buscar: ";
        cin>>nota; 
        if(buscar(calificaciones,n,nota)==-1)
        {
          cout<<"Elemento no encontrado";
          }
          else
          {
            cout<<"Elemento encontrado"<<endl;
            cout<<"En la posicion: "<<buscar(calificaciones,n,nota);
          }
        cout<<endl;
      }
      break;
      case 3:
      {
        n=eliminar(calificaciones,n);
      }
      break;
      case 4:
      {
        n=insertar(calificaciones,n);
      }
      break;
      case 5:
      {
        ordenar(calificaciones,n);
      }
      break;
      }
      if(opcion == 1 || opcion==3 || opcion ==4 )
      { 
        cout<<"Calificaciones: ";
        imprimir(calificaciones,n); 
      }
      else if(opcion==5){
        cout<<"Calificaciones ordenadas: ";
        imprimir(calificaciones,n); 
      }
      opcion = menu_notas();
   }

}

int menu_notas() {
   int op = -1;
   while ((op < 0) || (op > 5)) {
      cout << "*****Menú del programa*****" << endl;
      cout << "1 - Agregar" << endl;
      cout << "2 - Buscar" << endl;
      cout << "3 - Eliminar" << endl;
      cout << "4 - Insertar" << endl;
      cout << "5 - Ordenar" << endl;
      cout << "0.- Salir" << endl;
      cout << "Opción: " << endl;
      cin >> op;
      if ((op < 0) || (op > 5)) {
         cout << "¡Opción no válida!" << endl;
      }
   }
   return op;
}

// Ingresar
void ingresar(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
}

void ingresar_numeros(int a[],int n)
{
  cout<<"Introduzca 20 numeros (entre 10 y 100 , max 20)"<<endl;
  for(int i=0;i<n;i++)
  {
    do
    {
      cout<<"Ingrese el numero "<<i+1<<": ";
      cin>>a[i];
      if(a[i]<10 || a[i]>100)
      {
      cout<<"\nERROR! EL numero debe estar entre 10 y 100.\n\n";
      } 
    }while(a[i]<10 || a[i]>100);
  }
}

//1.-Agregar

int agregar(int a[],int n)
{
  int elem;
  for(int i=0;i<1;i++)
  {
    cout<<"\tIngrese la nota a agregar: ";
    cin>>elem;
    n++;
    a[n-1]=elem;         
  }
  cout<<"Nota Agregada con exito!"<<endl;
return n;
}

//2.-Buscar

int buscar(int a[], int n,int busca)
{
    for (int i=0; i<n; i++)
    {
        if(a[i]==busca)
        {
            return i;
        }
    }  
    return -1;
}

//3.- ELiminar

int eliminar(int a[],int n)
{
  int k;
  do{
    cout<<"\tQue posicion desea eliminar de [0] hasta ["<<n-1<<"]: ";
    cin>>k;
    if(k>(n-1)||k<0)
    { 
    cout<<"Ingrese una posicion valida!"<<endl;
    } 
  }while(k>(n-1) || k<0);
  for(int i=k; i<n ;i++)
    {
      a[i]=a[i+1];
    }
  n--;
  cout<<"Nota eliminada con exito!"<<endl;
return n;
}

//4.- Insertar

int insertar(int a[],int n)
{
  int k,elem;
  cout<<"\tQue nota desea insertar: ";
  cin>>elem;
  do
  {
    cout<<"\tEn que posicion desea insertar de [0] hasta ["<<n-1<<"]: ";
    cin>>k;
    if(k>(n-1) || k<0)
    { 
      cout<<"Ingrese una posicion valida!"<<endl;
    }
  }
  while(k>(n-1) || k<0);
  n++;
  for(int i=n-1;i>=k;i--)
  {
    a[i+1]=a[i];
    if(k==i) 
    {
    a[k]=elem;      
    }
  } 
  cout<<"Nota insertada con exito!"<<endl;
  return n;
}

//5.-Ordenar

void ordenar(int a[],int n)
{
    int i,j,aux;
       for (i=0; i<n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
               aux = a[i];
               a[i]=a[j];
               a[j]=aux;
            }

        }
    }
}

//Otros procesos

void imprimir(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
      cout<<"["<<a[i]<<"]";
    }
  cout<<endl;
}

//2.-Ejercicio 5.2

void palindromo()
{
    string cadena;
    cout << "Ingresa la cadena: ";
    getline(cin,cadena);   
    if(Palindromo(cadena,cadena.length())==1)
    { 
      cout << "\nEs palindromo \n" ;
      }
      else{  
        cout<< "\nNo es palindromo \n";     
        }
  cout<<endl;
}

bool Palindromo(string cadena, int longitud)
{
    for(int i = 0; i < longitud/2; i++)
    { 
      if(cadena[i] != cadena[(longitud-i)-1]) 
      { 
        return false; 
      }
    }
    return true;   
}

//3.-Ejercicio 5.3

void duplicados(){
  int max=20;
  int arreglo[max];
  ingresar_numeros(arreglo,max);
  cout<<"\nArreglo:"<<endl;
  imprimir(arreglo,max);
  sin_repetidos(arreglo,max);
  cout<<"\nArreglo sin repetidos:\n";
  imprimir(arreglo,max);
  cout<<endl;
}

void sin_repetidos(int a[], int &num)
{
  int i, j, pivot = 0;
  bool repetido;
  for(i = 0; i < num; i++)
  {
    repetido = false;
    for(j = 0; j < pivot; j++)
    {
      if(a[i] == a[j])
      {
        repetido = true;
      }
    }
    if(!repetido)
    {
      a[pivot] = a[i];
      pivot++;
    }
  }
  a[pivot+1] = a[num];
  num = pivot;
}

//4.-EJercicio 5.4

void dados()
{
  srand(time(0)); 
  int lanzamiento;
  int frecuencia[13] = {0};    
  cout <<"\nLanzamiento de 36000 jugadas: "<<endl;
  for (int i = 1; i <= 36000; i++)
  {                                                
    lanzamiento = (1+rand()%6)+(1+rand()%6 ); 
    frecuencia[lanzamiento]++;  
    }                
    for (int n = 2; 12>=n; n++)
    { 
      cout <<"\nLanzamiento de " << n << " es: " << frecuencia[n]<<endl;
    }
    cout<<endl;
}


