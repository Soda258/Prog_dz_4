#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    double a[10];
    double b[10];

    for(int i = 0; i < 10; i++){
        scanf("%lf",&a[i]);
    }
    int k = atoi(argv[1]);
    int j = k % 10;
    if(k > -1){
        for(int i = 0; i < 10; i++){
            if(j<10){b[i]=a[i];}
            else{b[i%10] = a[i];}
        j++;
        }
    }
    else{
        int l = 10 + j;
        for(int i = 0; i < 10; i++){
            if(l < 10){b[l] = a[i];}
            else{b[l%10]=a[i];}
        }
        l++;
    }
    for(int i = 0; i < 10; i++){printf("%.3f ", b[i]);}


    return 0;
}