// Solución de la Práctica: Estructuras de control I
//El código de cada ejercicio se encuentra comentado para tener la solución en un único archivo
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>
#include <cmath>

//Ejercicio 3.10
//https://es.wikipedia.org/wiki/Desigualdad_triangular
int main()
{
	double a, b, c;
	cout << "Ingrese los 3 lados lados: ";
	cin >> a >> b >> c;
	if ((a + b) > c && (b + c) > a && (a + c) > b)
	{
		cout << "Es un triangulo" << endl;
	}
	else
	{
		cout << "No es un triangulo" << endl;
	}
	return 0;
}


//Ejercicio 3.9
/*
int main()
{
	unsigned int t0, t1;
	char letra;
	cout << "Iniciar llamada(presione cualquier tecla): ";
	cin >> letra;
	t0 = clock();
	cout << "Finalizar llamada(presione cualquier tecla): ";
	cin >> letra;
	t1 = clock();
	double time = (double(t1 - t0) / CLOCKS_PER_SEC);
	cout << setprecision(2) << fixed;
	cout << "El costo de la llamada es: " << (time / 60) * 0.60 << " centavos" << endl;
	return 0;
}
/*

//Ejercicio 3.8
/*
int main() {
	int op;
	double conversion, valor;
	const double tasaCambio = 0.8882;
	cout << "Conversor de divisas" << endl;
	cout << "1. Dolares a Euros" << endl;
	cout << "2. Euros a Dolares" << endl;
	cout << "3. Salir" << endl;
	cout << "Seleccione la conversión a realizar:: ";
	cin >> op;
	cout << "Ingrese la cantidad a convertir: ";
	cin >> valor;
	//opción 1
	if (op == 1) {
		conversion = valor * tasaCambio;
		cout << valor << " dolares son " << conversion << " euros" << endl;
	}
	else if( op == 2){
		conversion = valor / tasaCambio;
		cout << valor << " euros son " << conversion << " dolares " << endl;
	}
	else {
		cout << "Adios.";
	}
	return 0;
}
*/

//Ejercicio 3.7
/*
const double G = 6.67 * pow(10, 11);
int main()
{
	double masa1, masa2, distancia, resultado;
	cout << "Ingrese la masa 1 en toneladas: ";
	cin >> masa1;
	cout << "Ingrese la masa 2 en toneladas: ";
	cin >> masa2;
	cout << "Ingrese la distancia en centimetros: ";
	cin >> distancia;
	masa1 *= 1000; //transformando de Toneladas a Kilogramos
	masa2 *= 1000; //transformando de Toneladas a Kilogramos
	distancia /= 100; // transformando de cm a m.
	resultado = (G * masa1 * masa2) / (pow(distancia, 2));
	cout << "La fuerza de atraccion es: " << resultado;
	return 0;
}
*/

//Ejercicio 3.6
/*
int main()
{
	int numero = 0;
	cout << "Numero \t" << "Cuadradro \t" << "Cubo \t" << endl;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	cout << numero << "\t" << pow(numero, 2) << "\t \t" << pow(numero, 3) << endl;
	numero++;
	return 0;
}

*/

//Ejercicio 3.5
/*
int main()
{
	int x, y, z, suma, producto, promedio;
	cout << "Escriba tres numeros enteros diferentes(a b c): ";
	cin >> x >> y >> z;
	suma = x + y + z;
	cout << "La suma es " << suma << endl;
	promedio = suma / 3;
	cout << "El promedio es " << promedio << endl;
	producto = x * y * z;
	cout << "El producto es " << producto << endl;
	if (x < y && x < z)
	{
		cout << "El numero mas pequeño es " << x << endl;
	}
	else if (y < x && y < z)
	{
		cout << "El numero mas pequeño es " << y << endl;
	}
	else
	{
		cout << "El numero mas pequeño es " << z << endl;
	}
	if (x > y && x > z)
	{
		cout << "El numero mas grande es " << x << endl;
	}
	else if (y > x && y > z)
	{
		cout << "El numero mas grande es " << y << endl;
	}
	else
	{
		cout << "El numero mas grande es " << z << endl;
	}
	return 0;
}
*/

//Ejercicio 3.4
/*
int main()
{
	const double PorcDescuento=0.15;
	const double IVA = 0.12;
	double precio, descuento = 0, iva;
	int unidad;
	char letra;
	string nombre, CI, nombreP, direccion;
	cout << "Precio del producto: ";
	cin >> precio;
	cout << "Unidades: ";
	cin >> unidad;
	cout << "Descuento (S/N)? ";
	cin >> letra;
	cin.ignore(80, '\n');
	cout << "Nombre del cliente: ";//por alguna razon se necesita dos enter
	getline(cin, nombre);
	cout << "CI del cliente: ";
	cin >> CI;
	cin.ignore(80, '\n');
	cout << "Direccion del cliente: ";
	getline(cin, direccion);
	cout << "Nombre del producto: ";
	getline(cin, nombreP);
	cout << endl;
	if (letra == 'S')
	{
		descuento = (precio * unidad) * PorcDescuento;
	}

	iva = ((precio * unidad) - descuento) * 0.12;
	cout << setprecision(2)<<fixed;
	cout << "Factura: " << endl;
	cout << " " << right << setw(50) << nombre << " " << endl;
	cout << " " << right << setw(50) << direccion << " " << endl;
	cout << " " << right << setw(50) << CI << " " << endl;
	cout << endl;
	cout << "Producto: " << nombreP << endl;
	cout << "Precio unitario" << endl;
	cout << " " << right << setw(50) << precio << " " << endl;
	cout << "Unidades " << endl;
	cout << " " << right << setw(50) << unidad << " " << endl;
	cout << "Total " << endl;
	cout << " " << right << setw(50) << precio * unidad << " " << endl;
	cout << "Descuento " << endl;
	cout << " " << right << setw(45) << "-" << descuento << " " << endl;
	cout << "Total tras descuento " << endl;
	cout << " " << right << setw(50) << (precio * unidad) - descuento << " " << endl;
	cout << " I.V.A, " << endl;
	cout << " " << right << setw(50) << iva << " " << endl;
	cout << "Precio final " << endl;
	cout << " " << right << setw(50) << ((precio * unidad) - descuento) + iva << " " << endl;
	return 0;
}
*/

