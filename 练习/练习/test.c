#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, num;
	scanf_s("%d", &num);
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("��������");
			break;
		}	
	}
	if (i == num){
		printf("������");
	}
	system("pause");
	return 0;
}