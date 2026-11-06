#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() { 
    int ray, height;
    float volume;
    float pi  = 3.141592654;

    printf("Insira a altura: ");
    scanf("%d", &height);

    printf("Insira o raio: ");
    scanf("%d", &ray);

    volume = pi*(pow(ray, 2))*height;
    printf("Volume igual a %.4f", volume);
}