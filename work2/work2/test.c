#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Mul(int n){
	int a = 0;
	int b = 0;

	for (a = 1; a <= n; a++){
		for (b = 1; b <= a; b++){
			printf("%d*%d=%-2d ", a, b, a*b);
		}
		printf("\n");
	}
}

int main(){
	int n = 0;
	scanf("%d", &n);
	Mul(n);
	system("pause");
	return 0;
}
