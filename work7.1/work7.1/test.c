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
	printf("��%d��쳲�������Ϊ:%d\n", n,Fibo(n));
	system("pause");	
	return 0;
}

int main(){
	int a = 1;
	int b = 1;
	int c = 1;
	int n;
	printf("������һ����: ");
	scanf("%d", &n);
	for (; n > 2; n--) {
		c = a + b;
		b = a;
		a = c;
	}
	printf("����쳲�������Ϊ:%d", c);
	system("pause");
	return 0;
}