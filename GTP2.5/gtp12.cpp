#include<iostream>

using namespace std;

int total_income(int revenue[3][12], int line_rev[], int vehicle_rev[]) {
        int total = 0;

        for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 12; j++) {
                        line_rev[i] += revenue[i][j];
                        vehicle_rev[j] += revenue[i][j];
                        total += revenue[i][j];
                }
        }

        return total;
}

int get_best(int vect[]) {
        int rtn = 0;

        for(int i = 0; i < 12; i++) {
                rtn = i*(vect[rtn] < vect[i]) + rtn*(vect[rtn] >= vect[i]);
        }

        return rtn+1;
}

int main() {
        int revenue[3][12] = {
                {372,610,951,207,463,815,409,751,203,114,458,672},
                {149,230,815,208,469,673,750,204,957,304,867,591},
                {503,146,819,672,408,512,763,609,402,159,471,305}
        };
        int line_rev[3] = {0,0,0}, vehicle_rev[12] = {0,0,0,0,0,0,0,0,0,0,0,0}, total, best;

        total = total_income(revenue, line_rev, vehicle_rev);
        best = get_best(vehicle_rev);

        for(int i = 0; i < 3; i++) {
                cout << "Lo recaudado total por la línea " << i+1 <<" es: " << line_rev[i] << "\n";
        }
        
        for(int i = 0; i < 12; i++) {
                cout << "Lo recaudado total por el coche " << i+1 <<" es: " << vehicle_rev[i] << "\n";
        }

        cout << "El total recaudado es: " << total << "\n";
        cout << "El coche que más recaudó fué: " << best << "\n";

        return 0;
}
