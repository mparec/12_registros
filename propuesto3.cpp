#include <iostream>
#include <string>
using namespace std;

struct Datos{
    string nombre;
    int d_nac;
    int m_nac;
    int a_nac;
};

int main(){
    int n;
    Datos D[50];

    cout << "INGRESE EL NUMERO DE PERSONAS: "; cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "INGRESE EL NOMBRE (" << i + 1 << "/" << n << "): "; cin >> D[i].nombre;
        cout << "INGRESE EL DIA DE NACIMIENTO (" << i + 1 << "/" << n << "): "; cin >> D[i].d_nac;
        cout << "INGRESE EL MES DE NACIMIENTO (" << i + 1 << "/" << n << "): "; cin >> D[i].m_nac;
        cout << "INGRESE EL ANIO DE NACIMIENTO (" << i + 1 << "/" << n << "): "; cin >> D[i].a_nac;
    }

    int user_input;

    cout << "INGRESE UN NUMERO DE MES (0 PARA CERRAR): "; cin >> user_input;

    while (user_input != 0) {
        for (int i = 0; i < n; i++) {
            if (D[i].m_nac == user_input) {
                cout << "1) NOMBRE: " << D[i].nombre << endl;
                cout << "1) DIA DE NACIMIENTO: " << D[i].d_nac << endl;
                cout << "1) MES DE NACIMIENTO: " << D[i].m_nac << endl;
                cout << "1) ANIO DE NACIMIENTO: " << D[i].a_nac << endl;
            }
        }

        cout << "INGRESE OTRO VALOR (0 PARA CERRAR): "; cin >> user_input;
    }

    return 0;
}