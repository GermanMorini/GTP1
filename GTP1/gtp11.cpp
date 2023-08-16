#include<iostream>
#include<cmath>

using namespace std;

// bool isHE(int n) {
//         if(n != 0) {
//                 return (n%10)%2 == 0 and isHE(floor(n/10));
//         } else {
//                 return true;
//         }
// }

bool isHE(int n) {
        int d = n;
        bool b = 1;

        while(d != 0) {
                b *= ((d%10)%2 == 0);
                d = floor(d/10);
        }

        return b;
}

int main() {
        int n;

        cout << "Ingrese un número: ";
        cin >> n;

        if(isHE(n)) {
                cout << "El número es hyper-par" << endl;
        } else {
                cout << "El número NO es hyper-par" << endl;
        }

        return 0;
}
