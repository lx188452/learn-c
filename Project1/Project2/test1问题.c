#include <stdio.h>
#include <stdlib.h>

int play2(){
	int a, b;
	
	scanf_s("%d%d", &a, &b);
	int c = a % b;
	while (c) {
		a = b;
		b = c;
		c = a % b;
	}
	printf("%d\n", b);
	
	system("pause");
	return 0;
}