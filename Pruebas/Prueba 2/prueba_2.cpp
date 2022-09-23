#include <iostream>
using namespace std;
#include <iomanip>

int menu();
void matriz(int n);

int main() {
  int opcion = menu();
  int op,cantidadvendida,n;
  double montototal=0;
  while (opcion != 0) {
    switch (opcion) {
      case 1:
        { 
          do{
          cout<<"------Almacen------"<<endl;
          cout<<"Producto 1:$2.98"<<endl;
          cout<<"Producto 2:$4.50"<<endl;
          cout<<"Producto 3:$9.98"<<endl;
          cout<<"Prodcuto 4:$4.49"<<endl;
          cout<<"Producto 5:$6.87"<<endl;
          cout<<"Salir:0"<<endl;
          cin>>op;
          switch(op){
            case 1:  
            cout<<"Introduzca la cantidad vendida del producto: "<<endl;
            cin>>cantidadvendida;
            montototal += cantidadvendida*2.98;
            break;
            case 2:
            cout<<"Introduzca la cantidad vendida del producto: "<<endl;
            cin>>cantidadvendida;
            montototal += cantidadvendida*4.5;
            break;
            case 3:
            cout<<"Introduzca la cantidad vendida del producto: "<<endl;
            cin>>cantidadvendida;
            montototal += cantidadvendida*9.98;
            break;
            case 4:
            cout<<"Introduzca la cantidad vendida del producto: "<<endl;
            cin>>cantidadvendida;
            montototal += cantidadvendida*4.49;
            break;
            case 5:
            cout<<"Introduzca la cantidad vendida del producto: "<<endl;
            cin>>cantidadvendida;
            montototal += cantidadvendida*6.87;
            break;
            }
          }while(op!=0);
          cout<<"Las ventas totales fueron: $"<<montototal;
        }
          break;
      case 2:
      { 
      cout<<"Ingrese un valor entero:\n";
      cin>>n;
      cout<<"\nLa tabla del numero "<<n<<" es:\n";
      matriz(n);
      }
       break;
    }
    opcion = menu();
  } while (opcion != 0);
return 0;
}

int menu(){
   int op = -1;
   while ((op < 0) || (op > 2)) {
      cout << "\n*****Menú del programa*****" << endl;
      cout << "1 - Ejercicio 2" << endl;
      cout << "2 - Ejercicio 3" << endl;
      cout << "0 - Salir" << endl;
      cout << "Opción: " << endl;
      cin >> op;
      if ((op < 0) || (op > 2)) {
         cout << "¡Opción no válida!" << endl;
      }
   }
   return op;
}

void matriz(int n){
  int fila,columna,total,suma;
  for(fila=1;fila<=n;fila++)
  { 
    suma=0;
    for(columna=1;columna<=n;columna++)
    {
      total = fila*columna;
      suma=suma+total;
      cout<<total<<" ";
      if(total<n)
      {
        cout<<" ";
      }
    }
    cout<<suma;
    cout<<endl<<endl;
  }
}

