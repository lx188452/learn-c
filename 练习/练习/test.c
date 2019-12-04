#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, num;
	scanf_s("%d", &num);
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("不是素数");
			break;
		}	
	}
	if (i == num){
		printf("是素数");
	}
	system("pause");
	return 0;
}