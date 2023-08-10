#include<stdio.h>
#include<time.h>
#include<cmath>
#include<unistd.h>

using namespace std;

void set_seed() __attribute__((constructor));
void set_seed() { srand(time(NULL)); }

float get_random();

int main(int argc, char const *argv[]) {
        int tmpMax = 80;
        float tmp;
                
        while(tmp <= 80) {
                tmp = get_random()*100;
                printf("Temp: %.2f ºC\n", tmp);
                sleep(1);
        }

        printf("ADVERTENCIA: temperatura límite superada (+%.2f ºC)\n", tmp-80);
        return 1;
}

float get_random() {
        return (float)rand()/RAND_MAX;
}
