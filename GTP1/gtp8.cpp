#include<iostream>
#include<cmath>

using namespace std;

// void reverse(int n) {
//         if(n > 0) {
//                 cout << n%10;
//                 reverse(n/10);
//         }
// }

int reverse(int n) {
        if(n > 0) {
                return n*10 + reverse(n/10);
        }
}


// void reverse(int n) {
//         while(n != 0) {
//                 cout << n%10;
//                 n = floor(n/10);
//         }
// }

// int reverse(int n) {
//         int rtn = 0;

//         while(n != 0) {
//                 rtn *= 10;
//                 rtn += n%10;
//                 n /= 10;
//         }

//         return rtn;
// }

int main() {
        int n;

        cout << "Ingrese un número entero positivo: " << endl;
        cin >> n;

        if (n < 0) {
                cout << "Se debe ingresar un número positivo!";
                return 1;
        }

        cout << reverse(n) << endl;

        return 0;
}
