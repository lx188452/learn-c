#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int a, b, temp;
int sadaf(){
	printf("请输入两个数(a,b):\n");
	scanf_s("%d%d", &a, &b);
	if (a < b){
		temp = a;
		a = b;
		b = temp;
	}
	while(a%b != 0){
		temp = a%b;
		a = b;
		b = temp;
	}
	printf("最大公约数为：%d\n", b);
	system("pause");
	return 0;
}
//if (m == 2, 4, 6, 9, 11 > 30, m == 2 > 28 + (?))