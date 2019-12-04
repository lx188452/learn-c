#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int Power(int n, int k) {
	if (k == 0) {
		return 1;
	}
	else {
		return (n * Power(n, k - 1));
	}
}

int main(){
	int n;
	int k;
	printf("请输入一个数和它的次方:\n");
	scanf("%d%d", &n, &k);
	printf("%d的%d次方为:\n%d\n", n, k, Power(n, k));
	system("pause");
	return 0;
}