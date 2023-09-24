#include<iostream>
#include<string.h>

using namespace std;

void parse(string names[], string data[], int ages[]) {
        int indx = 0;

        for(short i = 0; i < 6; i++) {
                if(ages[i] == 18 or ages[i] == 20 or ages[i] == 22) {
                        data[indx] = names[i];
                        indx++;
                }
        }
}

void input(string names[], int ages[]) {
        for(short i = 0; i < 6; i++) {
                cout << "Ingrese el nombre de la persona " << i+1 << ": ";
                cin >> names[i];

                cout << "Ingrese su edad: ";
                cin >> ages[i];
        }
}

void print(string data[]) {
        cout << "Las personas que tienen 18, 20 o 22 años son:\n";

        for(short i = 0; i < 6; i++) {
                cout << data[i] << "\n";
        }
}

int main() {
        string names[6] = {"Juan","Laura","Emilia","Julian","Paola","Lorenzo"}, data[6];
        int ages[6] = {20,15,26,22,18,23};
        //string names[6], data[6];
        //int ages[6];

        //input(names, ages);
        
        parse(names, data, ages);

        print(data);

        return 0;
}