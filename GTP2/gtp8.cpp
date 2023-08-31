#include<iostream>
#include<string.h>
#define COUNT 10

using namespace std;

int copy_name(string names[], string n[], int ages[]) {
        int k = 0;

        for(int j = 0; j < COUNT; j++) {
                if(ages[j] >= 18) {
                        names[k] = n[j];
                        k++;
                }
        }

        return k;
}

void print(string n[], int l) {
        cout << "\n\nLos alumnos de mayor edad son: \n";

        for(int i = 0; i < l-1; i++) {
                cout << n[i] << ", ";
        }

        cout << n[l-1] << "\n";
}

int main() {
        string name_tmp[COUNT], names[COUNT];
        int ages[COUNT], count;

        cout << "Ingrese el nombre y edad de los alumnos: \n\n";

        for(int i = 0; i < COUNT; i++) {
                cout << "Nombre del alumno " << i+1 << ": ";
                cin >> name_tmp[i];

                cout << "Ingrese la edad: ";
                cin >> ages[i];
        }
        
        count = copy_name(names, name_tmp, ages);

        print(names, count);

        return 0;
}
