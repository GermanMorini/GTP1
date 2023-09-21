#include<iostream>

using namespace std;

int input(int revenue[12][5], int montly_sales[], int branch_sales[]) {
        int total = 0;

        for(int j = 0; j < 5; j++) {
                cout << "\n------ SUCURSAL " << j+1 << "------\n";

                for(int i = 0; i < 12; i++) {
                        cout << "Mes " << i+1 << ": ";
                        cin >> revenue[i][j];

                        montly_sales[i] += revenue[i][j];
                        branch_sales[j] += revenue[i][j];
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
        int montly_sales[12] = {0,0,0,0,0,0,0,0,0,0,0,0}, branch_sales[5] = {0,0,0,0,0}, total;

        total = input(revenue, montly_sales, branch_sales);

        cout << "El total recaudado es: " << total << "\n";

        for(int i = 0; i < 12; i++) {
                cout << "El total recaudado en el mes " << i+1 << " es: " << montly_sales[i] << "\n";
        }

        for(int i = 0; i < 5; i++) {
                cout << "El total recaudado por la sucursal " << i+1 << " es: " << branch_sales[i] << "\n";
        }

        return 0;
}
