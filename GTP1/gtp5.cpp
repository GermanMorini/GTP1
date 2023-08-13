#include<iostream>

using namespace std;

void get_Mname(char name1[], int age1, char name2[], int age2) {
        if (age1 >= age2) {
                cout << "El nombre de la madre es: " << name1 << endl;
        } else {
                cout << "El nombre de la madre es: " << name2 << endl;
        }
}

int main() {
        char name1[20], name2[20];
        int age1, age2;
        
        cout << "Ingrese los datos de la persona 1: ";
        cin >> name1;
        cin >> age1;
        
        cout << "Ingrese los datos de la persona 2: ";
        cin >> name2;
        cin >> age2;

        get_Mname(name1, age1, name2, age2);

	return 0;
}
