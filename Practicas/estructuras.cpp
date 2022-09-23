#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Constantes

const int MAX=100;
const int lim=30;
typedef char tTemp[lim];

//Estructuras

typedef struct{
  string nombre;
  int ganados;
  int empatados;
}tEquipo;

typedef struct{
  tEquipo equipos[MAX];
  int total[MAX];
  int contador;
}tListaEquipos;

typedef struct{
  long int identificacion;
  tTemp nombre;
  int peso;
  tTemp tipo;
}tAnimal;

typedef struct {
  string nombre;
  int edad;
  string grado;
  string contratacion;
}tEmpleado;


typedef struct {
  tEmpleado empleados[MAX];
}tListaEmpleados;

typedef struct {
  tAnimal animales[MAX];
  int contador;
} tListaAnimales;

typedef struct{
	int dia, mes, año;
}tfecha;


//Prototipos

void leerequipo(tListaEquipos& lista);
void imprimir_equipos(tListaEquipos& lista);
void ordenar_equipos(tListaEquipos& lista);

int menu_animales();
void cargar_animal(tListaAnimales& lista, bool& ok);
void guardar_animal(const tListaAnimales lista);
void leeranimal(tAnimal& animal);
void insertaranimal(tListaAnimales& lista, tAnimal animal, bool& ok);
void listado_animales(const tListaAnimales lista);
int buscar_animal(tListaAnimales& lista, string nombre);

void ingresar(tListaEmpleados& lista, int n);
void listado_empleados(const tListaEmpleados lista,int);

void pedirFecha(tfecha& d);
tfecha mayor(tfecha& d1,tfecha& d2);
void mostrarMayor(const tfecha mayor);

//Funciones y procesos

int menu();
void equipos();
void zoologico();
void empleados();
void fechas();

//Main

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
      cin.ignore();
      equipos();
			cout << endl << "________________________________________________________________" << endl;
			break;
		case 2:
			cout << "________________________________________________________________" << endl;
      zoologico();
			cout << endl << "________________________________________________________________" << endl;
			break;
		case 3:
			cout << "________________________________________________________________" << endl;
      empleados();
			cout << endl << "________________________________________________________________" << endl;
			break;
		case 4:
			cout << "________________________________________________________________" << endl;
      fechas();
			cout << endl << "________________________________________________________________" << endl;
			break;
		}
	} while (op != 0);
	return 0;
}

//Menu

int menu()
{
	int opc;
	cout << endl << endl << setw(56) << "_____________________________________________________" << endl;
	cout << "  |" << setw(54) << " |" << endl;
	cout << "  |" << setw(54) << " M E N U  E S T R U C T U R A S - P R A C T I C A  7 |" << endl;
	cout << "  |" << setw(54) << "_____________________________________________________|" << endl;
	cout << "  |" << setw(54) << " |" << endl;
	cout << "  |" << "1  EQUIPOS" << setw(44) << " |" << endl;
	cout << "  |" << "2  ANIMALES" << setw(43) << " |" << endl;
	cout << "  |" << "3  BECARIOS" << setw(43) << " |" << endl;
	cout << "  |" << "4  FECHAS" << setw(45) << " |" << endl;
	cout << "  |" << "0  SALIR" << setw(46) << " |" << endl;
	cout << "  |" << setw(54) << "_____________________________________________________|" << endl << endl;
	do
	{
		cout << "   OPCION: ";
		cin >> opc;
		if (opc < 0 || opc > 4)
		{
			cout << endl << "ERROR! La opcion ingresada no es valida... Ingrese nuevamente." << endl << endl;
		}
	} while (opc < 0 || opc > 4);
	return opc;
}

//1.-EJERCICIO 7.1

void equipos() 
{
  tListaEquipos lista;
  leerequipo(lista);
  cout<<"Las puntos de los equipos son : ";
  imprimir_equipos(lista);
  ordenar_equipos(lista);
  cout<<"Las puntos ordenados (de menor a mayor) de los equipos son : ";
  imprimir_equipos(lista);
  cout << "________________________________________________________________" << endl;
}

