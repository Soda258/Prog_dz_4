#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    double mA[10][3];
    double mB[3][10];
    double result[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {scanf("%lf", &mA[i][j]);}
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {scanf("%lf", &mB[i][j]);}
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {result[i][j] += mA[i][k] * mB[k][j];}
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%lf", result[i][j]);
            if (i != 10 - 1 || j != 10 - 1) {printf(" ");}
        }
    }

    return 0;
}