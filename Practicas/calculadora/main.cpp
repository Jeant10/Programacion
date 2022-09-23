#include <iostream>
using namespace std;
#include "calculos.h"

int menu();

int main()
{
  double num1, num2;
  int opcion;
  do
  { 
    opcion = menu();
    switch (opcion) {
      case 1: 
      {
        cout << "\nSUMA\n Ingrese dos numeros:" << endl;
        cin >> num1 >> num2;
        cout << endl << "   " << num1 << " + " << num2 << " = " << sumar(num1,num2) << endl << endl;
        break;
      }
      case 2:
      {
        cout << "\nRESTA\n Ingrese dos numeros:" << endl;
        cin >> num1 >> num2;
        cout << endl << "   " << num1 << " - " << num2 << " = " << restar(num1,num2) << endl << endl;
        break;
      }
      case 3:
      {
        cout << "\nMULTIPLICACION\n Ingrese dos numeros:" << endl;
        cin >> num1 >> num2;
        cout << endl << "   " << num1 << " * " << num2 << " = " << multiplicar(num1,num2) << endl << endl;
        break;
      }
      case 4:
      {
        cout << "\nDIVISION\n Ingrese dos numeros:" << endl;
        cin >> num1 >> num2;
        cout << endl << "   " << num1 << " / " << num2 << " = " << dividir(num1,num2) << endl  << endl;
        break;
      }
      case 5:
      {
        cout << "\nPOTENCIA\n Ingrese la base y el exponente:" << endl;
        cin >> num1 >> num2;
        cout << endl << "   " << num1 << " ^ " << num2 << " = " << potencia(num1,num2)  << endl << endl;
        break;
      }
      case 6:
      {
        cout << "\nFACTORIAL\n Ingrese un numero:" << endl;
        cin >> num1;
        cout << endl << "   " << num1 << "! " << "= " << factorial(num1) << endl << endl;
        break;
      }
      case 7:
      {
        cout << "   " << "\nGracias por usar la calculadora" << endl;
        break;
      }
      default: 
      {
        cout << "   " << "Opcion ingresada no es valida, ingrese la opci�n nuevamente..." << endl;
      }
    } 
  } while(opcion!=7);
  return 0;
}

int menu()
{
  int opc;
  cout << "***CALCULADORA***" << endl;
  cout << "1. Sumar dos numeros" << endl;
  cout << "2. Restar dos numeros" << endl;
  cout << "3. Multiplicacion" << endl;
  cout << "4. Dividir" << endl;
  cout << "5. Potencia" << endl;
  cout << "6. Factorial" << endl;
  cout << "7. Salir" << endl;
  do
	{
		cout << "   OPCION: ";
		cin >> opc;
		if (opc < 1 || opc > 7)
		{
			cout << endl << "   " << "ERROR! La opcion ingresada no es valida... Ingrese nuevamente." << endl << endl;
		}
	} while (opc < 1 || opc > 7);
	return opc;
}