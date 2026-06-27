#include <iostream>
#include <string>
using namespace std;

struct atleta {
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main(){
    int n;
    atleta A[50];

    cout << "INGRESE LA CANTIDAD DE ATLETAS: "; cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "INGRESE EL NOMBRE DEL ATLETA (" << i + 1 << "/" << n << "): "; cin >> A[i].nombre;
        cout << "INGRESE EL PAIS DEL ATLETA (" << i + 1 << "/" << n << "): "; cin >> A[i].pais;
        cout << "INGRESE LA DISCIPLINA DEL ATLETA (" << i + 1 << "/" << n << "): "; cin >> A[i].disciplina;
        cout << "INGRESE EL NUMERO DE MEDALLAS DEL ATLETA (" << i + 1 << "/" << n << "): "; cin >> A[i].medallas;
    }

    string pais_input;
    bool dato_encontrado = false;

    cout << "INGRESE UN PAIS: "; cin >> pais_input;

    for (int i = 0; i < n; i++) {
        if (A[i].pais == pais_input) {
            dato_encontrado = true;
            cout << "================================" << endl;
            cout << i + 1 <<") NOMBRE: " << A[i].nombre << endl;
            cout << "   DISCIPLINAS: " << A[i].disciplina << endl;
            cout << "   MEDALLAS: " << A[i].medallas << endl;
        }
    }
    if (dato_encontrado == false) {
        cout << "NO HAY ATLETAS DE " << pais_input;
    }

    return 0;
}