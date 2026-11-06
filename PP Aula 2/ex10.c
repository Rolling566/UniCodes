#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float nota1, nota2, media;
    const char* res;

    printf("Insira a nota da 1 frequencia: ");   
    scanf("%f", &nota1);

    printf("Insira a nota da 2 frequencia: ");
    scanf("%f", &nota2);

    media = nota1 * 0.4f + nota2 * 0.6f;

    if (media >= 9.5f && nota1 >= 8.5f && nota2 >= 8.5f) {
        res = "APROVADO";
    }
    else {
        res = "REPROVADO";
    }

    printf("Media: %.1f\n Resultado: %s\n", media, res);
    return 0;
}