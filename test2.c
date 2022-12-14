#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋
#include <stdio.h>
#include <string.h>
#include "game.h"
void menu() {

	printf("*************************************\n");
	printf("********1.play  0.exit***************\n");
	printf("*************************************\n");

}
void game() {
	char ret = 0;
	//数组存放走出的棋盘信息
	char board[ROW][COL] = {0};//全部空格
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		//电脑下
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}

	}

	if (ret == '*') {
		printf("玩家赢了\n");
	}
	else if (ret == '#') {
	
		printf("电脑赢了\n");
	}
	else {
		printf("平局\n");
	}
	


}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新输入\n");
			break;
		}
	} while (input);
	

}

int main() {

	test();
	return 0;
}