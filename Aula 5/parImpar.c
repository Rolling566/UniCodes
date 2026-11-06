#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int num;
    char *res;
    printf("Insira um numero: ");
    scanf("%d", num);

    if( num % 2 == 0){
        res = "par";
    }
    else {
        res = "impar";
    }

    printf("%d e %c",num, res);
    return 0;

}