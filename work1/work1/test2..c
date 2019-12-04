#include <stdio.h>
#include <stdlib.h>

int IsPrime(int num){
	if (num == 1||num ==2) {
		return 1;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
		else {
			return 1;
		}
	}
	return 0;
}
int main() {
	scanf_s("%d", &IsPrime);
	int IsPrime = 0;
	if (IsPrime) {
		return 1;
		printf("ÊÇÖÊÊý");
		}
	
	system("pause");
	return 0;
}