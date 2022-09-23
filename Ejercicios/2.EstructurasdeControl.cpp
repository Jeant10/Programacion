//tablas de multiplicar
#include <iostream>
using namespace std;
#include <iomanip>

int main() {
  for (int i =1; i <=10; i++){
    cout << "Tabla del " << i << endl;
    cout << "--------------" << endl;
    for (int j=1; j<=10; j++){
      cout << setw(2) << i << " x " << setw(2) <<j<< " = " << setw(3) << i *j <<endl;
    }
  }
     return 0;
}

/*
//diasmes
#include <iostream>
using namespace std;

bool bisiesto(int mes, int anio);

int main() {
  int mes, anio, dias;
  cout << "Número de mes:";
  cin >>mes;
  cout << "Año: ";
  cin >> anio;

  if (mes==2){
    //dias =28;
    if (bisiesto(mes, anio)){
      dias = 29;
    }
    else {
      dias =28;
    }
  }
  else{
    if ((mes ==1) || (mes ==3) ||(mes ==5) ||(mes ==7) ||(mes ==8) || (mes ==10) ||(mes ==12)){
      dias =   31;
    }
    else{
      dias = 30;
    }
  }

  cout << "Días de ese mes: " << dias <<endl;
  return 0;
}

bool bisiesto(int mes, int anio){
  bool esBisiesto;
  if ((anio % 4) == 0){ //divisible por 4
    if (((anio % 100)==0) &&  ((anio % 400) !=0)){
      //Pero último de siglo y no múltiplo de 400
      esBisiesto = false;
    }
    else{
      esBisiesto = true; // año  bisiesto
    }
  }
  else{
    esBisiesto = false;
  }
  return esBisiesto;
}
*/
/*

//sumatoria for
#include <iostream>
using namespace std;

long int suma(int n);

int main() {
  int num;
  cout << "número final: ";
  cin >> num;
  if (num> 0){
    cout << "La suma de los numeros entre 1 y " << num << " es: " <<suma(num);
  }
  return 0;
}

long  int suma(int n){
  long int total = 0;
  int i=1;
  for (int i = 1; i <= n; i++) { 
      total = total + i;
  }
  cout <<"("<< i<<")"; //error de ambito de la variable i
  return total;
}
*/

/*
//sumatoria for
#include <iostream>
using namespace std;

int main() {
  int num;
  long long int total = 0;
  cout << "número final: ";
  cin >> num;
  if (num> 0){
    for (int i = 1; i <= num; i++) {
    cout << i <<endl;
    total = total + i;
    }  
    cout << "La suma de los numeros entre 1 y " << num << " es: " <<total;
  }
  return 0;
}
*/

/*
//for1
#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i < 10; i= i +2) {
    cout << i <<endl;
  }
  return 0;
}
*/

/*
//suma y media de números
#include <iostream>
using namespace std;
int main()
{
    double num, suma = 0, media = 0;
    int cont = 0;
    cout << "Introduce un número (0 para terminar): ";
    cin >> num;
    while (num != 0) { // 0 para terminar
        suma = suma + num;
        cont++;
        cout << "Introduce un número (0 para terminar): ";
        cin >> num;
    }
    if (cont > 0) {
        media = suma / cont;
    }
    cout << "Suma = " << suma << endl;
    cout << "Media = " << media << endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
  int op;
  cout << "Introduce la opción: ";
  cin >> op;
  while ((op < 0) || (op > 4)) {
    cout << "¡No válida! Inténtalo otra vez" << endl;
    cout << "Introduce la opción: ";
    cin >> op;
  }

  return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
  int i = 1;
  while (i<=100){
    cout << i << endl;
    i++;
  }
  return 0;
}
*/
/*Sumatoria
#include <iostream>
using namespace std;

int main() {
  int i = 0, n=0, suma=0;
  while (n<=0){ //solo n positivo
    cout << "¿Cuántos numeros quieres sumar?: ";
    cin >> n;
  }
  while (i  <=n){
    cout << "********Iteración: " << i+1 << endl;
    suma = suma + i;
    i++;
    cout << "Valor de suma:" <<suma <<endl;
    cout << "Valor de i:" <<i <<endl;
  }
  
  cout << "Sumatorio de i  (1 a " << n << ") = " << suma<<endl;
  return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
  int nota; //sin decimales;
  cout << "Nota (0-10): "; 
  cin >> nota;
  switch (nota){
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      {
        cout << "SS";
      }
      break;
    case 5:
    case 6:
      {
        cout << "AP";
      }
      break;
    case 7:
    case 8:
      {
        cout << "NT";
      }
      break;
    case 9:
    case 10:
      {
        cout << "SB";
      }
      break;
    default:
      {
        cout << "Nota no valida";
      }
  }
  return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Introduce el nivel: ";
  cin >> num;
  switch (num){
    case 4:
      {
        cout << "Muy alto";
      }
      //break;
    case 3:
      {
        cout << "Alto";
      }
      //break;
    case 2:
      {
        cout << "Medio";
      }
      break;
    case 1:
      {
        cout << "Bajo";
      }
      //break;
    default:
      {
        cout << "Valor no válido";
      }    
  }
  cout << endl;
  cout << "Luego del switch" << endl;
  return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Introduce el nivel: ";
  cin >> num;
  if (num == 4) {
    cout << "Muy alto";
  }
  else if (num == 3) {
    cout << "Alto";
  }
  else if (num == 2) {
    cout << "Medio";
  }
  else if (num == 1) {
    cout << "Bajo";
  }
  else {
    cout << "Valor no válido";
  }
  cout << endl;

  return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main(){
  double nota;
  cin >> nota;
  if (nota == 10) {
    cout << "MH";
  }
  else {
    if (nota >= 9) {
        cout << "SB";
    }
    else {
        if (nota >= 7) {
          cout << "NT";
        }
        else {
          if (nota >= 5) {
              cout << "AP";
          }
          else {
              cout << "SS";
          }
        }
    }
  }
  return 0;
}
*/


