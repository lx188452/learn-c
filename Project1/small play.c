
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>

int Menu(){
	printf("=====================\n");
	printf("��ӭ������������Ϸ\n");
	printf("1. ��ʼ��Ϸ\n");
	printf("0. ������Ϸ\n");
	printf("=====================\n");
	printf("����������ѡ��\n");
	int choice = 0;
	scanf_s("%d", &choice);
	return choice;
}

void Game(){
	//1.������һ�������������1-100��.
	int toGuess = rand() % 100 + 1;
	while (1) {
		//2.��ʾ�û���һ������.
		printf("��������²������(1-100):");
		int num = 0;
		scanf_s("%d", &num);
		//3.�����û������������û��ǲ¸��˻��ǲµ���.
		if (num < toGuess) {
			printf("����,������\n");
		}
		else if (num > toGuess) {
			printf("����,������\n");
		}
		else {
			printf("���ڲ¶���,�����������\n");
			break;
		}
	}
}

int main(){
	srand(time(0));
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("goodbye!\n");
			break;
		}
		else {
			printf("������������\n");
		}
	}
}