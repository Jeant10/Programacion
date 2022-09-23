/*Contenido del Archivo stock.txt
123
TV_PLASMA_32"
457.95
4
4265
TV_LED_38"
379.95
12
43256
DVD_GRABADOR_250_GB
255.00
8
672
TABLET_10"_HD_Wifi_3G
428.50
5
-1
*/


//Ejercicio 3:
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAX = 100;

typedef struct {
	int codigo;
	string nombre;
	double precio;
	int unidades;
}tStock;
typedef tStock tArray[MAX];
typedef struct {
	tArray datos;
	int contador;
} tLista;

void LeerStock(tLista& lista, bool& check);
void ActivoTotal(tLista& lista);
void MostrarStock(const tLista& lista);
void MostrarProducto(tStock stock);
void ordenarBurburja(tLista& lista, tStock& stock);
bool operator<(tStock opIzq, tStock opDer);

int main() {
	int op;
	bool ok;
	tLista lista;
	tStock stock;
	LeerStock(lista, ok);
	if (!ok) {
		cout << endl << "ERROR! No se puede leer el archivo" << endl;
	}
	else {
		MostrarStock(lista);
		ActivoTotal(lista);
		ordenarBurburja(lista, stock);
	}
	return 0;
}

void LeerStock(tLista& lista, bool& check) {
	tStock stock;
	ifstream archivo;
	lista.contador = 0;
	archivo.open("stock.txt");
	if (!archivo.is_open()) {
		check = false;
	}
	else {
		check = true;
		archivo >> stock.codigo;
		while ((stock.codigo != -1) && (lista.contador < MAX)) {
			archivo >> stock.nombre;
			archivo >> stock.precio;
			archivo >> stock.unidades;
			lista.datos[lista.contador] = stock;
			lista.contador++;
			archivo >> stock.codigo;
		}
		archivo.close();
	}
}

void ActivoTotal(tLista& lista) {
	cout << endl << " >> CALCULO DEL ACTIVO TOTAL: " << endl << endl;
	double activo = 0, activo_total;
	for (int i = 0; i < lista.contador; i++) {
		activo += lista.datos[i].precio * lista.datos[i].unidades;
	}
	activo_total = activo;
	cout << endl << "ACTIVO TOTAL = " << activo_total << endl;
}

void MostrarStock(const tLista& lista) {
	cout << endl << " >> LISTA DE PRODUCTOS DEL ARCHIVO: " << endl << endl;
	cout << "________________________________________________________________________________________" << endl;
	cout << endl << setw(58) << "L I S T A   D E  P R O D U C T O S" << endl << endl;
	cout << " CODIGO" << setw(25) << "PRODUCTOS" << setw(26) << "PRECIO" << setw(28) << "UNIDADES" << endl;
	for (int i = 0; i < lista.contador; i++) {
		MostrarProducto(lista.datos[i]);
	}
	cout << "________________________________________________________________________________________" << endl;
	cout << endl;
}
void MostrarProducto(tStock stock) {
	cout << setw(7) << stock.codigo << right << setw(25) << stock.nombre << setw(20) << "$" << setw(8) << stock.precio << setw(17) << stock.unidades << setw(10) << "unidades" << endl;
}
void ordenarBurburja(tLista& lista, tStock& stock) {
	int i = 0;
	bool inter = true;
	tStock temp;
	if (lista.contador == 0) {
		cout << endl << "ERROR! No existen productos en el registro" << endl << endl;
	}
	else {
		while ((i < lista.contador - 1) && inter) {
			inter = false;
			for (int j = lista.contador - 1; j > i; j--) {
				if (lista.datos[j] < lista.datos[j - 1]) {
					temp = lista.datos[j];
					lista.datos[j] = lista.datos[j - 1];
					lista.datos[j - 1] = temp;
					inter = true;
				}
			}
			if (inter) {
				i++;
			}
		}
		cout << endl << ">> Se ha ordenado el registro de acuerdo a los nombres de los productos! " << endl << endl;
		MostrarStock(lista);
	}
}
bool operator<(tStock opIzq, tStock opDer) {
	return (opIzq.nombre < opDer.nombre);
}


