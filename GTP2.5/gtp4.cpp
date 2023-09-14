#include<iostream>
#include<string.h>

using namespace std;

int count_vists(int visits[]) {
        int count = 0;

        for(int i = 0; i < 8; i++) {
                count += (visits[i] > 4);
        }

        return count;
}

void sort(string names[], int ages[]) {
        int b = 0, tmp_n;
        string tmp_s;

        while(b == 0) {
                b = 1;

                for(int i = 0; i < 7; i++) {
                        if(ages[i] > ages[i+1]) {
                                b = 0;

                                tmp_n = ages[i];
                                ages[i] = ages[i+1];
                                ages[i+1] = tmp_n;

                                tmp_s = names[i];
                                names[i] = names[i+1];
                                names[i+1] = tmp_s;
                        }
                }
        }
}

int main() {
        string names[8] = {"Martin", "Germán", "León", "Moisés", "Andréas", "John", "Pepe", "Alberto"};
        int ages[8] = {21, 22, 51, 18, 34, 12, 77, 56};
        int visits[8] = {1,2,3,5,6,5,1,6};

        cout << "La cantidad de pacientes con más de 4 visitas es: " << count_vists(visits) << "\n";

        sort(names, ages);

        cout << "Los pacientes mas longevos son: " << names[5] << ", " << names[6] << ", " << names[7];
        cout << "\nEl más joven: " << names[0] << "\n";
        
        return 0;
}
