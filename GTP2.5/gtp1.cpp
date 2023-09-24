#include<iostream>
#include<string.h>

using namespace std;

void input(string names[], int codes[]) {
        for(short i = 0; i < 5; i++) {
                cout << "Ingrese el nombre del empleado " << i+1 << ": ";
                cin >> names[i];

                cout << "Ingrese el código de ese empleado: ";
                cin >> codes[i];
        }
}

string query(string names[], int codes[], int ID) {
        for(short i = 0; i < 5; i++) {
                if(codes[i] == ID) {
                        return names[i];
                }
        }

        return "No hay registro";
}

int main() {
        int ID, codes[5];
        string names[5];

        input(names, codes);

        cout << "Ingrese el ID del empleado a consultar: ";
        cin >> ID;

        cout << query(names, codes, ID) << "\n";

        return 0;
}