void leerequipo(tListaEquipos& lista)
{
  char salir;
  bool ok = 0;
  lista.contador=0;
  while(lista.contador < MAX && !ok)
  {
    do
    {
      cout << "________________________________________________________________" << endl;
      cout<<"Ingrese nombre de equipo " << lista.contador+1<<":";
      getline(cin,lista.equipos[lista.contador].nombre);
      cout<<"Ingrese partidos ganados:";
      cin>>lista.equipos[lista.contador].ganados;
      cout<<"Ingrese partidos empatados:";
      cin>>lista.equipos[lista.contador].empatados;
      lista.total[lista.contador] =(lista.equipos[lista.contador].ganados*3)+(lista.equipos[lista.contador].empatados*1);
      cout<<"Añadir otro equipo: S/N"<<endl;
      cin>>salir;
      cout << "________________________________________________________________" << endl;
      lista.contador++;
      cin.ignore();
    }while(salir == 'S');
    if (salir != 'S') 
    {
        ok = 1;
		}
  }
}

void ordenar_equipos(tListaEquipos& lista)
{
    int i,j,aux;
    for (i=0; i<lista.contador; i++)
    {
        for(j=i+1;j<lista.contador;j++)
        {
            if(lista.total[j] <lista.total[i] )
            {
               aux = lista.total[i] ;
               lista.total[i] =lista.total[j] ;
               lista.total[j] =aux;
            }

        }
    }
}

void imprimir_equipos(tListaEquipos& lista)
{
  for (int i=0; i<lista.contador;i++)
  {
    cout<<"["<<lista.total[i]<<"]";
  }
  cout<<endl;
}

//2.- EJERCICIO 7.2

void zoologico() {
	tListaAnimales lista;
	tAnimal animal;
  string nombre;
	bool exito;
	int op, pos;
	cargar_animal(lista, exito);
	if (!exito) 
  {
    cout << "No se ha podido cargar la lista!" << endl;
	}
	else {
		do {
			op = menu_animales();
			switch (op) {
			case 1:
			{
				leeranimal(animal);
				insertaranimal(lista, animal, exito);
				if (!exito) {
					cout << "Lista llena: imposible insertar" << endl;
				}

			}
			break;
      case 2:
			{
				listado_animales(lista);
			}
      break;
			case 3:
			{
        cin.ignore();
        cout<<"Nombre a buscar: "<<endl;
        getline(cin,nombre);
        cout<<"Posicion: "<<buscar_animal(lista,nombre)<<endl;
			}
			break;
		 }
		} while (op != 4);
		guardar_animal(lista);
	}
}

int menu_animales() 
{
   int opc;
   cout  << "   " <<"_____________________________________________________" << endl;
   cout << "  |" << setw(54) << " |" << endl;
   cout << "  |" << setw(30) << " ZOOLOGICO " <<setw(24) <<"|"<< endl;
   cout << "  |" << setw(54) << "_____________________________________________________|" << endl;
   cout << "  |" << setw(54) << " |" << endl;
   cout << "  |" << "1  AÑADIR ANIMAL" << setw(38) << " |" << endl;
   cout << "  |" << "2  BASE DE DATOS DE ANIMALES DEL ZOOLOGICO" << setw(12) << " |" << endl;
   cout << "  |" << "3  BUSCAR ANIMAL" << setw(38) << " |" << endl;
   cout << "  |" << "4  GUARDAR Y SALIR" << setw(36) << " |" << endl;
   cout << "  |" << "_____________________________________________________|" << endl << endl;
   do
   {
     cout << "   OPCION: ";
     cin >> opc;
     if (opc < 1 || opc > 4)
     {
       cout << endl << "ERROR! La opcion ingresada no es valida... Ingrese nuevamente." << endl << endl;
       }
    } while (opc < 1 || opc > 4);
	return opc;
}