/*
#include <iostream>
using namespace std;
int main(){
  double nota;
  cout << "Ingrese la nota númerica: ";
  cin >> nota;
  if (nota >= 5){cout << "AP";}
  else if (nota >= 7){cout << "NT";}
  else if (nota >= 9){cout << "SB";}
  else if (nota == 10){cout << "MH";}
  else {cout << "SS";}
  return 0;
}
*/


/*#include <iostream>
using namespace std;
int main(){
  int nota;
  cout << "Ingrese la nota númerica: ";
  cin >> nota;
  if (nota < 5){cout << "SS";}
  else if (nota < 7){cout << "AP";}
  else if (nota < 9){cout << "NT";}
  else if (nota < 10){cout << "SB";}
  else {cout << "MH";}
  return 0;
}
*/



/*
#include <iostream>
using namespace std;
int main(){
  int nota;
  cout << "Ingrese la nota númerica: ";
  cin >> nota;
  if (nota == 10){
    cout << "MH";
  }
  else if (nota >= 9){
    cout << "SB";
  }
  else if (nota >= 7){
    cout << "NT";
  }
  else if (nota >= 5){
    cout << "AP";
  }
  else {
    cout << "SS";
  }
  return 0;
}
*/
/*#include <iostream>
using namespace std;

int main() {
  double numerador, denominador, resultado;
  cout << "Numerador: "; 
  cin >> numerador;
  cout << "Denominador: "; 
  cin >> denominador;
  if (denominador == 0) {
    cout << "Imposible dividir entre 0!";
  }
  else {
    resultado = numerador / denominador;
    cout << "Resultado: " << resultado << endl;
  }
  return 0;
}
*/




/*#include <iostream>
using namespace std;

int main(){
  int op1 =13, op2 =4;
  int opcion;
  cout << "!Bienvenido a mi primera calculadora!"<<endl;
  cout <<"1. Sumar" << endl;
  cout <<"2. Restar" << endl;
  cout << "Opción: ";
  cin >> opcion;
  if (opcion == 1){
    cout << op1 +op2 <<endl;
  }
  else{
    cout <<op1 -op2 <<endl;
  }
  return 0;
}
*/

/*

#include <iostream>
using namespace std;

int main() {
  int num;
  cout <<"Número: ";
  cin >> num;
  if(num % 2 == 0){
    cout << num << " es par";
  }
  else{
    cout << num << " es impar";
  }
  return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
  int num;
  cout  << "Introduzca un número entre 1 y 10:";
  cin >> num;
  if((num > 0) && (num <= 10)){
    cout << "Número dentro del intervalo  de valores validos";
  }
  else{
    cout << "Número no válido";
  }
  return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
  bool resultado, cond1,cond2;
  int a=2, b=3, c=4;
  resultado =  a<5;
  cout <<"resultado: "<< resultado<<endl;
  resultado = a*b+c>=12;
  cout <<"resultado: "<< resultado<<endl;
  resultado = a * (b+c) >=12;
  cout <<"resultado: "<< resultado<<endl;
  resultado = a != b;
  cout <<"resultado: "<< resultado<<endl;
  resultado = a *b > c + 5;
  cout <<"resultado: "<< resultado<<endl;
  resultado = a + b == c + 1;
  cout <<"resultado: "<< resultado<<endl;
  cout <<"Operadores lógicos"<<endl;
  resultado = !(a<5);
  cout <<"resultado: "<< resultado<<endl;
  cond1 = (a *b + c) >=12;
  cout <<"condición 1: "<< cond1<<endl;
  cond2 = (a * (b + c)) >=12;
  cout <<"condición 2: "<< cond2<<endl;
  resultado = cond1 && cond2;
  cout <<"resultado: "<< resultado<<endl;
  resultado = cond1 || cond2;
  cout <<"resultado: "<< resultado<<endl;
  return 0;
}
*/


