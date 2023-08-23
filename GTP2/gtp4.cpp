#include<iostream>

using namespace std;

int main() {
        int n, def = 0, reg = 0, gd = 0, exc = 0;

        cout << "Ingrese la cantidad de alumnos: ";
        cin >> n;

        int grades[n];

        for(int i = 0; i < n; i++) {
                cout << "Ingrese la nota del alumno " << i+1 << ": ";
                cin >> grades[i];

                def += (grades[i] <= 3);
                reg += (grades[i] > 3 and grades[i] <= 5);
                gd += (grades[i] > 5 and grades[i] <= 8);
                exc += (grades[i] > 8);
        }

        cout << "\nDeficientes: " << def;
        cout << "\nRegulares: " << reg;
        cout << "\nBuenos: " << gd;
        cout << "\nExcelentes: " << exc << "\n";

        return 0;
}
