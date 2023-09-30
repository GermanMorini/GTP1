#include<iostream>

using namespace std;

int input(int revenue[12][5]) {
        int total = 0;

        for(int j = 0; j < 5; j++) {
                cout << "\n------ SUCURSAL " << j+1 << "------\n";

                for(int i = 0; i < 12; i++) {
                        cout << "Mes " << i+1 << ": ";
                        cin >> revenue[i][j];

                        total += revenue[i][j];
                }
        }

        return total;
}

int main() {
        // int revenue[12][5] = {
        //         {589, 234, 743, 126, 395},
        //         {812, 497, 635, 241, 367},
        //         {458, 719, 152, 648, 321},
        //         {123, 976, 583, 314, 429},
        //         {786, 245, 931, 682, 147},
        //         {562, 398, 214, 739, 876},
        //         {259, 683, 417, 835, 126},
        //         {943, 276, 518, 364, 792},
        //         {645, 189, 527, 374, 812},
        //         {376, 981, 264, 437, 592},
        //         {158, 729, 846, 365, 491},
        //         {723, 618, 459, 871, 235}
        // };
        int revenue[12][5]; 
        int montly, branch, total;

        total = input(revenue);

        cout << "El total recaudado es: " << total << "\n";

        for(int i = 0; i < 12; i++) {
                montly = 0;

                for(int j = 0; j < 5; j++) {
                        montly += revenue[i][j];
                }

                cout << "El total recaudado en el mes " << i+1 << " es: " << montly << "\n";
        }
        
        for(int i = 0; i < 5; i++) {
                branch = 0;

                for(int j = 0; j < 12; j++) {
                        branch += revenue[j][i];
                }

                cout << "El total recaudado por la sucursal " << i+1 << " es: " << branch << "\n";
        }

        return 0;
}
