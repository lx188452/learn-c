#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	int b;
	int c;
	int x;
	printf("请输入三个数字：\n");
	scanf("%d%d%d", &a, &b, &c);
		if (a < b){
			x = a;
			a = b;
			b = x;
		}
		if (b < c){
			x = b;
			b = c;
			c = x;
		}
		if (a < b){
			x = b;
			b = a;
			a = x;
		}
	printf("三个数按照从大到小的顺序排列为%d %d %d\n",a,b,c);
	system("pause");
	return 0;
}