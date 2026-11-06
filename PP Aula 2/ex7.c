#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float price, finalPrice;
    char carName[20];
    float imposto = 0.48;
    float revenda = 0.28;

    printf("Insira o nome do carro: ");
    fgets(carName, sizeof(carName), stdin);

    printf("Insira o preco de fabrica: ");
    scanf("%f", &price);

    finalPrice =  price + (price*imposto) + (price*revenda);

    printf("Voce ira pagar %.2f pelo %s", finalPrice, carName);
    return 0;
}