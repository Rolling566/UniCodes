#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char name[20];
    float horas, salB, salL, IRSd, INSSd;
    int dep;
    int eurH = 12;
    int eurD = 40;
    float inss = 0.085;
    float irs = 0.05;

    printf("Insira o seu nome e sobrenome: ");
    fgets(name, sizeof(name), stdin);

    printf("Insira as  horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Insira o numero de dependentes: ");
    scanf("%d", &dep);

    salB = (horas*eurH) + (dep*eurD);
    IRSd = salB*irs;
    INSSd = salB*inss;
    salL = salB - IRSd - INSSd;

    printf("\n salario bruto: %.2f\n salario liquido: %.2f\n Descontado no IRS: %.2f\n Descontado no INSS: %.2f\n", salB, salL, IRSd, INSSd);

    return 0;
} 