#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<time.h>
#include<unistd.h>

using namespace std;

int get_random() {
        srand(time(NULL));

        return 1 + rand()%6;
}

int main(int argc, char *argv[]) {
        int d1, d2, sum;

        while(true) {
                cout << "Arrojando dados..." << endl;
                cout << "" << endl;
                sleep(1);

                d1 = get_random();
                d2 = get_random();
                sum = d1 + d2;

                cout << "Dado 1: " << d1 << endl << "Dado 2: " << d2 << endl << "Suma: " << sum << endl;
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
