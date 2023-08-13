#include<iostream>
#include<cmath>
#include<time.h>
#include<unistd.h>

using namespace std;

// "__attribute__ es parte del compilador GCC, no del lenguaje C/C++"
void set_seed() __attribute__((constructor));
void set_seed() { srand(time(NULL)); }

typedef struct {
        int d1;
        int d2;
} Dice;

void throw_dice(int &d) {
        d = 1 + rand()%6;
}

int main() {
        int sum;
        Dice dice;

        while(true) {
                cout << "Arrojando dados..." << endl;
                cout << "" << endl;
                sleep(1);

                throw_dice(dice.d1);
                throw_dice(dice.d2);
                sum = dice.d1 + dice.d2;

                cout << "Dado 1: " << dice.d1 << endl << "Dado 2: " << dice.d2 << endl << "Suma: " << sum;
                cout << "" << endl;

                if (sum == 7 or sum == 11) {
                        puts("\nGanaste!! :>");
                        return 0;
                } else if(sum == 2 or sum == 3 or sum == 12) {
                        puts("\nPerdiste :(");
                        return 0;
                }
                
                cout << "\n\nSe sigue el juego!\n------------------\n";
                sleep(1);
        }
}
