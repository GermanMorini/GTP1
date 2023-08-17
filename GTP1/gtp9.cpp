#include<iostream>
#include<cmath>

using namespace std;

int reverse(int n) {
        int rtn = 0;

        while(n != 0) {
                rtn *= 10;
                rtn += n%10;
                n /= 10;
        }

        return rtn;
}

bool isPal(int n) {
        return n == reverse(n);
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
