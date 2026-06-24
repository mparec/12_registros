#include <iostream>
#include <string>
using namespace std;

struct Empleado {
	string nombre;
	char sexo;
	float sueldo;
};

int main(){
	int n; // Cantidad de empleados
	Empleado E[100]; // Arreglo de registros
	
	cout << "INGRESE LA CANTIDAD DE EMPLEADOS:"; cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << "INGRESE EL NOMBRE (" << i + 1 << "/" << n <<"): "; cin >> E[i].nombre;
		cout << "INGRESE EL SEXO (" << i + 1 << "/" << n <<"): "; cin >> E[i].sexo;
		cout << "INGRESE EL SUELDO (" << i + 1 << "/" << n <<"): "; cin >> E[i].sueldo;
	}
	
	cout << "============================" << endl;
	
	int max = 0;
	
	for (int i = 0; i < n; i++) {
		if (E[i].sueldo > E[max].sueldo) {
			max = i;
		}
	}
	
	int min = 0;
	
	for (int i = 0; i < n; i++) {
		if (E[i].sueldo < E[min].sueldo) {
			min = i;
		}
	}
	
	cout <<
	"DATOS DEL EMPLEADO CON MAYOR Y MENOR SUELDO: " << endl <<
	"NOMBRES: " << E[max].nombre << "    " << E[min].nombre << endl <<
	"SEXO:    " << E[max].sexo << "    " << E[min].sexo << endl <<
	"SUELDO:  " << E[max].sueldo << "    " << E[min].sueldo << endl;
	
	return 0;
}
