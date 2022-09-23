#include <iostream>
using namespace std;
#include <iomanip>

int menu(); 
void programa1(); 
void programa2(); 
void programa3(); 

int main() {
  int opcion = menu();
  while (opcion != 0) {
    switch (opcion) {
      case 1:
        {
          programa1();
        }
        break;
      case 2:
        {
          programa2();
        }
        break;
      case 3:
        {
          programa3();
        }
    } // switch
    opcion = menu();
  } // while (opcion != 0)
  return 0;
}

int menu() {
  int op = -1;
  while ((op < 0) || (op > 3)) {
    cout << "*****Menú del programa*****" << endl;
    cout << "1 - Ejercicio 1" << endl;
    cout << "2 - Ejercicio 2" << endl;
    cout << "3 - Ejercicio 3" << endl;
    cout << "0 - Salir" << endl;
    cout << "Opción: " << endl;
    cin >> op;
    if ((op < 0) || (op > 3)) {
      cout << "¡Opción no válida!" << endl;
    }
  }
  return op;
}

void programa1(){
  cout << "se ejecuta el primer ejercicio" << endl;
}

void programa2(){
  cout << "se ejecuta el segundo ejercicio" << endl;
}

void programa3(){
  cout << "se ejecuta el tercer ejercicio" << endl;
}