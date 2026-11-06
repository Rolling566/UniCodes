#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int lado, areaQuad;

	printf("Insira o Lado do quadrado: ");
	scanf("%d", &lado);

	areaQuad = lado * lado;
	printf("Area do quadrado = %d", areaQuad);

	return 0;
}