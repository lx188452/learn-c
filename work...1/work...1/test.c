#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 11, 22, 33, 44, 55 };
	int i, tmp;
	for (i = 0; i < 5; i++) {
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	putchar('\n');
	for (i = 0; i < 5; i++) {
		printf("%d ", b[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}