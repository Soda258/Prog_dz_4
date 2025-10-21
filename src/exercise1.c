#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    double sum = 0;
    for(int i=1;i<=10;i++){sum += atoi(argv[i]);}
    printf("%.2f",sum/10);

    return 0;
}