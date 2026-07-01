#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct Producto {
	string nombre;
	float precio;
	
};

struct Venta {
	int idVenta;
	string producto;
	int Cantidad;
	float precioTotal;
};

int main() {
	Producto P[20]; Venta V[20];
	
	while (true) {
		cout <<
		"============ MENU ============" << endl <<
		"A. Registrar un nuevo producto" << endl <<
		"B. Listar los productos registrados" << endl <<
		"C. Buscar un producto por nombre" << endl <<
		"D. Actualizar los datos de un producto" << endl <<
		"E. Eliminar un producto" << endl <<
		"F. Registrar una venta" << endl <<
		"G. Listar las ventas realizadas" << endl <<
		"H. Calcular el total de ventas realizadas" << endl <<
		"S. SALIR DEL PROGRAMA" << endl <<
		"==============================" << endl <<
		"PRESIONE UNA TECLA: " << endl;
		
		char opcion = _getch();
		
		switch (opcion) {
			case 'A':
				break;
			case 'B':
				break;
			case 'C':
				break;
			case 'D':
				break;
			case 'E':
				break;
			case 'F':
				break;
			case 'G':
				break;
			case 'H':
				break;
			case 'S':
				cout << "CERRANDO EL PROGRAMA...";
				return 0;
		}
	}
	
	return 0;
}