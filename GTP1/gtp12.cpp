#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<time.h>
#include<unistd.h>

using namespace std;

void set_seed() __attribute__((constructor));
void set_seed() { srand(time(NULL)); }

typedef struct {
        int d1;
        int d2;
} Dices;

int get_random() {
        return 1 + rand()%6;
}

int main() {
        int sum;
        Dices dices;

        while(true) {
                cout << "Arrojando dados..." << endl;
                cout << "" << endl;
                sleep(1);

                dices.d1 = get_random();
                dices.d2 = get_random();
                sum = dices.d1 + dices.d2;

                cout << "Dado 1: " << dices.d1 << endl << "Dado 2: " << dices.d2 << endl << "Suma: " << sum << endl;
                cout << "" << endl;

                if (sum == 7 or sum == 11) {
                        cout << "Ganaste!! :>" << endl;
                        exit(0);
                } else if(sum == 2 or sum == 3 or sum == 12) {
                        cout << "Perdiste :(" << endl;
                        exit(0);
                }
                
                cout << "Se sigue el juego!" << endl;
                sleep(1);
        }
}
