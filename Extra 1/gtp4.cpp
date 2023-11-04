#include<iostream>

using namespace std;

int get_score(int data[]) {
        return data[0]*3 + data[1];
}

int main() {
        int data[3];
        
        cout << "Ingrese la cantidad de partidos ganados, empatados y perdidos: ";
        cin >> data[0];
        cin >> data[1];
        cin >> data[2];

        cout << "El puntaje del equipo es: " << get_score(data) << endl;
        
        return 0;
}
