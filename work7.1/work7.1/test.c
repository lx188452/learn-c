#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int Fibo(int n){
	if (n <= 2) {
		return 1;
	}
	else {
		return(Fibo(n - 2) + Fibo(n - 1));
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("第%d个斐波那契数为:%d\n", n,Fibo(n));
	system("pause");	
	return 0;
}

int main(){
	int a = 1;
	int b = 1;
	int c = 1;
	int n;
	printf("请输入一个数: ");
	scanf("%d", &n);
	for (; n > 2; n--) {
		c = a + b;
		b = a;
		a = c;
	}
	printf("它的斐波那契数为:%d", c);
	system("pause");
	return 0;
}