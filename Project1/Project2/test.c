#include <stdio.h>
#include <stdlib.h>

int ak47(){
	int a = 5, b = 6;
	printf("a = %d, b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}


int paly1(){
	int a, b;
	int max = 1;
	scanf_s("%d%d", &a, &b);
	int smaller = a < b ? a : b;
	int i;
	for (i = 2; i <= smaller; i++) {
		if (a % i == 0 && b % i == 0) {
			max = i;
		} 
	}
	printf("%d\n", max);
	printf("%d\n", (a*b) / max);
	system("pause");
	return 0;
}