#include<iostream>

using namespace std;

int get_last_d(int n) {
        return n%10;
}

int main() {
        int n, d1, d2, d3, d4;

        cout << "Ingrese un número entre 0 y 10000: ";
        cin >> n;

        d4 = get_last_d(n);
        d3 = get_last_d(n/10);
        d2 = get_last_d(n/100);
        d1 = get_last_d(n/1000);

        cout << "d1: " << d1 << ", d2: " << d2 << ", d3: " << d3 << ", d4: " << d4 << endl;

        return 0;
}