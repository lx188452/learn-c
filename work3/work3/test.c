#include<stdio.h>
#include<stdlib.h>
int main(){
	int count = 0;//�������
	int year;//���
	for (year = 1000; year <= 2000; year++){
		//�ж��Ƿ�Ϊ��������
		if (year % 400 == 0){
			printf("%d ", year);
			count++;
		}
		//�ж��Ƿ�Ϊ��ͨ����
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