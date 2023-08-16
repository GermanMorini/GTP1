#include<iostream>
#include<cmath>

using namespace std;

// void reverse(int n) {
//         if(n > 0) {
//                 cout << n%10;
//                 reverse(floor(n/10));
//         }
// }

void reverse(int n) {
        int d = n;

        while(d != 0) {
                cout << d%10;
                d = floor(d/10);
        }
}

int main() {
        int n;

        cout << "Ingrese un número entero positivo: " << endl;
        cin >> n;

        if (n < 0) {
                cout << "Se debe ingresar un número positivo!";
                return 1;
        }

        reverse(n);

        return 0;
}
