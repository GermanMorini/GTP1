#include<iostream>

using namespace std;

float get_distance(float vel, float time) {
        return vel * time;
}

int main() {
        float vel ,time;

        cout << "Ingrese los valores para la velocidad y tiempo: ";
        cin >> vel;
        cin >> time;
        
        cout << "La distancia reccorida es: " << get_distance(vel, time) << endl;
        
        return 0;
}
