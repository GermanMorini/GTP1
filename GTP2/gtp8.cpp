#include<iostream>
#include<string.h>

using namespace std;

int main() {
        const int SIZE = 20;
        char name[SIZE], name_tmp[SIZE];
        int age = 0 , age_tmp;

        cout << "Ingrese el nombre y edad de los alumnos: \n\n";

        for(int i = 0; i < 10; i++) {
                cout << "Nombre del alumno " << i+1 << ": ";
                cin >> name_tmp;

                cout << "Ingrese la edad: ";
                cin >> age_tmp;

                age += age_tmp*(i == 0);

                if(age_tmp > age) {
                        cout << "ADENTRO";
                        strcpy(name, name_tmp);
                }
        }

        cout << "El alumno de mayor edad es: " << name << "\n";

        return 0;
}
