#define _CRT_SECUrE_NO_WARNINGS
#include <stdio.h>

int horasF, min, horasN;
int convt(int n) {

    if (n == 0) {
        return 12;
    }
    else if (n > 12) {
        return n - 12;
    }

    return n;
}

const char* txt(int n) {

    if (n >= 12) {
        return "PM";
    }

    return "AM";
}

int main() {

    printf("Insira as horas: ");
    scanf("%d", &horasN);

    printf("Insira os minutos: ");
    scanf("%d", &min);

    int res = convt(horasN);
    const char* txts = txt(horasN);

    if (min < 10) {
        printf("São: %dh:0%d %s", res, min, txts);
    }
    else {
        printf("São: %dh:%d %s", res, min, txts);
    }

    return 0;
}
