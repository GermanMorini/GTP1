#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

int get_lenght(int n) {
        if (n != 0) {
                return 1+get_lenght(floor(n/10));
        } else {
                return 0;
        }
}

bool isPal(int n) {
        return true;
}

int main(int argc, char *argv[]) {

        
        return 0;
}
