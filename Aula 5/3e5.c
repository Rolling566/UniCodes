#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	int nums[] = { 3, 5 };
	const char* res;

	printf("Insira um numero: ");
	scanf("%d", &num);

	if (num % nums[0] == 0) {
		res = "e divisivel por 3";
	}
	else if (num % nums[1] == 0) {
		res = "e divisivel por 5";
	}
	else {
		res = "nao e divisivel por 3 nem 5";
	}

	printf("%s", res);
	return 0;
}