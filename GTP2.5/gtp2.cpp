#include<iostream>
#include<string.h>
#define SIZE 2

using namespace std;

void parse(string names[], string data[], int ages[]) {
        int indx = 0;

        for(short i = 0; i < SIZE; i++) {
                if(ages[i] == 18 or ages[i] == 20 or ages[i] == 22) {
                        data[indx] = names[i];
                        indx++;
                }
        }
}

void input(string names[], int ages[]) {
        for(short i = 0; i < SIZE; i++) {
                cout << "Ingrese el nombre de la persona " << i+1 << ": ";
                cin >> names[i];

                cout << "Ingrese su edad: ";
                cin >> ages[i];
        }
}

void print(string data[]) {
        cout << "Las personas bla bla...\n";

        for(short i = 0; i < SIZE; i++) {
                cout << data[i] << "\n";
        }
}

int main() {
        string names[SIZE], data[SIZE];
        int ages[SIZE];

        input(names, data, ages);
        
        print(data);

        return 0;
}