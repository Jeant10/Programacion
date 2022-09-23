#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float x, y, resultado;
    int op,residuo;
    int x1,y2;
    int valido = 1;
    const float pi=3.14159265;
    double param;
    do{
      cout<<"1.Sumar dos números"<<endl;
      cout<<"2.Restar dos números"<<endl;
      cout<<"3.Multiplicar dos números"<<endl;
      cout<<"4.Dividir dos números."<<endl;
      cout<<"5.Obtener el seno de un ángulo"<<endl;
      cout<<"6.Obtener el coseno de un ángulo"<<endl;
      cout<<"7.Obtener la tangente de un ángulo"<<endl;
      cout<<"8.Salir"<<endl;
      cout<<"Ingrese operacion: "<<endl;
      cin>>op;
      switch(op){
        case 1:
            cout<<"Ingrese x: "<<endl;
            cin>>x;
            cout<<"Ingrese y: "<<endl;
            cin>>y;
            resultado = x + y;
            break;
        case 2:
            cout<<"Ingrese x: "<<endl;
            cin>>x;
            cout<<"Ingrese y: "<<endl;
            cin>>y;
            resultado = x - y;
            break;
        case 3:
            cout<<"Ingrese x: "<<endl;
            cin>>x;
            cout<<"Ingrese y: "<<endl;
            cin>>y;
            resultado = x * y;
            break;
        case 4:
            cout<<"Ingrese x: "<<endl;
            cin>>x1;
            cout<<"Ingrese y: "<<endl;
            cin>>y2;
            resultado = x1/y2;
            residuo=x1%y2;
            valido=0;
            break;
        case 5:
            cout<<"Ingrese el angulo:"<<endl;
            cin>>param;
            resultado = sin(param*pi/180);
            break;
        case 6:
            cout<<"Ingrese el angulo:"<<endl;
            cin>>param;
            resultado = cos(param*pi/180);
            break;
        case 7:
            cout<<"Ingrese el angulo:"<<endl;
            cin>>param;
            resultado = tan(param*pi/180);
            break;
      }
    }while(op!=8);
    if(valido==1){ 
        cout<<"El resultado es: "<<resultado;
    }
    else{
        
        cout<<"El cociente es:"<<resultado<<endl;
        cout<<"El residuo es:"<<residuo<<endl;
 }
    return 0;
}