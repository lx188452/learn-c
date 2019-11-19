#include <stdio.h>
#include <stdlib.h>
int num;
int IsPrime(num){
	if (num == 1 || num == 2) {
		return 1;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(){
	int num;
	scanf_s("%d", &num);
	IsPrime(num);
	if (IsPrime(num) == 1) {
		printf("是素数");
	}
	else if(IsPrime(num) == 0) {
		printf("不是素数");
	}
		system("pause");
	return 0;
}