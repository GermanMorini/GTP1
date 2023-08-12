#include<iostream>
#include<time.h>
#include<cmath>
#include<unistd.h>

using namespace std;

// Configura atributos a los métodos
// "constructor" indica que se debe ejecutar antes de iniciarse el programa
void set_seed() __attribute__((constructor));
void set_seed() { srand(time(NULL)); }

float get_random() {
        return (float)rand()/RAND_MAX;
}

int main() {
        int tmpMax = 80;
        float tmp;
                
        while(tmp <= 80) {
                tmp = get_random()*100;
                cout << "Temp: %.2f ºC\n" << tmp << endl;
                sleep(1);
        }

        cout << "ADVERTENCIA: temperatura límite superada (+" << tmp-80 << " Cº" << endl;

        return 1;
}
