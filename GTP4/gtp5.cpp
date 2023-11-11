#include<iostream>
#include<fstream>

using namespace std;

//--------------------------------------------------------------------
#include<time.h>
#include<string.h>

// Bases de datos
string NOMBRES[100] = {"Forrest", "Mahmud", "Rosella", "Risa", "Katee", "Bonnibelle", "Germana", "Maximilian", "Booth", "Joly", "Luciana", "Adolph", "Freemon", "Siegfried", "Harper", "Nikolas", "Marris", "Torrance", "Viola", "Shandy", "Craggy", "Bethany", "Jewell", "Saxe", "Eldredge", "Elsa", "Gweneth", "Gerrie", "Bat", "Randall", "Trumaine", "Ed", "Stacie", "Roanna", "Rozalin", "Lexie", "Hebert", "Elinore", "Bear", "Mellisa", "Darcee", "Ari", "Carleen", "Van", "Fifine", "Minny", "Elmo", "Norina", "Adi", "Pepita", "Eloisa", "Josee", "Julita", "Gilbert", "Anatollo", "Harman", "Bill", "Waylan", "Brigham", "Kelila", "Auroora", "Mano", "Fayette", "Clo", "Rora", "Almeta", "Elwira", "Hugibert", "Jake", "Olimpia", "Pete", "Mikaela", "Ollie", "Phillipe", "Loralee", "Aggi", "Sandi", "Chelsy", "Laird", "Giselbert", "Clarissa", "Marylinda", "Leesa", "Perry", "Roxanna", "Fidelia", "Leticia", "Jenna", "Josefina", "Alli", "Robinette", "Janessa", "Adolphe", "Freddie", "Helene", "Culver", "Sylvia", "Ardith", "Rafaela", "Yetty"};
string EMPRESAS[100] = {"Eare", "Centidel", "Browsedrive", "Agimba", "Browsetype", "Buzzdog", "Eazzy", "Babbleopia", "Brainsphere", "Feedmix", "Brightdog", "Abatz", "Eamia", "Buzzster", "Avamba", "Feedfire", "Aivee", "Feedspan", "Feedfish", "Devify", "Browsebug", "Blogtag", "Demivee", "Brainlounge", "Feednation", "Eimbee", "Divanoodle", "Bluezoom", "Buzzbean", "Dablist", "Brightbean", "Dynabox", "Fivespan", "Bluejam", "Fanoodle", "Blognation", "Browsezoom", "Bubbletube", "Cogidoo", "Dabtype", "BlogXS", "Cogilith", "Camimbo", "Dynazzy", "Divavu", "Centizu", "Aimbo", "Fatz", "Dynava", "Centimia", "Einti", "Edgeblab", "Demizz", "Buzzshare", "Eidel", "Ainyx", "Babbleblab", "Dabjam", "Eadel", "Blogtags", "Devpoint", "Devshare", "Ailane", "Browsecat", "Edgeclub", "Cogibox", "Eabox", "Fivebridge", "Chatterbridge", "Avavee", "Camido", "Aibox", "Avamm", "Brainverse", "Edgepulse", "Babbleset", "Devbug", "Dabfeed", "Dabvine", "Aimbu", "DabZ", "Flashdog", "Abata", "Browseblab", "Flashpoint", "Edgetag", "Eire", "Avaveo", "Fivechat", "Brainbox", "Divape", "Eayo", "Edgeify", "Fiveclub", "Feedbug", "Devpulse", "Chatterpoint", "Digitube", "Devcast", "Blogspan"};

// Elige un valor random de las bases de datos, pero puede ser cualquier otro arreglo
void aleatorio(char nombre[], string base_de_datos[]) {
        int random_index = rand()%100;
        strcpy(nombre, base_de_datos[random_index].c_str());
}

//--------------------------------------------------------------------

struct Empleado {
        char nombre[20], legajo[20];
        int sueldo;
};

void guardar_nombres(Empleado emp[], int N) {
        ofstream file;

        file.open("salida5_1.txt");

        for (int i = 0; i < N; i++) {
                if(emp[i].sueldo > 500000) file << emp[i].nombre << endl;
        }

        file.close();
}

void ordenar(Empleado emp[], int N) {
        Empleado aux;
        bool b = 0;

        while (not b) {
                b = 1;

                for (int i = 0; i < N-1; i++) {
                        if (emp[i].sueldo < emp[i+1].sueldo) {
                                b = 0;

                                aux = emp[i];
                                emp[i] = emp[i+1];
                                emp[i+1] = aux;
                        }
                }
                
        }
}

void lista(Empleado emp[], int N) {
        ofstream file;

        file.open("salida5_2.txt");

        for (int i = 0; i < N; i++) {
                file << "------ EMPLEADO" << i+1 << " ------" << endl;
                file << "   Nombre: " << emp[i].nombre << endl;
                file << "   Sueldo: " << emp[i].sueldo << endl;
                file << "   Legajo: " << emp[i].legajo << endl;
                file << endl;
        }

        file.close();
}

int main() {
        srand(time(NULL));
        Empleado emp[100];
        int N;

        cout << "Ingrese la cantidad de empleados: ";
        cin >> N;

        for (int i = 0; i < N; i++) {
                cout << endl << "--- EMPLEADO" << i+1 << " ---" << endl;

                // cin.ignore();
                // cout << "Nombre: ";
                // cin.getline(emp[i].nombre, 20, '\n');
                aleatorio(emp[i].nombre, NOMBRES);

                // cin.ignore();
                // cout << "Legajo: ";
                // cin.getline(emp[i].legajo, 20, '\n');
                aleatorio(emp[i].legajo, EMPRESAS);

                // cout << "Sueldo: ";
                // cin >> emp[i].sueldo;
                emp[i].sueldo = 300000 + rand()%500000;
        }

        guardar_nombres(emp, N);

        ordenar(emp, N);

        lista(emp, N);
        
        return 0;
}
