#include <iostream>
using namespace std;
#include "calculos.h"

double sumar(double x,double y)
{
    return x + y;
}

double restar(double x,double y)
{
    return x - y;
}

double multiplicar(double x,double y)
{
    return x * y;
}

double dividir(double x,double y)
{
    return x / y;
}

float potencia(float x, int i)
{ 
  int k; 
  float pot=1; 
  for(k = 1; k <= i; k++)
  {  
    pot = pot*x; 
  }
  return pot; 
}

float factorial(int n)
{ 
  int i,fact = 1; 
  for(i = 1; i <= n; i++)
  { 
    fact = fact*i; 
  }
  return fact; 
} 