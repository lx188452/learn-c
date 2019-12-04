#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int IsPrime(int num) {
	int i;
	if (num == 1 || num == 2) {
		return 1;
	}
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
		
	}
	return 1;
}




int main(){
	int num = 0;
	scanf("%d", &num);
	if (IsPrime(num) == 1) {
		printf("是素数\n");
	}
	else {
		printf("不是素数\n");
	}
	system("pause");
	return 0;
}