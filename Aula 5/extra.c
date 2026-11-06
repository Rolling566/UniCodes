#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int nota;
    const char* res = NULL;
    char *res2 = NULL;
    
    printf("Insira a sua nota: ");
    scanf("%d", &nota);

    if (nota < 8) {
        res2 = "Reprovado";    
    }
    else if(8 <= nota && nota < 9.5) {
        res2 = "Oral";
    }
    else if (9.5 <= nota && nota < 16) {
        res2  = "Aprovado";
    }
    else  {
        res = "Aprovado com distinção";
    }

    if (res2) {
         printf("%s\n", res2);
    }
    else {
        printf("%s\n", res);
    }

    return 0;
}