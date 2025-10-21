#include <stdio.h>
#include <stdlib.h>

int main() {

    double a[10];
    for(int i = 0; i < 10; i++){
        scanf("%lf", &a[i]);
    }
    for(int i = 10; i > 0; i--){
        printf("%.3f ",a[i-1]);
    }

    return 0;
}