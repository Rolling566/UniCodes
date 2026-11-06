#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float nota;
    const char* res;

    printf("Insira a sua nota: ");
    scanf("%f", &nota);

    
    if(nota < 0 || nota > 20) {
        res = "nota tem de ser de 0 a 20";
    }
    else if (nota >= 9.5) {
        res = "APROVOU";
    } 
    else{
        res = "REPROVOU";
    } 

    printf("%s", res);
    return 0;
}