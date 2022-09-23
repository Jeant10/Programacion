// Resolución de algunos de los  ejercicios de la práctica E/S
//El código de cada ejercicio se encuentra comentado para tener la solución en un único archivo
#include <iostream>
#include <iomanip>
using namespace std;


//ejercicio 2.21 de Deitel
//varias opciones, pero se pide que las figuras se escriban horizontalmente, lo más simple
int main() {
    cout << "*********\t   ***   \t  *  \t    *    \n"
         << "*       *\t *     * \t *** \t   * *   \n"
         << "*       *\t*       *\t*****\t  *   *  \n"
         << "*       *\t*       *\t  *  \t *     * \n"
         << "*       *\t*       *\t  *  \t*       *\n"
         << "*       *\t*       *\t  *  \t *     * \n"
         << "*       *\t*       *\t  *  \t  *   *  \n"
         << "*       *\t *     * \t  *  \t   * *   \n"
         << "*********\t   ***   \t  *  \t    *    \n";
}

//ejercicio 3.1.4
//Este ejercicio podría ser más complejo si se validará los datos ingresados
//Pero no era ese el objetivo, ni se solicitaba esto, la solución más simple es la siguiente
/*
int main()
{
    //Animales 
    int perros, gatos, conejos, iguanas, cocodrilos, aves; 
    //Peso de cada especie 
    float pesoPerro, pesoGato, pesoConejo, pesoIguana, pesoCoco, pesoAve, pesoTotal;
    //Cantidad de animales 
    cout << "ingrese cantidad de perros: "; 
    cin >> perros; 
    cout << "ingrese cantidad de gatos: "; 
    cin >> gatos; 
    cout << "ingrese cantidad de conejos: "; 
    cin >> conejos; 
    cout << "ingrese cantidad de iguanas:"; 
    cin >> iguanas; 
    cout << "ingrese cantidad de cocodrilos:"; 
    cin >> cocodrilos; 
    cout << "ingrese cantidad de aves:"; 
    cin >> aves; 
    // Peso por Especie 
    cout << "Ingrese el peso promedio por especie (en kilogramos)"<< endl; 
    cout << "perro: "; 
    cin >> pesoPerro; 
    cout << "gato: "; 
    cin >> pesoGato; 
    cout << "conejo: "; 
    cin >> pesoConejo; 
    cout << "iguana:"; 
    cin >> pesoIguana; 
    cout << "cocodrilo:"; 
    cin >> pesoCoco; 
    cout << "ave: "; 
    cin >> pesoAve;

    pesoTotal = perros * pesoPerro + gatos * pesoGato + conejos * pesoConejo + iguanas * pesoIguana + pesoCoco * cocodrilos;
    cout << "Peso total del arca: " << pesoTotal << " Kg." << endl;
}
*/



//ejercicio 3.1.3
//Este ejercicio podría ser más complejo si se validará los datos ingresados
//Pero no era ese el objetivo la solución más simple es la siguiente
/*
int main()
{
    int nota1, nota2, nota3;
    double promedio;
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;
    promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio == 10)
    {
        cout << "Tu promedio es A" << endl;
    }
    if (promedio == 9)
    {
        cout << "Tu promedio es B" << endl;
    }
    if(promedio == 8)
    {
        cout << "Tu promedio es C" << endl;
    }
    if (promedio <8)
    {
        cout << "Reprobado" << endl;
    }

    return 0;
}
*/

