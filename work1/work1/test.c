#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b;
	for (a = 100; a < 200; a++){
		for (b = 2; b <= a - 1; b++){
			if (a%b == 0)
				break;
		}
		if (a == b)
			printf("%d\n", a);
	}
	printf("\n");
	system("pause");
		return 0;
}