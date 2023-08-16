#include<iostream>
#include<cmath>

using namespace std;

// int get_lenght(int n) {
//         if (n != 0) {
//                 return 1+get_lenght(floor(n/10));
//         } else {
//                 return 0;
//         }
// }

int get_lenght(int n) {
        bool b = 1;

        while(b == 1) {
                
        }

        return 
}

int get_digit(int n, int d) {
        int tmp = floor(n/pow(10, d));
        return tmp%10;
}

bool isPal(int n) {
        int i = 1, l = get_lenght(n);
        int d1 = get_digit(n, 0), d2 = get_digit(n, l-1);
        bool b = 1;

        while(i < l-1) {
                b *= (d1 == d2);
                d1 = get_digit(n, i-1);
                d2 = get_digit(n, l-i);
                i++;
        }

        return b;
}

int main() {
        int n;

        cout << "Ingrese un número: ";
        cin >> n;

        if(isPal(n)) {
                cout << "El número es capicúa!\n";
        } else {
                cout << "El número NO es capicúa!\n";
        }

        return 0;
}
