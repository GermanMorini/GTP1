#include<stdio.h>
#include<stdlib.h>

using namespace std;

int sum(int a, int b) {
        return a+b;
}

int main(int argc, char *argv[]) {
        if (argc >= 3) {
                printf("%d + %d = %d\n", atoi(argv[1]), atoi(argv[2]), sum(atoi(argv[1]), atoi(argv[2])));
        } else {
                int a, b;

                puts("Ingrese dos valores a y b: ");
                scanf("%d %d", &a, &b);

                printf("%d + %d = %d\n", a, b, sum(a, b));
        }
        
        return 0;
}

