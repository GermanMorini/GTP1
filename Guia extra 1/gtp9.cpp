#include<iostream>

using namespace std;

int get_avg(int u[]) {
        int sum = 0;

        for(int d = 0; d < 7; d++) {
                sum += u[d];
        }

        return sum/7;
}

void check(int u[]) {
        int avg = get_avg(u);
        int c = 0;

        c += avg > 100;
        c += avg > 200;
        c += avg > 300;

        if(c == 0) {
                puts("La producción NO supera las 100 unidades!");
                exit(1);
        }

        cout << "La producción semanal supera las " << c*100 << " unidades!" << endl;
}

int main() {
        int units[7];

        for(int d = 0; d < 7; d++) {
                cout << "Ingrese la cantidad producida en el dia " << d+1 << ": ";
                cin >> units[d];
        }

        check(units);

        return 0;
}
