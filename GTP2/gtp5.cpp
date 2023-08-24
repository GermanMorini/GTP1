#include<iostream>

using namespace std;

// int sum(int n[], int l) {
//         int s = 0;

//         for(int i = 0; i < l; i++) {
//                 s += n[i];
//         }

//         return s;
// }

int sum(int n[], int l) {
        if(l > 0) {
                return n[l-1] + sum(n, l-1);
        } else {
                return 0;
        }
}

// void fill_even(int n[], int l) {
//         for(int i = 1; i <= l; i++) {
//                 n[i-1] = 2 * i;
//         }
// }

void fill_even(int n[], int l) {
        if(l > 0) {
                n[l-1] = 2 * l;
                fill_even(n, l-1);
        }
}

int main() {
        const short SIZE = 20;
        int ns[SIZE];

        fill_even(ns, SIZE);

        cout << "La sumatoria es: " << sum(ns, SIZE) << "\n";

        return 0;
}
