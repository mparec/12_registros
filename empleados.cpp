#include <iostream>
#include <string>
using namespace std;

struct Empleados {
	int numero;
	string nombre;
	int ventas[12];
	double salario;
};

int main() {
	Empleados E[50];
	int n;
	
	cout << "INGRESE UN NUMERO: "; cin >> n;

	for (int i = 0; i < n; i++) {
		cout << i + 1 <<") INGRESE EL NUMERO: "; cin >> E[i].numero;
		cout << "   INGRESE EL NOMBRE: "; cin >> E[i].nombre;
		for (int j = 0; j < 12; j++) {
			cout << "      INGRESE LAS VENTAS DEL MES "	<< j + 1 <<": "; cin >> E[i].ventas[j];
		}
		cout << "   INGRESE EL SALARIO: "; cin >> E[i].salario;
	}
	
	int SV[n] = {0};
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 12; j++) {
			SV[i] += E[i].ventas[j];
		}
	}
	
	int max = 0;
	
	for (int i = 1; i < n; i++) {
		if (SV[i] > SV[max]) {
			max = i;
		}
	}
	
	cout <<
	"DATOS DEL EMPLEADO CON MAS VENTAS:" << endl <<
	"  NUMERO: " << E[max].numero << endl <<
	"  NOMBRE: " << E[max].nombre << endl;
	
	for (int i = 0; i < n; i++) {
		if (SV[i] > 100) {
			E[i].salario *= 1.1;
			cout << "EMPLEADO N" << i + 1 << ": " <<E[i].salario << endl;
		}
	}
	
	return 0;
}


