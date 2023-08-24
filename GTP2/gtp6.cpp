#include<iostream>
#define SIZE 5

using namespace std;

float avg(int n[], int l) {
        if(l > 0) {
                return n[l-1]*1.0/SIZE + avg(n, l-1);
        } else {
                return 0;
        }
}

void prompt_vals(int ns[]) {
        for(short i = 0; i < SIZE; i++) {
                cout << "Ingrese un valor (" << SIZE - i << " restantes): ";
                cin >> ns[i];
        }
}

int main() {
        int ns[SIZE];

        prompt_vals(ns);
        
        cout << "La media aritmética es: " << avg(ns, SIZE) << "\n";

        return 0;
}
