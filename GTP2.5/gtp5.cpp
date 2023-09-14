#include<iostream>

using namespace std;

void sort(string name[], int age[]) {
        int b = 1, tmp_a;
        string tmp_n;

        while(b) {
                b = 0;
        
                for(int i = 0; i < 4; i++) {
                        // .at(0) retorna el primer caracter, e (int) lo convierte a ASCII
                        if((int) name[i].at(0) > (int) name[i+1].at(0)) {
                                b = 1;

                                tmp_n = name[i];
                                name[i] = name[i+1];
                                name[i+1] = tmp_n;

                                tmp_a = age[i];
                                age[i] = age[i+1];
                                age[i+1] = tmp_a;
                        }
                }
        }
}

void print(string name[], int age[]) {
        for(int i = 0; i < 5; i++) {
                cout << name[i] << " de " << age[i] << " años\n";
        }
}

int main() {
        string name[] = {"Javier", "Eulalia", "Pancracio", "Horacio", "Susana"};
        int age[] = {5, 15, 9, 13, 8};

        sort(name, age);

        print(name, age);

        return 0;
}
