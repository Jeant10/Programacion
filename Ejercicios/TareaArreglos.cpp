/*IMPORTANTE: El programa esta escrito en Visual Studio
* El comando:
	system("cls");
	No existe en Linux, por lo que en Replit no funcionará se debe cambiar por 
	system("clear");
*/

#include <iostream>
using namespace std;
#include <iomanip>
#include <ctime>
#include <cstdlib>


const int MAX = 50;
const int MAX2 = 20;
const int centinela = -1;

//MENU PRINCIPAL:
int menu();
//FUNCIONES EJERCICIO 1: Calificaciones
void Calificaciones();
void GuardarCalificaciones(double notas[MAX], int& contador);
void ImprimiNotas(const double notas[MAX], int contador);
int menu_ejercicio1(const double notas[MAX], int contador);
void agregar(double notas[MAX], int& contador, double add);
void busca(const double notas[MAX], int contador, double buscar);
void elimina(double notas[MAX], int& contador, int pos);
void insertar(double notas[MAX], int& contador, double insert, int pos);
void ordenarBurb(double notas[MAX], int contador);
//FUNCIONES EJERCICIO 2: Palindromo
void procPalindromo();
bool Palindromo(int num);
//FUNCIONES EJERCICIO 3: Duplicados
void Duplicados();
void ImprimirArreglo(int numeros[MAX2], int contador);
//FUNCIONES EJERCICIO 4: Dados
void Dados();
int SumaDados(int s);