/*
#include <iostream>
using namespace std;
#include <cctype>

int main() {
   char caracter1 = 'A', caracter2 = '1', caracter3 = '&';
   cout << "Carácter 1 (" << caracter1 << ").-" << endl;
   cout << "Alfanumérico? " <<isalnum(caracter1) << endl;
   cout << "Alfabético? " << isalpha(caracter1) << endl;
   cout << "Dígito? " << isdigit(caracter1) << endl;
   cout << "Mayúscula? " << isupper(caracter1) << endl;
   caracter1 = tolower(caracter1);
   cout << "En minúscula: " << caracter1 << endl;
   cout << "Carácter 2 (" << caracter2 << ").-" << endl;
   cout << "Alfabético? " << isalpha(caracter2) << endl;
   cout << "Dígito? " << isdigit(caracter2) << endl;
   cout << "Carácter 3 (" << caracter3 << ").-" << endl;
   cout << "Alfanumérico? " << isalnum(caracter3) << endl;
   cout << "Alfabético? " << isalpha(caracter3) << endl;
   cout << "Dígito? " << isdigit(caracter3) << endl;
   cout << "Símbolo? " << ispunct(caracter3) << endl;
   cout << "Imprimible? " << isprint('\n') << endl;

   return 0;
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

int main() {
  char a ='a';
  string str, str1;
  cout << "ingrese su descuento (s/n): ";
  cin >> a;
  cin.get();
  cout << "Descuento: " <<a << endl;
  cout << "ingrese su nombre: ";
  cin >> str;
  cout << "Su nombre es: " <<str << endl;
  cin >> str1;
  //cin.get(a);
  cout << "Su apellido es: " <<str1 << endl;
  return 0;
}

*/


/*
#include <iostream>
using namespace std;
#include <cmath>

int main() {
  double x, y, f;
  cout << "Valor de X: "; 
  cin >> x;
  cout << "Valor de Y: ";
  cin >> y;
  f = 2 * pow(x,5) +sqrt(pow(x,3)/pow(y,2))/abs(x * y) - cos(y);
  cout << "f(x, y) = " << f << endl;
  double a = 27;
  cout << "raíz cúbica de 27: " << pow(a,1/3.0) <<endl;
  cout << "raíz cúbica de 27: " << cbrt(a);
  return 0;
}
*/
/*
//constantes
#include <iostream>
using namespace std;
#define PI 3.14159265

int main() {
  const double Pi = 3.141592;
  double radio = 12.2, circunferencia;
  circunferencia = 2 * PI * radio;
  cout << "Circunferencia de un círculo de radio " 
       << radio << ": " << circunferencia << endl;
  const double Euler = 2.718281828459; // Número e
  cout << "Número e al cuadrado: " << Euler * Euler << endl;
  
  const int IVA = 12;
  int cantidad = 2;
  double precio = 39.95, neto, porIVA, total;
  neto = cantidad * precio;
  porIVA = neto * IVA / 100;
  total = neto + porIVA;
  cout << "Total compra: " << total << endl;
  //printf ("Total IVA: %f\nTotal compra: %f.\n", porIVA,total);
  return 0;
}
*/





/*
//operandos.cpp
#include <iostream>
using namespace std;

int main() {
  int entero1 = 15, entero2 = 4;
  double real1 = 15.0, real2 = 4.0;
  cout << "Operaciones entre los números 15 y 4:" << endl;
  cout << "División entera (/): " << entero1 / entero2 << endl;
  cout << "Resto de la división (%): " << entero1 % entero2 << endl;
  cout << "División real (/): " << real1 / real2 << endl;
  cout << "Num = " << real1 << endl;
  real1 = -real1;
  cout << "Cambia de signo (-): " << real1 << endl;
  real1 = -real1;
  cout << "Vuelve a cambiar (-): " << real1 << endl;
  cout << "Se incrementa antes (++ prefijo): " << ++real1 << endl;
   cout << "Se muestra antes de incrementar (posfijo ++): " << real1++ << endl;
  cout << "Ya incrementado: " << real1 << endl;
  return 0;
}
*/



/*
//calculos.cpp
#include <iostream>
using namespace std;

int main() {
  int a= 50, b=7;
  double c = 2;
  cout << "a%b= " <<a%b << endl;
  cout << "133 + 1234 = " << ++a << endl;
  cout << "1234 - 111.5 = " << 1234 - 111.5 << endl;
  cout << "34 * 59 = " << 34 * 59 << endl;
  cout << "3.4 * 5.93 = " << 3.4 * 5.93 << endl;
  cout << "500 / 3 = " << 500 / 3 << endl; // Div. entera
  cout << "500 / 3.0 = " << 500 / 3.0 << endl; // Div. real
}
*/