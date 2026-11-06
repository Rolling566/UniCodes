#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int base, altura, area;

    printf("Insira o valor da base: ");
    scanf("%d", &base);

    printf("Insira o valor da altura: ");
    scanf("%d", &altura);

    area = (base*altura)/2;
    printf("Area do triangulo = %d", area);
    return 0;
}