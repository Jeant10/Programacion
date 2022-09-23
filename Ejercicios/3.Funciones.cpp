//Código Funciones
#include <iostream>
using namespace std;
// cambio
void cambio(double precio, double pago, int& euros, int& cent50,
    int& cent20, int& cent10, int& cent5, int& cent2, int& cent1,
    bool& error);

int main() {
    double precio, pago;
    int euros, cent50, cent20, cent10, cent5, cent2, cent1;
    bool error;
    cout << "Precio: ";
    cin >> precio;
    cout << "Pago: ";
    cin >> pago;
    cambio(precio, pago, euros, cent50, cent20, cent10, cent5, cent2,
        cent1, error);
    if (error) {
        cout << "Error: El pago es inferior al precio" << endl;
    }
    else {
        cout << "Cambio: " << euros << " euros, "
            << cent50 << " x 50c., "
            << cent20 << " x 20c., "
            << cent10 << " x 10c., "
            << cent5 << " x 5c., "
            << cent2 << " x 2c. y "
            << cent1 << " x 1c." << endl;
    }

    return 0;
}

void cambio(double precio, double pago, int& euros, int& cent50,
    int& cent20, int& cent10, int& cent5, int& cent2, int& cent1,
    bool& error) {
    if (pago < precio) { // Cantidad insuficiente
        error = true;
    }
    else {
        error = false;
        //int cambio = int(100.0 * (pago - precio) + 0.5);
        int cambio = int(100.0 * (pago - precio) + 0.5);
        euros = cambio / 100;
        cambio %= 100;
        cent50 = cambio / 50;
        cambio %= 50;
        cent20 = cambio / 20;
        cambio %= 20;
        cent10 = cambio / 10;
        cambio %= 10;
        cent5 = cambio / 5;
        cambio %= 5;
        cent2 = cambio / 2;
        cent1 = cambio % 2;
    }
}


// 
/*
//Paso  por referencia y Depuración
void proc(int& x, double& a);
void func(int x, double a);
int main() {
    int i = 124, a;
    double d = 3;
    cout << a << endl;
    cout << "main(antes)-->" << "i: " << i << ", d: " << d << endl;
    proc(i, d);
    cout << "main(despues)-->" << "i: " << i << ", d: " << d << endl;
    //func(i, d);
    //cout << "main(despues2)-->" << "i: " << i << ", d: " << d << endl;
    return 0;
}

void proc(int& x, double& a) {
    cout << "proc(antes)-->" << "x: " << x << ", a: " << a << endl;
    x = 100;
    a = 5;
    cout << "proc(despues)-->" << "x: " << x << ", a: " << a << endl;
}

void func(int x, double a) {
    cout <<"func(antes)-->" << "x: " << x << ", a: " << a << endl;
    x = 200;
    a = 10;
    cout << "func(despues)-->" << "x: " << x << ", a: " << a << endl;
}
*/

/*
//letras gigantes
#include <iostream>
#include <string>
using namespace std;

void mostrarH();
void mostrarO();
void mostrarL();
void mostrarA();
void mostrarM();
void espacioEnBlanco();
int soyglobal = 5;

int main() {
    int soyglobal = 8888;
    //soyglobal = 6;
    cout << soyglobal << endl;
    mostrarH();
    mostrarO();
    mostrarL();
    mostrarA();
    espacioEnBlanco();
    mostrarM();
    mostrarA();
    mostrarM();
    mostrarA();
    return 0;
}

void mostrarH(){

    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*****" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl << endl;
}

void mostrarO() {
    cout << "*****" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*****" << endl << endl;
}

void mostrarL() {
    cout << soyglobal << endl;
    cout << "*    " << endl;
    cout << "*    " << endl;
    cout << "*    " << endl;
    cout << "*    " << endl;
    cout << "*****" << endl << endl;
}
void mostrarA() {
    cout << "*****" << endl;
    cout << "*   *" << endl;
    cout << "*****" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl << endl;
}
void mostrarM() {
    cout << "** **" << endl;
    cout << "* * *" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl << endl;
}
void espacioEnBlanco() {
}
*/


/*
//Un programa con funciones
#include <iostream>
using namespace std;
#include <cmath>

// Prototipos de las funciones (excepto main())
bool par(int num);
int sumatoria(int num);
bool letra(char car);


int main() {
    int numero;
    char caracter;
    cout << "Ingrese un valor entero: ";
    cin >> numero;
    cout << "Ingrese un caracter: ";
    cin >> caracter;
    if (par(numero)) {
        cout << "Par";
    }
    else {
        cout << "Impar";
    }
    cout << endl;

    if (numero > 1) {
        cout << "Sumatorio de 1 a " << numero << ": "
            << sumatoria(numero) << endl;
    }

    if (!letra(caracter)) {
        cout << "no ";
    }
    cout << "es una letra" << endl;
    // Los argumentos pueden llamarse igual o no que los

    return  0;
}

// Implementación de las funciones propias

bool par(int num) {
    bool esPar;

    if (num % 2 == 0) {
        esPar = true;
    }
    else {
        esPar = false;
    }

    return esPar;
}

bool letra(char car) {
    bool esLetra;
    if ((car >= 'a') && (car <= 'z') || (car >= 'A') && (car <= 'Z')) {
        esLetra = true;
    }
    else {
        esLetra = false;
    }
    return esLetra;
}

int sumatoria(int num) {
    int sum = 0, i = 1;
    while (i <= num) {
        sum = sum + i;
        i++;
    }
    return sum;
}

*/

//datos de las funciones
/*
#include <iostream>
using namespace std;

double f(int x, int y);

int main() {
    int a = 2 + 5 + 9;
    cout << f(a, 3) << endl;

    return 0;
}

double f(int x, int y) {
    //declaración de datos  locales:
    double resultado;
    //instrucciones
    resultado = 2 * pow(x, 5) + sqrt(pow(x, 3) / pow(y, 2)) / abs(x * y) - cos(y);

    return resultado; //devolución del resultado
}

*/