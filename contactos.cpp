#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct Contactos {
    string nom_com;
    char sexo;
    int edad;
    string email;
};

string encontrar_servidor(string mail) {
    string servidor = "";
    for (int i = 0; i < mail.length(); i++) {
        if (mail[i - 1] == '@') {
            for (int j = i; j < mail.length(); j++) {
                servidor += mail[j];
            }
        break;
        }   
    }
    return servidor;
}

int main() {
    Contactos CE[20];
    int act_con = 0; // INDICE DEL CONTACTO MAS RECIENTE
    int mod_con; // INDICE DEL CONTACTO A MODIFICAR
    string servidor; // Servidores de correo electronico

    while (true) {
        cout <<
        "================== MENU ==================" << endl <<
        "1) AGREGAR CONTACTO" << endl <<
        "2) MODIFICAR CONTACTO" << endl <<
        "3) MOSTRAR LISTA DE CONTACTOS" << endl <<
        "4) MOSTRAR LISTA DE CONTACTOS POR SERVIDOR (WIP)" << endl <<
        "5) ELIMINAR CONTACTO (WIP)" << endl <<
        "6) BUSCAR CONTACTO POR EMAIL (WIP)" << endl <<
        "0) SALIR DEL PROGRAMA" << endl <<
        "==========================================" << endl <<
        "PRESIONE UNA TECLA DEL 0 AL 6" << endl;

        char opcion = _getch();
        
        switch (opcion) {
            case '1':
                if (act_con < 20) {
                    cout << act_con + 1 <<") INGRESE EL NOMBRE COMPLETO (USE EL GUION BAJO COMO ESPACIO): "; cin >> CE[act_con].nom_com;
                    cout << "   INGRESE EL SEXO M/F: "; cin >> CE[act_con].sexo;
                    cout << "   INGRESE LA EDAD: "; cin >> CE[act_con].edad;
                    cout << "   INGRESE EL EMAIL: "; cin >> CE[act_con].email;

                    for (int i = 0; i < CE[act_con].nom_com.length(); i++) { // Cambiar el guion bajo (_) por espacio ( )
                        if (CE[act_con].nom_com[i] == '_') {
                            CE[act_con].nom_com[i] = ' ';
                        }
                    }
                    act_con++;
                    cout << "CONTACTO AGREGADO EXITOSAMENTE" << endl << endl;
                } else {
                    cout << "!!! LIMITE ALCANZADO. PRUEBA ELIMINAR UN CONTACTO..." << endl << endl;
                }
                break;
            case '2':
                if (act_con != 0) {
                    cout << "INGRESE EL NUMERO DE ORDEN DEL CONTACTO: "; cin >> mod_con;
                    if (mod_con > 0 && mod_con <= act_con) {
                        cout <<
                        "==========================================" << endl <<
                        mod_con << ") NOMBRE COMPLETO: " << CE[mod_con - 1].nom_com << endl <<
                        "   SEXO: " << CE[mod_con - 1].sexo << endl <<
                        "   EDAD: " << CE[mod_con - 1].edad << endl <<
                        "   EMAIL: " << CE[mod_con - 1].email << endl <<
                        "==========================================" << endl;
                        cout << mod_con <<") INGRESE EL NOMBRE COMPLETO (USE EL GUION BAJO COMO ESPACIO): "; cin >> CE[mod_con - 1].nom_com;
                        cout << "   INGRESE EL SEXO M/F: "; cin >> CE[mod_con - 1].sexo;
                        cout << "   INGRESE LA EDAD: "; cin >> CE[mod_con - 1].edad;
                        cout << "   INGRESE EL EMAIL: "; cin >> CE[mod_con - 1].email;

                        for (int i = 0; i < CE[mod_con - 1].nom_com.length(); i++) {
                            if (CE[mod_con - 1].nom_com[i] == '_') {
                                CE[mod_con - 1].nom_com[i] = ' ';
                            }
                        }
                        cout << "CONTACTO MODIFICADO EXITOSAMENTE" << endl << endl;
                    }
                } else {
                    cout << "!!! NO HAY CONTACTOS PARA MODIFCAR..." << endl << endl;
                }
                break;
            case '3':
                if (act_con != 0) {
                    for (int i = 0; i < act_con; i++) {
                        cout <<
                        "==========================================" << endl <<
                        i + 1 << ") NOMBRE COMPLETO: " << CE[i].nom_com << endl <<
                        "   SEXO: " << CE[i].sexo << endl <<
                        "   EDAD: " << CE[i].edad << endl <<
                        "   EMAIL: " << CE[i].email << endl;
                    }
                } else {
                    cout << "!!! NO HAY CONTACTOS POR MOSTRAR..." << endl << endl;
                }
                break;
            case '4':
                // ENLISTAR CONTACTOS POR SERVIDOR DE CE
                break;
            case '0':
                cout << "CERRANDO EL PROGRAMA..." << endl;
                return 0;
            default:
                cout << "!!! ESTA OPCION NO EXISTE" << endl << endl;
                break;
        }
    }

    return 0;
}