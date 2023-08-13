#include<iostream>

using namespace std;

float avg(int age[]) {
        float avg = 0;
        int len = sizeof(age)/sizeof(age[0]);

        for(int i = 0; i < len; i++) {
                avg += age[i]/len;
        }

        return avg;
}

int main() {
        int l = 90;

        int age[l];

        for(int i = 0; i < 10; i++) {
                cout << "Ingrese la edad de la persona " << i+1 << ": ";
                cin >> age[i];
        }

        cout << "El promedio de edades es: " << avg(age) << endl;

        return 0;
}
