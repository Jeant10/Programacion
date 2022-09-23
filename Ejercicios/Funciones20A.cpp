// Funciones20A.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <string>
using namespace std;



//templates

template < typename T > // o template< class T >
T maximo(T valor1, T valor2, T valor3)
{
    T valorMaximo = valor1; // asume que valor1 es maximo
    // determina si valor2 es mayor que valorMaximo
    if (valor2 > valorMaximo)
        valorMaximo = valor2;
    // determina si valor3 es mayor que valorMaximo
    if (valor3 > valorMaximo)
        valorMaximo = valor3;
    return valorMaximo;
} // fin de la plantilla de función maximo

int main()
{
    // demuestra la función maximo con valores int
    int int1, int2, int3;
    cout << "Introduzca tres valores enteros: ";
    cin >> int1 >> int2 >> int3;
    // invoca a la versión int de maximo
    cout << "El valor int de maximo es: "
        << maximo(int1, int2, int3);
    // demuestra la función maximo con valores double
    double double1, double2, double3;
    cout << "\n\nIntroduzca tres valores double: ";
    cin >> double1 >> double2 >> double3;
    // invoca a la versión double de maximo
    cout << "El valor double de maximo es: "
        << maximo(double1, double2, double3);
    // demuestra la función maximo con valores char
    char char1, char2, char3;

    cout << "\n\nIntroduzca tres caracteres: ";
    cin >> char1 >> char2 >> char3;
    // invoca a la versión char de maximo
    cout << "El valor char de maximo es: "
        << maximo(char1, char2, char3) << endl;
} // fin de main

/*
void intercambia(int& x, int& y);
void intercambia(double& x, double& y);
void intercambia(char& x, char& y);

int main() {
    int i1 = 3, i2 = 7;
    double d1 = 12.5, d2 = 35.9;
    char c1 = 'a', c2 = 'b';
    cout << i1 << " - " << i2 << endl;
    cout << d1 << " - " << d2 << endl;
    cout << c1 << " - " << c2 << endl;
    intercambia(i1, i2);
    intercambia(d1, d2);
    intercambia(c1, c2);
    cout << i1 << " - " << i2 << endl;
    cout << d1 << " - " << d2 << endl;
    cout << c1 << " - " << c2 << endl;
    return 0;
}

void intercambia(int& x, int& y) {
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    cout << "cambiando enteros" << endl;
}

void intercambia(double& x, double& y) {
    double tmp;
    tmp = x;
    x = y;
    y = tmp;
    cout << "cambiando doubles" << endl;
}

void intercambia(char& x, char& y) {
    char tmp;
    tmp = x;
    x = y;
    y = tmp;
    cout << "cambiando char" << endl;
}

*/

/*
double f(double x, double y, int signo = 1, double delta = 1.0);

//parametros implicitos
int main() {
    double x, y;
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    cout << "signo y delta por defecto: " << f(x,y) << endl;
    cout << "signo -1 y delta por defecto: " <<f(x, y, -1) << endl;
    cout << "signo y delta concretos: " << f(x, y ,1 , 1.25) << endl;
    cout << "signo por defecto y delta concreto: " << f(x, y, 1.25) << endl;
}

double f(double x, double y, int signo, double delta) {
    return signo * delta * x / y;
}

*/

/*
int main(int argc, char* argv[])
{
    cout << "Parametros pasados por consola: "<<argc << endl;
    cout << "Hola como estas " << argv[1] << " "<< argv[2]<< endl;
    string nombre = argv[1];
    return 0;
}

*/




/*
// Prototipos
int menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void funcionej1();

int main() {
    double valor;
    int op = -1;
    cout << "****Tarea 4***" << endl;
    while (op != 0) {
        op = menu();
        switch (op) {
        case 1:
        {
            ejercicio1();
        }
        break;
        case 2:
        {
            ejercicio2();
        }
        break;
        case 3:
        {
            ejercicio3();
        }
        break;
        case 4:
        {
            ejercicio4();
        }
        break;
        }
    }
    return 0;
}

int menu() {
    int op = -1;
    while ((op < 0) || (op > 4)) {
        cout << "1 - Ejercicio 1" << endl;
        cout << "2 - Ejercicio 2" << endl;
        cout << "3 - Ejercicio 3" << endl;
        cout << "4 - Ejercicio 4." << endl;
        cout << "0 - Salir" << endl;
        cout << "Elige: ";
        cin >> op;
        if ((op < 0) || (op > 4)) {
            cout << "Opción no válida" << endl;
        }
    }

    return op;
}

void ejercicio1() {
    cout << "Aquí iría el desarrollo del ejercicio 1" << endl;
    funcionej1();

}

void funcionej1() {
    cout << "funcion llamada en el ejercicio1" << endl;
}



double pulgACm(double pulg) {
    const double cmPorPulg = 2.54;
    return pulg * cmPorPulg;
}

double lbAGr(double libras) {
    const double grPorLb = 453.6;
    return libras * grPorLb;
}

double grFAGrC(double grF) {
    return ((grF - 32) * 5 / 9);
}

double galALtr(double galones) {
    const double ltrPorGal = 4.54609;
    return galones * ltrPorGal;
}


*/


/*



/*
int main(int argc, char* argv[])
{
    cout << "hola " <<argv[2] << endl;
    cout << argc;
    return 0;
}
*/