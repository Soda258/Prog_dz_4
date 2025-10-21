#include <stdio.h>
#include <stdlib.h>

int main() {

    double a[10];
    double sum = 0;
    for(int i = 0; i < 10; i++){
        scanf("%lf", &a[i]);
    }
    for(int i = 0; i < 10; i++){
        sum += a[i];
    }

    printf("%.3f", sum/10);

    return 0;
}