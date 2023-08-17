#include<iostream>
#include<cmath>
#include<time.h>
#include<unistd.h>
#define PLAYERS 2

using namespace std;

// "__attribute__" es parte del compilador GCC, no del lenguaje C/C++
void set_seed() __attribute__((constructor));
void set_seed() { srand(time(NULL)); }

typedef struct {
        char name[20];
        int d1, d2;
} Player;

void roll_dice(int &d) {
        d = 1 + rand()%6;
}

int init_game(Player pl[]) {
        int sum;
        cout << "Comenzó el juego!!\n\n";

        while(true) {
                for(int i = 0; i < PLAYERS; i++) {
                        cout << "Juega el jugador "<< pl[i].name <<"\nArrojando dados...\n\n" << endl;
                        sleep(1);

                        roll_dice(pl[i].d1);
                        roll_dice(pl[i].d2);
                        sum = pl[i].d1 + pl[i].d2;

                        cout << "Dado 1: " << pl[i].d1 << "\nDado 2: " << pl[i].d2 << "\nSuma: " << sum << endl;

                        if (sum == 7 or sum == 11) {
                                cout << "Ganó el jugador " << pl[i].name << endl;
                                return 0;
                        } else if(sum == 2 or sum == 3 or sum == 12) {
                                cout << "Perdió el jugador " << pl[i].name << endl;
                                return 0;
                        }

                        cout << "\n\nSe sigue el juego!\n------------------\n";
                        sleep(1);
                }
        }
}

void prompt_names(Player pl[]) {
        for(int i = 0; i < PLAYERS; i++) {
                cout << "Ingrese el nombre del jugador " << i+1 << ": ";
                cin >> pl[i].name;
        }
}

int main() {
        Player pl[PLAYERS];

        prompt_names(pl);
        init_game(pl);
}