void cargar_animal(tListaAnimales& lista, bool& ok) {
	tAnimal animal;
	ifstream archivo;
	char aux;
	lista.contador = 0;
	archivo.open("animales.txt");
	if (!archivo.is_open()) {
		ok = false;
	}
	else {
		ok = true;
    archivo>>animal.identificacion;
    archivo.get(aux);
		archivo.getline(animal.nombre,30,'\n');
		while ((*animal.nombre != '\0') && (lista.contador < MAX)) {
      archivo.getline(animal.tipo,30,'\n');
			archivo >> animal.peso;
      archivo>>animal.identificacion;
      archivo.get(aux);
			lista.animales[lista.contador] = animal;
			lista.contador++;
			archivo.getline(animal.nombre,30,'\n');
		} 
	}
  archivo.close();
}

void guardar_animal(const tListaAnimales lista) {
	ofstream archivo;
	archivo.open("animales.txt");
	for (int i = 0; i < lista.contador; i++) {
    archivo << lista.animales[i].identificacion<<endl;
		archivo << lista.animales[i].nombre << endl;
    archivo << lista.animales[i].tipo << endl;
    archivo << lista.animales[i].peso << endl;
	}
	archivo << "\0";
	archivo.close();
}

void leeranimal(tAnimal& animal) 
{
	cin.ignore();
  srand(time(NULL));
  animal.identificacion=rand();
  cout<<"Identificacion:"<<animal.identificacion;
	cout << "\nNombre: ";
	cin.getline(animal.nombre,30,'\n');
	cout << "Tipo: ";
	cin.getline(animal.tipo,30,'\n');
  cout << "Peso: ";
	cin >> animal.peso;
}

void insertaranimal(tListaAnimales& lista, tAnimal animal, bool& ok) {
	ok = true;
	if (lista.contador == MAX) {
		ok = false;
	}
	else {
		lista.animales[lista.contador] = animal;
		lista.contador++;
	}
}

void eliminaranimal(tListaAnimales& lista, int pos, bool& ok)
{
	if ((pos < 0) || (pos > lista.contador - 1)) 
  {
		ok = false;
	}
	else {
		ok = true;
		for (int i = pos; i < lista.contador - 1; i++) {
			lista.animales[i] = lista.animales[i + 1];
		}
		lista.contador--;
	}
}

void listado_animales(const tListaAnimales lista) 
{
  cout<<"Nº"<<setw(15)<<"Identificacion"<<setw(8)<<"Animal"<<setw(10)<<"Tipo"<<setw
  (17)<<"Peso"<<endl;
  cout << "________________________________________________________________" << endl;
	for (int i = 0; i < lista.contador; i++) 
  {
    cout<<i+1<<": ";
    cout << right << setw(4) << lista.animales[i].identificacion<< " ";
    cout << right << setw(10)<<lista.animales[i].nombre<<" ";
    cout << right << setw(14) << lista.animales[i].tipo<< " ";
    cout << right << setw(10) << lista.animales[i].peso <<" kg ";
    cout<<endl; 
	 }
  cout << "________________________________________________________________" << endl;	
}

int buscar_animal(tListaAnimales& lista, string nombre) 
{
  int pos = 0;
  bool encontrado = false;
  while ((pos < lista.contador) && !encontrado) 
  {
    if (nombre == lista.animales[pos].nombre) 
    {

      encontrado = true;
      }
      else 
      {
        pos++;
        }
  }
  if (encontrado) 
  {
    pos++;
  }else {
    pos = -1;
    }
  return pos;
}

//3.-EJERCICIO 7.3

void empleados() 
{
  int n;
  tListaEmpleados lista;
  cout << "________________________________________________________________" << endl;
  do
  { 
    cout<<"Ingrese la cantidad de empleados: "<<endl;
    cin>>n;
    cin.ignore();
    ingresar(lista,n);
    if(n<=0)
    {
      cout<<"Cantidad ingresada no valida"<<endl;
      }
      if(n>MAX)
      {
        cout<<"Cantidad maxima es "<<MAX<<endl;
      }
  }while(n<=0 || n>MAX);
  cout<<"El listado es: "<<endl;
  cout << "________________________________________________________________" << endl;
  listado_empleados(lista,n);
}

