#include<iostream>

using namespace std;

int sum(int n[], int l) {
        int s = 0;

        for(int i = 0; i < l; i++) {
                s += n[i];
        }

        return s;
}

void fill_even(int n[], int l) {
        for(int i = 1; i <= l; i++) {
                n[i-1] = 2 * i;
        }
}

int main() {
        int ns[20];

        fill_even(ns, 20);

        cout << "La sumatoria es: " << sum(ns, 20) << "\n";

        return 0;
}