//Ejercicio 3.3
/*
int main()
{
	int x, y;
	char caracter;
	cout << "Ingrese Operando Operador Operando: ";
	cin >> x >> caracter >> y;
	cout << endl;
	if (caracter == '+')
	{
		cout << " " << x << " " << caracter << " " << y << " = " << x + y << endl;
	}
	if (caracter == '-')
	{
		cout << " " << x << " " << caracter << " " << y << " = " << x - y << endl;
	}
	if (caracter == '*')
	{
		cout << " " << x << " " << caracter << " " << y << " = " << x * y << endl;
	}
	if (caracter == '/')
	{
		if (y == 0)
		{
			cout << "No se puede realizar esta operacion" << endl;
		}
		else
		{
			cout << " " << x << " " << caracter << " " << y << " = " << x / y << endl;
		}
	}
	return 0;
}
*/

//Ejercicio 3.2
//Esto es más sencillo resolver con un for, pero para el momento de esta tarea no habiamos estudiado los bucles
//por lo que se puede resolver de la siguiente forma:
/*
int main()
{
	int numero;
	cout << "introduce un numero: ";
	cin >> numero;
	cout << "Tabla de multiplicar del numero " << numero << endl;
	cout << right << setw(3) << numero << setw(9) << " x 1  = " << setw(3) << numero * 1 << endl;
	cout << right << setw(3) << numero << setw(9) << " x 2  = " << setw(3) << numero * 2 << endl;
	cout << right << setw(3) << numero << setw(9) << " x 3  = " << setw(3) << numero * 3 << endl;
	cout << right << setw(3) << numero << setw(9) << " x 4  = " << setw(3) << numero * 4 << endl;
	cout << right << setw(3) << numero << setw(9) << " x 5  = " << setw(3) << numero * 5 << endl;
	cout << right << setw(3) << numero << setw(9) << " x 6  = " << setw(3) << numero * 6 << endl;
	cout << right << setw(3) << numero << setw(9) << " x 7  = " << setw(3) << numero * 7 << endl;
	cout << right << setw(3) << numero << setw(9) << " x 8  = " << setw(3) << numero * 8 << endl;
	cout << right << setw(3) << numero << setw(9) << " x 9  = " << setw(3) << numero * 9 << endl;
	cout << right << setw(3) << numero << setw(9) << " x 10 = " << setw(3) << numero * 10 << endl;
}
*/

//Ejercicio 3.1
/*
int main()
{
	double x;
	char caracter;
	const double cm = 2.54, m = 1609.344, gC = -17.2222, gr = 28.3495, kg1 = 0.001, kg2 = 0.453592, lit = 3.7854;
	cout << "Conversor de medidas anglosajonas a internacionales " << endl;
	cout << "La letra indica la medida" << endl;
	cout << "pulgadas(p) --> centimetros\n"
		<< "millas(m) --> metros\n"
		<< "grados Fahrenheit(f) --> grados centigrados\n"
		<< "galones liquidos(g) --> Litros\n"
		<< "onzas(o)--> gramos\n"
		<< "libras(l) --> kilogramos" << endl << endl;

	cout << "Ingrese el valor a convertir y la letra de la medida (valor espacio letra): ";
	cin >> x >> caracter;

	if (caracter == 'p')
	{
		cout << "pulgadas a centimetros" << endl;
		cout << endl;
		cout << x << " " << caracter << " son " << (x * cm) << " cm " << endl;
	}
	if (caracter == 'm')
	{
		cout << "millas a metros" << endl;
		cout << x << " " << caracter << " son " << (x * m) << " m " << endl;
	}
	if (caracter == 'f')
	{
		cout << "grados farenheit a grados celsius" << endl;
		cout << x << " " << caracter << " son " << (x - 32) * 5 / 9 << " c " << endl;
	}
	if (caracter == 'g')
	{
		cout << "galones a litros" << endl;
		cout << x << " " << caracter << " son " << (x * lit) << " L " << endl;
	}
	if (caracter == 'o')
	{
		cout << "onzas a gramos" << endl;
		cout << x << " " << caracter << " son " << (x * gr) << " gr" << endl;
	}
	if (caracter == 'l')
	{
		cout << "libras a kilogramos" << endl;
		cout << x << " " << caracter << " son " << (x * kg2) << " kg " << endl;
	}
	return 0;
}
*/