void ingresar(tListaEmpleados& lista, int n)
{
  for(int i=0;i<n;i++)
  {
    cout << "________________________________________________________________" << endl;
    cout<<"Empleado "<<i+1<<endl;
    cout<<"Nombre: ";
    getline(cin,lista.empleados[i].nombre);
    cout<<"Edad: ";
    cin>>lista.empleados[i].edad;
    cin.ignore();
    cout<<"Grado: ";
    getline(cin,lista.empleados[i].grado);
    cout<<"Contratacion: ";
    getline(cin,lista.empleados[i].contratacion);
  cout << "________________________________________________________________" << endl;
  }
}

void listado_empleados(const tListaEmpleados lista,int n) 
{
  cout<<"Nº"<<setw(7)<<"Nombre"<<setw(14)<<"Edad"<<setw(17)<<"Titulo"<<setw
  (18)<<"Contrato"<<endl;
  cout << "________________________________________________________________" << endl;
	for (int i = 0; i < n; i++) 
  {
    cout<<i+1<<": ";
    cout << left<<setw(4) << lista.empleados[i].nombre;
    cout << right << setw(12) << lista.empleados[i].edad <<" años ";
    cout << right << setw(12) << lista.empleados[i].grado<< " ";
    cout << right << setw(14) <<lista.empleados[i].contratacion << " ";
    cout<<endl;
	}
  cout << "________________________________________________________________" << endl;	
}

//4.-EJERCICIO 7.4

void fechas()
{
  tfecha d1,d2;
  cout<<"Ingrese la fecha 1:"<<endl;
	pedirFecha(d1);
  cout<<"Ingrese la fecha 2:"<<endl;
  pedirFecha(d2);
	tfecha fechaMayor = mayor(d1,d2);
	mostrarMayor(fechaMayor);
	cin.get();
}

tfecha mayor(tfecha& d1,tfecha& d2)
{
  tfecha m;
  
  if(d1.año == d2.año)
  {
    if(d1.mes == d2.mes)
    {
      if(d1.dia == d2.dia)
      {
        cout<<"Las fechas son el mismo dia";
			}
      else
      {
        if(d1.dia > d2.dia)
        {
          m = d1;
          }else
          {
            m = d2;
            }
      }
		}
		else
    {
			if(d1.mes > d2.mes)
      {
				m = d1;
			}
			else
      {
        m = d2;
        }
    }		
	}
	else{
		if(d1.año > d2.año)
    {
			m = d1;
		}	
		else{
			m = d2;
		}
	}
	return m;	
}
 
void pedirFecha(tfecha& d){
  bool valida = false;
  bool bisiesto = false;
  do
  { 
    cout << "Introduce el dia: ";
    cin>>d.dia;
    cout << "Introduce el mes: ";
    cin>>d.mes;
    cout << "Introduce el anio: ";
    cin>>d.año;
    if(((d.año%4 == 0) && (d.año%100!=100)) || d.año%400==0)
    {
      bisiesto = true;
    }
      if(d.dia>0 && d.dia<32 && d.mes>0 && d.mes<13 && d.año>0)
      {
        if(d.mes==1 || d.mes==3 || d.mes==5 || d.mes==7 || d.mes==8 || d.mes==10 || d.mes==12)
        {
          cout << "\nFecha valida\n";
          valida=true;
        }
        else
        {
          if(d.mes==2 && d.dia<30 && bisiesto)
          { 
            cout << "\nFecha valida\n";
            valida=true;
            }
          else if(d.mes==2 && d.dia<29 && !bisiesto)
          { 
            cout << "\nFecha valida\n";
            valida=true;
            }
          else if(d.mes!=2 && d.dia<31)
          { 
            valida=true;
            cout << "\nFecha valida\n"; 
            }
          else
          { 
            cout << "\nFecha no valida\n"; 
          }
        }
      }
      else
      { 
        cout << "\nFecha no valida\n"; 
      } 
  cout<<endl;
  }while(valida==false);
}

void mostrarMayor(const tfecha mayor)
{
	cout<<"-------------------------------------------";
	cout<<"\nLa mayor fecha es: "<<mayor.dia<<"/"<<mayor.mes<<"/"<<mayor.año<<endl;
}
