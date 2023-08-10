#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

int sum(int n) {
        if(n != 0) {
                return n%10 + sum(floor(n/10));
        } else {
                return 0;
        }
}

int main(int argc, char *argv[]) {
        int n;

        cout << "Ingrese un número: ";
        cin >> n;

        cout << "La sumatoria es: " << sum(n) << endl;

        return 0;
}
