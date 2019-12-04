#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	double sum = 0;
	double tmp = 1;
	int flag = 1;
	for (i = 1; i <= 100; i++) {
		tmp *= flag * 1.0 / i;
		flag *= -1;
		sum += tmp; 
	}
	printf("%f", sum);
	system("pause");
	return 0;
}