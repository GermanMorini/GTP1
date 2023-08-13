#include<iostream>
#include<math.h>

using namespace std;

float get_s_per(float side[]) {
        return (side[0] + side[1] + side[2]) / 2;
}

float get_area(float side[]) {
        float S = get_s_per(side);
        return sqrt(S*(S-side[0])*(S-side[1])*(S-side[2]));
}

int main() {
        float data[3];

        cout << "Ingrese los lados del triángulo: " << endl;
        cin >> data[0];
        cin >> data[1];
        cin >> data[2];

        cout << "El area del triángulo es: " << get_area(data) << endl;

        return 0;
}
