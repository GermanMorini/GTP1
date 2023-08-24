#include<iostream>

using namespace std;

bool validate(int n) {
        return n >= 0 and n <= 10;
}

bool isDefficent(int n) { return n >= 0 and n <= 3; }
bool isRegular(int n) { return n > 3 and n <= 5; }
bool isGood(int n) { return n > 5 and n <= 8; }
bool isExcelent(int n) { return n > 8 and n <= 10; }

int main() {
        int n, def = 0, reg = 0, gd = 0, exc = 0;

        cout << "Ingrese la cantidad de alumnos: ";
        cin >> n;

        int grades[n];

        for(int i = 0; i < n; i++) {
                cout << "Ingrese la nota del alumno " << i+1 << ": ";
                cin >> grades[i];

                // if(not validate(grades[i])) {
                //         cout << "\nLa nota debe ser un valor entre 0 y 10!\n\n";
                //         i--;
                //         continue;
                // }

                i -= (not validate(grades[i]));

                def += isDefficent(grades[i]);
                reg += isRegular(grades[i]);
                gd += isGood(grades[i]);
                exc += isExcelent(grades[i]);
        }

        cout << "\nDeficientes: " << def;
        cout << "\nRegulares: " << reg;
        cout << "\nBuenos: " << gd;
        cout << "\nExcelentes: " << exc << "\n";

        return 0;
}
