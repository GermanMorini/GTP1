#include<iostream>

using namespace std;

// char sign(int n) {
//         if(n > 0) {
//                 return 'P';
//         } else if (n == 0) {
//                 return 'C';
//         } else {
//                 return 'N';
//         }
// }

char sign(int n) {
        int c = 0;

        c += 78*(n < 0);
        c += 67*(n == 0);
        c += 80*(n > 0);

        return (char) c;
}

int main() {
        int n;

        cout << "Ingrese el valor a evaluar: ";
        cin >> n;

        cout << "El valor es: " << sign(n) << endl;

        return 0;
}
