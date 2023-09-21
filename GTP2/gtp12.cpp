#include<iostream>

using namespace std;

void input(int n[]) {
        for(short i = 0; i < 4; i++) {
                cout << "Ingrese el valor " << i+1 << ": ";
                cin >> n[i];
        }
}

void print(int n[]) {
        cout << "[ ";
        for(short i = 0; i < 4; i++) {
                cout << n[i] << " ";
        }
        cout << "]";
}

// void bubbl_sort(int n[]) {
//         int tmp;

//         for(short i = 0; i < 4; i++) {
//                 for(short j = 0; j < 3; j++) {
//                         if(n[j] > n[i+1]) {
//                                 tmp = n[j];
//                                 n[j] = n[i+1];
//                                 n[j] = tmp;
//                         }
//                 }
//         }
// }

void bubbl_sort(int n[]) {
        int tmp, b = 0, j;

        while(b == 0) {
                b = 1;

                for(j = 0; j < 3; j++) {
                        if(n[j] > n[j+1]) {
                                tmp = n[j];
                                n[j] = n[j+1];
                                n[j+1] = tmp;
                                b = 0;
                        }
                }
        }
}

int main() {
        int n[] = {4,2,3,1};

        // input(n);

        bubbl_sort(n);

        print(n);

        return 0;
}
