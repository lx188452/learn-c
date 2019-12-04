#include<stdio.h>
#include<stdlib.h>
int main(){
	int count = 0;//闰年个数
	int year;//年份
	for (year = 1000; year <= 2000; year++){
		//判断是否为世纪闰年
		if (year % 400 == 0){
			printf("%d ", year);
			count++;
		}
		//判断是否为普通闰年
		else if(year % 4 == 0 && year % 100 != 0){
			printf("%d ", year);
			count++;
		}
	}
	printf("\n");
	printf("count=%d\n", count);
	system("pause");
	return 0;
}