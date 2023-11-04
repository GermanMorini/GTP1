#include<iostream>

using namespace std;

int c_count = 0, d_count = 0;

void parse(char t, int a, int n, int &c_age, int &d_age) {
        switch(t) {
                case 'c':
                        c_age += a;
                        c_count++;
                        break;
                case 'd':
                        d_age += a;
                        d_count++;
                        break;
                default:
                        exit(2);
        }
}

bool validate(int a, char t) {
        return a > 0 and (t == 'c' or t == 'd');
}

int main() {
        char t;
        int age, n;
        int c_age = 0, d_age = 0;

        cout << "Ingrese cuantos animales ha atendido: ";
        cin >> n;

        for(int i = 0; i < n; i++) {
                cout << "Ingese que animal es [c: Gato ; d: Perro]: ";
                cin >> t;

                cout << "Ingrese la edad: ";
                cin >> age;

                if(!validate(age, t)) { 
                        cout << "Vuelva a ingresar los datos\n";
                        i--;
                        continue;
                }

                parse(t, age, n, c_age, d_age);
        }

        cout << "El promedio de edad de los perros es: " << d_age/d_count << endl;
        cout << "El promedio de edad de los gatos es: " << c_age/c_count << endl;

        return 0;
}
