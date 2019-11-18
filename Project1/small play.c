
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>

int Menu(){
	printf("=====================\n");
	printf("欢迎来到猜数字游戏\n");
	printf("1. 开始游戏\n");
	printf("0. 结束游戏\n");
	printf("=====================\n");
	printf("请输入您的选择：\n");
	int choice = 0;
	scanf_s("%d", &choice);
	return choice;
}

void Game(){
	//1.先生成一个随机的整数（1-100）.
	int toGuess = rand() % 100 + 1;
	while (1) {
		//2.提示用户猜一个数字.
		printf("请输入你猜测的数字(1-100):");
		int num = 0;
		scanf_s("%d", &num);
		//3.根据用户的输入提升用户是猜高了还是猜低了.
		if (num < toGuess) {
			printf("低了,憨憨！\n");
		}
		else if (num > toGuess) {
			printf("高了,憨憨！\n");
		}
		else {
			printf("终于猜对了,你个憨批！！\n");
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
			printf("您的输入有误！\n");
		}
	}
}