/*
// Ejercicio 2:
#include <iostream>
#include <iomanip>
using namespace std;

void DevolverCambio(double precio_prod, double dinero_pag);

int main()
{
	double precio_producto, pago_producto;
	cout << endl << "__________________________________________________________" << endl << endl;
	cout << setw(51) << "M A Q U I N A   E X P E N D E D O R A" << endl;
	cout << endl << "__________________________________________________________" << endl;
	do {
		cout << endl << "PRECIO DEL PRODUCTO QUE VA A COMPRAR: ";
		cin >> precio_producto;
	} while (precio_producto < 0);
	do {
		cout << "DINERO QUE HA PAGADO POR EL PRODUCTO: ";
		cin >> pago_producto;
	} while (pago_producto < 0);
	if (precio_producto == pago_producto) {
		cout << endl << "No tiene cambio, su valor es exacto..." << endl;
	}
	else {
		cout << endl << "Su cambio es..." << endl;
		DevolverCambio(precio_producto, pago_producto);
	}
	return 0;
}

void DevolverCambio(double precio_prod, double dinero_pag) {
	double valor = dinero_pag - precio_prod;
	double centavos, div;
	int dolar, division;
	dolar = int(valor);
	cout << "Monedas de 1 dolar = " << dolar << endl;
	centavos = (valor - dolar) * 100;
	division = centavos / 50;
	if (division != 0) {
		cout << "Monedas de 50 centavos = " << division << endl;
		centavos -= 50;
	}
	else {
		cout << "Monedas de 50 centavos = 0" << endl;
	}
	division = centavos / 25;
	if (division != 0) {
		cout << "Monedas de 25 centavos = " << division << endl;
		centavos -= 25;
	}
	else {
		cout << "Monedas de 25 centavos = 0" << endl;
	}
	div = centavos / 10;
	if (div != 0) {
		cout << "Monedas de 10 centavos = " << int(div) << endl;
		centavos -= int(div) * 10;
	}
	else {
		cout << "Monedas de 10 centavos = 0" << endl;
	}
	division = centavos / 5;
	if (division != 0) {
		cout << "Monedas de 5 centavos = " << division << endl;
		centavos -= 5;
	}
	else {
		cout << "Monedas de 5 centavos = 0" << endl;
	}
	division = centavos / 1;
	if (division != 0) {
		cout << "Monedas de 1 centavo = " << centavos << endl;
	}
	else {
		cout << "Monedas de 1 centavo = 0" << endl;
	}
}


*/
/*
// Ejercicio 1: Alternativa 2 (más óptima) con funciones string
#include <iostream>
#include <string>
using namespace std;

string Plural(string nombre);

int main() {
	string frase, palabra;
	string separacion = " ";
	cout << endl << " P L U R A L E S" << endl << endl;
	cout << endl << "Ingrese por favor la cadena: " << endl;
	getline(cin, frase);
	int start = 0;
	int end = frase.find(separacion);
	while (end != -1) {
		palabra = frase.substr(start, end - start);
		cout << Plural(palabra) << " ";
		start = end + separacion.size();
		end = frase.find(separacion, start);
	}
	palabra = frase.substr(start, end - start);
	cout << Plural(palabra);

	return 0;
}

string Plural(string nombre) {
	string palabra_plural = nombre;
	int tam = nombre.length() - 1;
	char final_c = nombre[tam];
	if ((final_c == 'a') || (final_c == 'e') || (final_c == 'i') || (final_c == 'o') || (final_c == 'u')) {
		palabra_plural += "s";
	}
	else {
		palabra_plural += "es";
	}
	return palabra_plural;
}

*/


/*
// Ejercicio 1: alternativa 1 con arreglos
#include <iostream>
#include <string>
using namespace std;

bool Plural(string nombre);

int main() {
	string nombre;
	int n;
	string cadena[10];
	cout << endl << " P L U R A L E S" << endl << endl;
	cout << endl << "NUMERO DE PALABRAS DE LA CADENA: ";
	cin >> n;
	cout << endl << "Ingrese por favor la cadena: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> nombre;
		cadena[i] = nombre;
	}
	for (int i = 0; i < n; i++) {
		if (Plural(cadena[i])) {
			cadena[i] = cadena[i] + "s";
		}
		else 
		{
			cadena[i] = cadena[i] + "es";
		}
	}
	cout << endl;
	cout << "EN PLURAL:" << endl << endl;
	for (int i = 0; i < n; i++) {
		cout << cadena[i] << " ";
	}
	return 0;
}

bool Plural(string nombre) {
	bool final = false;
	int tam = nombre.length() - 1;
	char final_c = nombre[tam];
	if ((final_c == 'a') || (final_c == 'e') || (final_c == 'i') || (final_c == 'o') || (final_c == 'u')) {
		final = true;
	}
	return final;
}


*/
