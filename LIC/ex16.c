#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int inv, dig = 3;
    int numC[3] = {1,2,3};
    srand(time(NULL));
    
    for (int i = 0; i < dig; i++) {

        int num =  rand() % 10;
        numC[i] = num;
    }
    for (int i = 0; i < dig; i++){
        printf("%d", numC[i]); 
    } 
}