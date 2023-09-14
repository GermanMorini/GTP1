#include<iostream>
#include<string.h>
#define SIZE 5

using namespace std;

// typedef struct {
//         string name;
//         int ID;
// } Data;

void input(string names[], int codes[]) {
        for(short i = 0; i < SIZE; i++) {
                cout << "Ingrese el nombre del empleado " << i+1 << ": ";
                cin >> names[i];

                cout << "Ingrese el código de ese empleado: ";
                cin >> codes[i];
        }
}

// void input(Data d[]) {
//         for(short i = 0; i < SIZE; i++) {
//                 cout << "Ingrese el nombre del empleado " << i+1 << ": ";
//                 cin >> d->name;

//                 cout << "Ingrese el código de ese empleado: ";
//                 cin >> d->ID;
//         }
// }

string query(string names[], int codes[], int ID) {
        for(short i = 0; i < SIZE; i++) {
                if(codes[i] == ID) {
                        return names[i];
                }
        }

        return "No hay registro";
}

// int query(Data data[], int ID) {
//         for(short i = 0; i < SIZE; i++) {
//                 if(data[i].ID == ID) {
//                         cout << ID << " -> " << data[i].name << "\n";
//                         return 0;
//                 }
//         }

//         cout << "No hay registro para " << ID;
//         return 1;
// }

int main() {
        // Data data[SIZE];
        int ID, codes[SIZE];
        string names[SIZE];

        input(names, codes);
        // input(data);

        cout << "Ingrese el ID del empleado a consultar: ";
        cin >> ID;

        cout << query(names, codes, ID) << "\n";
        // query(data, ID);

        return 0;
}
