#include<iostream>

using namespace std;

// bool isTriangular(int n) {
//         int acum = 1;

//         for(int i=2; acum < n; i++) {
//                 acum += i;
//         }

//         return acum == n;
// }

bool isTriangular(int n) {
        int acum = 0, i = 1;

        while(acum < n) {
                acum += i;
                i++;
        }

        return acum == n;
}

int main() {
        int n;

        cout << "Ingrese el valor a calcular: ";
        cin >> n;

        if(isTriangular(n)) {
                cout << "El valor es triangular!" << endl;
        } else {
                cout << "El valor NO es triangular!" << endl;
        }

        return 0;
}
