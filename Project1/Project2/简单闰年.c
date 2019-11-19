#include <stdio.h>
#include <stdlib.h>

int year(){
	int y;
	scanf_s("%d", &y);
	if (y % 400 == 0 ||
		y % 100 != 0 && y & 4 == 0) {
		printf("是闰年\n");
	}
	else {
		printf("不是闰年\n");
	}
		system("pause");
	return 0;
}