int main()
{
	int op;
	do
	{
		op = menu();
		switch (op)
		{
		case 1:
			cout << "________________________________________________________________" << endl;
			Calificaciones();
			cout << endl << "________________________________________________________________" << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "________________________________________________________________" << endl;
			procPalindromo();
			cout << endl << "________________________________________________________________" << endl;
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "________________________________________________________________" << endl;
			Duplicados();
			cout << endl << "________________________________________________________________" << endl;
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "________________________________________________________________" << endl;
			Dados();
			cout << endl << "________________________________________________________________" << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (op != 5);
	return 0;
}

// Menú
int menu()
{
	int opc;
	cout << endl << endl << setw(56) << "_____________________________________________________" << endl;
	cout << "  |" << setw(54) << " |" << endl;
	cout << "  |" << setw(54) << " M E N U   A R R E G L O S   -  P R A C T I C A   6  |" << endl;
	cout << "  |" << setw(54) << "_____________________________________________________|" << endl;
	cout << "  |" << setw(54) << " |" << endl;
	cout << "  |" << setw(36) << "1  CALIFICACIONES" << setw(18) << " |" << endl;
	cout << "  |" << setw(32) << "2  PALINDROMO" << setw(22) << " |" << endl;
	cout << "  |" << setw(32) << "3  DUPLICADOS" << setw(22) << " |" << endl;
	cout << "  |" << setw(27) << "4  DADOS" << setw(27) << " |" << endl;
	cout << "  |" << setw(27) << "5  SALIR" << setw(27) << " |" << endl;
	cout << "  |" << setw(54) << "_____________________________________________________|" << endl << endl;
	do
	{
		cout << "   OPCION: ";
		cin >> opc;
		if (opc < 1 || opc > 5)
		{
			cout << endl << "ERROR! La opcion ingresada no es valida... Ingrese nuevamente." << endl << endl;
		}
	} while (opc < 1 || opc > 5);
	return opc;
}

//FUNCIONES EJERCICIO 1:Calificaciones
void Calificaciones()
{
	double notas[MAX];
	int contador = 0;
	int opcion, posicion;
	double elemento;
	cout << endl << setw(46) << "C A L I F I C A C I O N E S" << endl << endl;
	cout << "OBSERVACION: 1. Para TERMINAR el ingreso de notas, DIGITE -1" << endl;
	cout << "             2. Rango de Calificaciones de 0 - 10" << endl << endl << endl;
	// 1. Guardar calificaciones en un arreglo:
	GuardarCalificaciones(notas, contador);
	ImprimiNotas(notas, contador);
	cout << endl;
	// 2. Procesos a realizar:
	system("pause");
	system("cls");
	do
	{
		opcion = menu_ejercicio1(notas, contador);
		switch (opcion) {
		case 1:
			cout << "___________________________________________________________________" << endl;
			do {
				cout << endl << "CALIFICACION PARA AGREGAR: ";
				cin >> elemento;
			} while (elemento < 0 || elemento > 10);
			agregar(notas, contador, elemento);
			cout << endl << "___________________________________________________________________" << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "___________________________________________________________________" << endl;
			do {
				cout << endl << endl << "ELEMENTO A BUSCAR : ";
				cin >> elemento;
				if (elemento < 0 || elemento > 10) {
					cout << endl << "ERROR! Ha ingresado un elemento fuera del rango (0-10)... Intentelo de nuevo." << endl << endl;
				}
			} while (elemento < 0 || elemento > 10);
			busca(notas, contador, elemento);
			cout << endl << "___________________________________________________________________" << endl;
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "___________________________________________________________________" << endl;
			cout << endl << "POSICION DEL ELEMENTO A ELIMINAR: ";
			cin >> posicion;
			elimina(notas, contador, posicion - 1);
			cout << endl << "___________________________________________________________________" << endl;
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "___________________________________________________________________" << endl;
			do {
				cout << endl << "CALIFICACION A INSERTAR: ";
				cin >> elemento;
			} while (elemento < 0 || elemento > 10);
			do {
				cout << "POSICION: ";
				cin >> posicion;
				if (posicion <= 0 || posicion > contador + 1) {
					cout << endl << "Ingrese una posicion valida!" << endl << endl;
				}
			} while (posicion <= 0 || posicion > contador + 1);
			insertar(notas, contador, elemento, posicion - 1);
			cout << endl << "___________________________________________________________________" << endl;
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "___________________________________________________________________" << endl;
			ordenarBurb(notas, contador);
			cout << endl << "___________________________________________________________________" << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (opcion != 6);
}

void GuardarCalificaciones(double notas[MAX], int& contador) {
	int ok = 0;
	while (contador < MAX && (ok != centinela)) {
		do
		{
			cout << "Calificacion " << contador + 1 << " (-1 termina): ";
			cin >> notas[contador];
			if (notas[contador] == -1) {
				cout << endl << "Ha terminado el proceso de ingreso de notas..." << endl << endl;
			}
			else if (notas[contador] < 0 || notas[contador] > 10) {
				cout << endl << "ERROR! Ha ingresado una nota fuera del rango (0-10)... Intentelo de nuevo." << endl << endl;
			}
		} while ((notas[contador] < 0 || notas[contador] > 10) && notas[contador] != centinela);
		if (notas[contador] != centinela) {
			contador++;
		}
		else {
			ok = centinela;
		}
	}
}

void ImprimiNotas(const double notas[MAX], int contador)
{
	cout << endl << "ARREGLO CREADO:";
	for (int j = 0; j < contador; j++) {
		cout << "| " << notas[j] << " |";
	}
	cout << endl;
}

int menu_ejercicio1(const double notas[MAX], int contador)
{
	int opcion;
	ImprimiNotas(notas, contador);
	cout << endl << setw(48) << "_________________________________" << endl << endl;
	cout << setw(38) << "         P R O C E S O S " << endl;
	cout << setw(48) << endl << "_________________________________" << endl << endl;
	cout << setw(43) << " 1  AGREGAR CALIFICACIONES" << endl;
	cout << setw(42) << " 2  BUSCAR CALIFICACIONES" << endl;
	cout << setw(44) << " 3  ELIMINAR CALIFICACIONES" << endl;
	cout << setw(44) << " 4  INSERTAR CALIFICACIONES" << endl;
	cout << setw(43) << " 5  ORDENAR CALIFICACIONES" << endl;
	cout << setw(47) << " 6  REGRESAR AL MENU PRINCIPAL" << endl;
	cout << setw(48) << "_________________________________" << endl;
	do
	{
		cout << setw(23) << "OPCION: ";
		cin >> opcion;
		if (opcion < 1 || opcion > 6)
		{
			cout << endl << "ERROR! La opcion ingresada no es valida... Ingrese nuevamente." << endl << endl;
		}
	} while (opcion < 1 || opcion > 6);
	return opcion;
}

void agregar(double notas[MAX], int& contador, double add)
{
	//Para agregar al final:
	bool ok = true;
	if (contador == MAX) {
		ok = false;
	}
	else {
		notas[contador] = add;
		contador++;
	}
	if (!ok) {
		cout << endl << "La lista esta llena. Imposible agregar" << endl;
	}
	else {
		cout << endl << "Calificacion agregada con exito" << endl;
	}
	cout << endl;
}

void busca(const double notas[MAX], int contador, double buscar)
{
	bool encontrado = false;
	// Si existen elementos busca, sino no
	if (contador > 0) {
		for (int i = 0; i < contador; i++) {
			if (notas[i] == buscar) {
				cout << endl << buscar << " se encuentra en la posicion " << i + 1 << endl;
				encontrado = true;
			}
		}
		if (!encontrado) {
			cout << endl << buscar << " NO se ha encontrado" << endl;
		}
	}
	else {
		cout << endl << "La lista esta vacia!" << endl;
	}
	cout << endl;
}

void elimina(double notas[MAX], int& contador, int pos)
{
	bool exito;
	if ((pos < 0) || (pos > contador - 1)) {
		exito = false;
	}
	else {
		exito = true;
		for (int i = pos; i < contador - 1; i++) {
			notas[i] = notas[i + 1];
		}
		contador--;
	}
	if (!exito) {
		cout << endl << "Elemento inexistente!" << endl;
	}
	else {
		cout << endl << "Se ha eliminado el elemento" << endl;
	}
	// Si se elimina todos los elementos
	if (contador == 0) {
		cout << endl << "La lista esta vacia..." << endl;
	}
	cout << endl;
}

void insertar(double notas[MAX], int& contador, double insert, int pos)
{
	if (contador < MAX) {
		for (int i = contador; i > pos; i--) {
			notas[i] = notas[i - 1];
		}
		notas[pos] = insert;
		cout << endl << "Calificacion insertada en la posicion " << pos + 1 << " con exito" << endl;
		contador++;
	}
	else {
		cout << endl << "La lista esta llena. Imposible insertar" << endl;
	}
	cout << endl;
}

void ordenarBurb(double notas[MAX], int contador)
{
	double aux;
	for (int i = 0; i < contador; i++) {
		for (int j = i + 1; j < contador; j++) {
			if (notas[i] > notas[j]) {
				aux = notas[i];
				notas[i] = notas[j];
				notas[j] = aux;
			}
		}
	}
	cout << endl << "Se ha ordenado la lista..." << endl;
	ImprimiNotas(notas, contador);
}

//FUNCIONES EJERCICIO 2: Palindromo
void procPalindromo()
{
	int n;
	cout << endl << setw(39) << "P A L I N D R O M O" << endl << endl;
	do
	{
		cout << endl << "INGRESE UN NUMERO: ";
		cin >> n;
	} while (n < 0);
	if (Palindromo(n) != 0) {
		cout << endl << endl << "Es un PALINDROMO" << endl;
	}
	else
	{
		cout << endl << endl << "No es un PALINDROMO" << endl;
	}
}

bool Palindromo(int num)
{
	int cifrasInv[10], x = 0, cifrasOrg[10];
	bool resp = false;
	// Arreglo Invertido
	while (num > 0)
	{
		cifrasInv[x] = num % 10;
		num /= 10;
		x++;
	}
	cout << endl << "Arreglo Invertido: ";
	for (int d = 0; d < x; d++) {
		cout << "| " << cifrasInv[d] << " |";
	}
	// Arreglo original
	int j = x - 1;
	for (int i = 0; i < x; i++) {
		cifrasOrg[j] = cifrasInv[i];
		j -= 1;
	}
	cout << endl << "Arreglo Original:  ";
	for (int d = 0; d < x; d++) {
		cout << "| " << cifrasOrg[d] << " |";
	}
	// Comparación de los 2 arreglos:
	for (int k = 0; k < x; k++) {
		if (cifrasOrg[k] == cifrasInv[k])
		{
			resp = true;
		}
		else {
			resp = false;
		}
	}
	return resp;
}

//FUNCIONES EJERCICIO 3: Duplicados
void Duplicados()
{
	int Numeros[20];
	int contador = 0;
	bool repetido;
	int entrada;
	cout << endl << setw(41) << "D U P L I C A D O S" << endl << endl;
	for (int i = 0; i < 20; i++) {
		do {
			cout << i + 1 << ". INGRESE NUMEROS ENTRE (10 - 100): ";
			cin >> entrada;
			if (entrada < 10 || entrada > 100) {
				cout << "Ingreso no valido! RANGO (10-100) ... Intente de nuevo." << endl;
			}
		} while (entrada < 10 || entrada > 100);
		if (i == 0) { //ingreso el primer elemento
			Numeros[i] = entrada;
			contador = 1;
		}
		else {
			int j = 0;
			repetido = false;
			cout << "aqui" << endl;
			while (j < contador && !repetido) {
				//cout << entrada << " " << Numeros[j];
				if (entrada == Numeros[j]) {
					//cout << "repetidosss" << endl;
					repetido = true;
				}
				j++;
			}
			if (repetido == false) {
				//cout << "repetidos" << endl;
				Numeros[contador] = entrada;
				contador++;
			}
		}
	}
	ImprimirArreglo(Numeros, contador);
}

void ImprimirArreglo(int a[MAX2], int contador)
{
	cout << endl << "ARREGLO DE VALORES UNICOS: " << endl;
	for (int i = 0; i < contador; i++) {
		cout << "| " << a[i] << " |";
	}
	cout << endl;
}

//FUNCIONES EJERCICIO 4: Dados
void Dados() {
	int suma_lanzamiento, Frecuencia[13] = { 0 };
	int dado1, dado2, suma = 0;
	cout << endl << setw(35) << "D A D O S" << endl << endl;
	cout << "LANZAMIENTO DE DADOS!.." << endl;
	cout << endl << "A continuacion se mostraran los resultados de los 36 000 tiros de dados..." << endl << endl;
	system("pause");
	system("cls");
	srand(time(NULL));
	for (int i = 1; i <= 36000; i++) {
		//Genero numeros aleatorios para cada dado (RANGO 1-6):
		dado1 = 1 + (rand() % 6);
		dado2 = 1 + (rand() % 6);
		suma_lanzamiento = dado1 + dado2;
		Frecuencia[suma_lanzamiento]++;
	}
	// Presentación de resultados de frecuencias:
	cout << endl << "RESULTADOS: " << endl;
	cout << endl << setw(35) << "____________________" << endl;
	cout << setw(15) << "|" << setw(21) << "  |" << endl;
	cout << setw(15) << "|" << setw(15) << "FRECUENCIA" << setw(6) << "|" << endl;
	cout << setw(36) << "|____________________|" << endl;
	cout << setw(24) << "| NUMERO  " << "|" << setw(9) << " VECES" << " |" << endl;
	for (int x = 2; x <= 12; x++) {
		if (x <= 9) {
			cout << setw(15) << "|" << x << setw(9) << "|" << setw(5) << Frecuencia[x] << setw(6) << "|" << endl;
		}
		else {
			cout << setw(15) << "|" << x << setw(8) << "|" << setw(5) << Frecuencia[x] << setw(6) << "|" << endl;
		}
	}
	cout << setw(36) << "|_________|__________|" << endl << endl;
}


