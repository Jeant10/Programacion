// Prueba1B2021A.cpp : El código de cada ejercicio esta comentado.
//
#include <iostream>
#include <string>
using namespace std;
#include <cmath>
/*
Escribir un programa que cree una calculadora simple que cumpla los siguientes requerimientos:

a) Muestre un menú con 8 opciones:

Sumar dos números.
Restar dos números.
Multiplicar dos números.
Dividir dos números.
Obtener el seno de un ángulo
Obtener el coseno de un ángulo
Obtener la tangente de un ángulo
Salir.
bº) Pida por teclado la opción deseada, esta se seguirá solicitando si el usuario ingresa una opción incorrecta.

cº) Ejecute la opción seleccionada del menú.

dº) Repita los pasos a, b y c, mientras que, el usuario no seleccione la opción 8 (Salir) del menú.

5º) La división mostrará el cociente y el resto
*/
/*
*/
/*
int main() {
    const double PI = 3.141516;
    int opcion = 0;
    int entero1, entero2;
    double num1, num2, angRad;
    while (opcion != 8)
    {
        cout << "***CALCULADORA***" << endl;
        cout << "1. Sumar dos numeros" << endl;
        cout << "2. Restar dos numeros" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Obtener el seno de un angulo" << endl;
        cout << "6. Obtener el coseno de un angulo" << endl;
        cout << "7. Obtener la tangente de un angulo" << endl;
        cout << "8. Salir" << endl;
        cout << "Seleccione una opcion: " << endl;
        cin >> opcion;

        switch (opcion) {
        case 1: {
            cout << "\nSUMA\n Ingrese dos numeros:" << endl;
            cin >> num1 >> num2;
            cout << num1 << " + " << num2 << "=" << num1 + num2 << endl;
            break;
        }
        case 2:
        {
            cout << "\nRESTA\n Ingrese dos numeros:" << endl;
            cin >> num1 >> num2;
            cout << num1 << " - " << num2 << "=" << num1 - num2 << endl;
            break;
        }
        case 3:
        {
            cout << "\nMULTIPLICACION\n Ingrese dos numeros:" << endl;
            cin >> num1 >> num2;
            cout << num1 << " * " << num2 << "=" << num1 * num2 << endl;
            break;
        }
        case 4:
        {
            cout << "\nDIVISION\n Ingrese dos numeros:" << endl;
            cin >> num1 >> num2;
            cout << num1 << " / " << num2 << "=" << num1 / num2 << endl;
            cout << num1 << "%" << num2 << "=" << int(num1) % int(num2) << endl;
            break;
        }
        case 5:
        {
            cout << "\nSENO\n Ingrese un angulo:" << endl;
            cin >> num1;
            angRad = (num1 * PI) / 180;
            cout << "Seno =" << sin(angRad) << endl;
            break;
        }
        case 6:
        {
            cout << "\nCOSENO\n Ingrese un angulo:" << endl;
            cin >> num1;
            angRad = (num1 * PI) / 180;
            cout << "Coseno =" << cos(angRad) << endl;
            break;
        }
        case 7:
        {
            cout << "\nTANGENTE\n Ingrese un angulo:" << endl;
            cin >> num1;
            angRad = (num1 * PI) / 180;
            cout << "Tangente =" << tan(angRad) << endl;
            break;
        }
        case 8:
        {
            cout << "\nGracias por usar la calculadora" << endl;
            break;
        }
        default: {
            cout << "Opcion ingresada no es valida, ingrese la opción nuevamente..." << endl;
        }
        }

    }
    return 0;
}
*/
/*
12345678910
123456789
12346678
1234567
123456
12345
1234
123
12
1
*/

/*
int main() {
    int j = 10;
    while (j > 0) {
        int i = 1;
        while (i <= j) {
            cout << i;
            i++;
        }
        cout << endl;
        j--;
    }
}
*/

int main()
{
    int intentos = 0;
    string user, pass;
    const string RegUser = "root", RegPass = "1234";
    while (intentos < 3) {
        cout << "Usuario: ";
        cin >> user;
        cout << "Contrasena: ";
        cin >> pass;
        if ((user == RegUser) && (pass == RegPass)) {
            cout << "Bienvenido al sistema" << endl;
            intentos = 3;
        }
        else {
            cout << "Datos incorrectos " << endl;
            intentos++;
            if (intentos == 3) {
                cout << "Maximo de intentos permitidos" << endl;
            }
        }
    }



}


















/*
int main()
{
    int num = 10;
    while (num > 0) {
        int i = 1;
        while (i <= num) {
            cout << i;
            i++;
        }
        cout << endl;
        num--;
    }
    return 0;

}
*/

/*
int main() {
    int i = 1 j = i++, k = --i;
    if (i > 0) {
        j++;
        k++;
    }
    else {
        k++;
        i++;
    }
    if (k == 0) {
        i++;
        j++;
    }
    else {
        if (k > 0)
            k--;
        else
            k++;
        i++;
    }
    cout << i * j * k;
}
*/


/*
int main() {
    int variable = 5;
    int resultado;
    resultado = (variable >= 5);
    cout << resultado << endl;
    return 0;
}
*/


/*

int main()
{
    unsigned int x = 1;
    unsigned int total;
    while (x <= 10)
    {
        total += x;
        ++x;
        cout << x << endl;
    }
    return 0;
}
*/