#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() { 
    char name[20];

    printf("Insira o seu nome: ");
    fgets(name, sizeof(name), stdin);

    printf("%s", name);
}