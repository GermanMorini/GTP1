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

int main(int argc, char const *argv[]) {
        float data[3];

        if (argc >= 4) {
                data[0] = atof(argv[1]);
                data[1] = atof(argv[2]);
                data[2] = atof(argv[3]);
        } else {
                cout << "Ingrese los lados del triángulo: " << endl;
                cin >> data[0];
                cin >> data[1];
                cin >> data[2];
        }

        cout << "El area del triángulo es: " << get_area(data) << endl;

        return 0;
}
