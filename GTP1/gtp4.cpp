#include<iostream>

using namespace std;

// int fact(int n) {
//         if(n > 1) {
//                 return n*fact(n-1);
//         } else {
//                 return 1;
//         }
// }

int fact(int n) {
        int rtn = 1;

        for(int i = n; i > 0; i--) {
                rtn *= i;
        }

        return rtn;
}

int main() {
        int n;

        cout << "Ingrese el valor a calcular: ";
        cin >> n;

        cout << "El factorial es: " << fact(n) << endl;

	return 0;
}
