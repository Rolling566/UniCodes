#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    float v1, v2, res;
    char s;

    printf("Insira o valor 1: ");
    scanf("%f", &v1);

    printf("Insira um operador ex.(+, -, /, *): ");
    scanf("%s", &s);

    printf("Insira o valor 1: ");
    scanf("%f", &v2);


    switch (s){
    case '+':
        res = v1 + v2;
        break;
    case '-':
        res = v1 - v2;
        break;
       
    case '/':
        res = v1/v2;
        break;
    case '*':
        res = v1*v2;
        break;
    default:
        printf("operacao invalida");
        return 0;
        break;
    }

    printf("%.2f %c %.2f = %.2f", v1, s, v2, res);
    return 0;
}