/*ejercicio 3.1.2 
3.1	El problema consiste en calcular el monto de una compra y mostrarlo en consola.
El cliente ingresará la cantidad de productos comprados teniendo el siguiente listado :
Producto	Costo(dólares / unidad)
Huevos	0.15
Aceite	1.10
Leche	0.90
Libra arroz	0.60
Cerveza	1.80

Se debe tomar en cuenta que la cerveza paga impuesto del 5 % .
Como salida se debe mostrar la simulación de una nota de venta, 
donde se muestra el número de cada artículo comprado, el valor total de cada artículo, 
al final el subtotal, impuesto del 12 %, impuesto cerveza 5 %, descuento del 1 % y Total a Pagar.

int main() {
    //constantes
    const double PHuevos = 0.15;
    const double PAceite = 1.10;
    const double PLeche = 0.9;
    const double PArroz = 0.6;
    const double PCerveza = 1.8;
    const double ICerveza = 0.05;
    const double Pdescuento = 0.01;
    const double Impuesto = 0.12;
    //variables de entrada
    int cHuevos, cAceite, cLeche, cArroz, cCerveza;
    //variables de salida
    double tHuevos, tAceite, tLeche, tArroz, tCerveza, subtotal, impuesto, impCerveza, descuento, total;
    cout << "Ingrese las cantidades a adquirir\n";
    cout << "Cantidad de huevos: ";
    cin >> cHuevos;
    cout << "Cantidad de aceite: ";
    cin >> cAceite;
    cout << "Cantidad de leche: ";
    cin >> cLeche;
    cout << "Cantidad de libras de arroz: ";
    cin >> cArroz;
    cout << "Cantidad de cervezas: ";
    cin >> cCerveza;
    //calculos el descuento sobre el subtotal y sobre ese valor el impuesto
    tHuevos = cHuevos * PHuevos;
    tAceite = cAceite * PAceite;
    tLeche = cLeche * PLeche;
    tArroz = cArroz * PArroz;
    tCerveza = cCerveza * PCerveza;
    subtotal = tHuevos + tAceite + tLeche + tArroz + tCerveza;
    descuento = subtotal * Pdescuento;
    impCerveza = (tCerveza - tCerveza * Pdescuento) * ICerveza;
    impuesto = (subtotal - descuento) * Impuesto;
    total = subtotal - descuento + impuesto + impCerveza;

    //impresion nota de venta
    cout << setprecision(2) << fixed; // aplicando formato a las salidas double
    cout << setw(50) << "********Nota de Venta********" << endl;
    cout << setw(8) << "Cantidad" << setw(20) << "Producto" << setw(11) << "P. Unitario" << setw(11) << "Total" << endl;
    cout << setw(8) << cCerveza << setw(20) << " Huevos: " << setw(11) << PHuevos << setw(11) <<tHuevos << endl;
    cout << setw(8) << cAceite << setw(20) << " Aceite: " << setw(11) << PAceite << setw(11) << tAceite << endl;
    cout << setw(8) << cLeche << setw(20) << " Leche: " << setw(11) << PLeche << setw(11) << tLeche << endl;
    cout << setw(8) << cArroz << setw(20) << " Libras de Arroz: " << setw(11) <<PArroz << setw(11) << tArroz << endl;
    cout << setw(8) << cCerveza << setw(20) << " Cerveza:  " << setw(11) << PCerveza<< setw(11) << tCerveza << endl;
    cout << setw(40) << "Subtotal: " << setw(10) << subtotal << endl;
    cout << setw(40) << "Descuento: " << setw(10) << descuento << endl;
    cout << setw(40) << "Impuesto a la Cerveza: " << setw(10) << impCerveza << endl;
    cout << setw(40) << "Impuesto: " << setw(10) << impuesto << endl;
    cout << setw(40) << "Total: " << setw(10) << total << endl;

    return 0;

}
*/

//ejercicio 3.1.1
/*
Calcular el sueldo neto de un trabajador conociendo el número de horas trabajadas, 
la tarifa horaria y la tasa de impuestos.

int main()
{
    double horas, tarifa, tasaImpuesto, bruto, impuestos, neto;
    cout << "Ingrese el numero de horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese la tarifa: ";
    cin >> tarifa;
    cout << "Ingrese la tasa de impuesto: ";
    cin >> tasaImpuesto;
    bruto = horas * tarifa;
    impuestos = bruto * tasaImpuesto / 100;
    neto = bruto - impuestos;
    cout << "Sueldo neto: " << neto;
    
    return 0;
}
*/
