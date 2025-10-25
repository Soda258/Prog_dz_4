#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    double a[10];
    double b[10];

    int x = atoi(argv[1]);
    int k = atoi(argv[2]);

    for (int i = 0; i < 10; i++) {scanf("%lf", &a[i]);}

    for (int i = 0; i < 10; i++) {
        if (i < k) {b[i] = a[i];}
        else if (i == k) {b[i] = x;}
        else {b[i] = a[i - 1];}
    }

    for (int i = 0; i < 10; i++) {
        if (i == 10 - 1) {printf("%.3f", b[i]);}
        else {printf("%.3f ", b[i]);}
    }

    return 0;
}