#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int tempUtil; 
    int price[] = {2, 1, 30}; // em cents
    const char* res;
    //1 uma hora, 2 - 2h a 6h, 3 - 7h a 24h

    printf("Insira o tempo utilizado em horas: ");
    scanf("%d", tempUtil);

    
    if(tempUtil <= 1) {
        res = "tera de pagar %d", (2*60)/100;

    }
}

