#include <iostream>
#include <string>
using namespace std;

struct Persona {
	string DNI;
	int edad;
};

int main() {
	int n;
	Persona P[100];
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << "INGRESE EL DNI (" << i + 1 << "/" << n << "): "; cin >> P[i].DNI;
		cout << "INGRESE LA EDAD (" << i + 1 << "/" << n << "): "; cin >> P[i].edad;
	}
	
	// PERSONAS MAYORES DE 50
	
	int may_cinc = 0;
	
	for (int i = 0; i < n; i++) {
		if (P[i].edad > 50) {
			may_cinc++;
		}
	}
	
	// PROMEDIO DE TODAS LAS EDADES
	
	float sum_edad = 0;
	
	for (int i = 0; i < n; i++) {
		sum_edad += P[i].edad;
	}
	
	float prom_edad = sum_edad / n;
	
	// TODOS LOS REGISTROS
	
	cout << "LA CANTIDAD DE PERSONAS MAYORES DE 50 ES: " << may_cinc << endl;
	
	cout << "EL PROMEDIO DE TODAS LAS EDADES ES: " << prom_edad << endl;
	
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ") DNI: " << P[i].DNI << "    EDAD: " << P[i].edad << endl;
	}
	
	return 0;
}
