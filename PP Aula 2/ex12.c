#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int valorb;
    float resB;
    const char* unit;

    printf("Insira o tamanho em bytes: ");
    scanf("%d", &valorb);

    if (valorb < 1024){
        resB = valorb;
        unit = "bytes";
    }
    else if (valorb >= 1024 && valorb < pow(1024, 2)) {
        resB = valorb/1024;
        unit = "KB";
    }
    else if (valorb >= pow(1024, 2) && valorb < pow(1024, 3)) {
        resB = valorb/pow(1024, 2);
        unit = "MB";
    }
    else if (valorb >= pow(1024, 3) && valorb < pow(1024, 4)) {
        resB = valorb/pow(1024, 3);
        unit = "GB";
    }
    else {
        resB = valorb/pow(1024, 4);
        unit = "TB";
    }

    printf("tamanho: %.2f%s", resB, unit);
    return 0;
}