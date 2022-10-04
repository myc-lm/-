#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include"game.h"
int full(char arr[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (arr[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char iswin(char arr[ROW][COL])
{
	char p='P';
	char q = 'Q';
	int i = 0;
	for (i = 0; i < ROW; i++)
		{
			if ((arr[i][0]) == (arr[i][1]) && (arr[i][1]) == (arr[i][2]) && (arr[i][1]) != ' ')
				return arr[i][1];
			else if ((arr[0][i]) == (arr[1][i]) && (arr[1][i]) == (arr[2][i]) && (arr[1][i]) != ' ')
				return arr[1][i];
			else if ((arr[0][0]) == (arr[1][1]) && (arr[1][1]) == (arr[2][2]) && (arr[1][1]) != ' ')
				return arr[1][1];
			else if ((arr[0][2]) == (arr[1][1]) && (arr[1][1]) == (arr[2][0]) && (arr[1][1]) != ' ')
				return arr[1][1];
		}
	if (full(arr) == 1)
		return 'P';
}
void computermove(char arr[ROW][COL])
{
	printf("电脑输入>\n");
	int x = 0;
	int y = 0;
	while (1){
		x = rand() % 3;
		y = rand() % 3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}
void peoplemove(char arr[ROW][COL])
{
	int x = 0;
	int y = 0;
	printf("请输入某一行>\n");
	scanf("%d", &x);
	printf("请输入某一列>\n");
	scanf("%d", &y);
	while(x > ROW || y > COL)
	{
	printf("输入非法！！>\n");
	printf("请再次输入某一行>\n");
	scanf("%d", &x);
	printf("请再次输入某一列>\n");
	scanf("%d", &y);
     }
	while (arr[x - 1][y - 1] == '#' || arr[x - 1][y - 1] == '*')
	{
		printf("该格子已被占用！！");
		printf("请再次输入某一行>\n");
		scanf("%d", &x);
		printf("请再次输入某一列>\n");
		scanf("%d", &y);
	}
	arr[x - 1][y - 1] = '*';
}
void chushihua(char arr[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void playarr(char arr[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j != (COL - 1))
				printf("|");
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j != (COL - 1))
					printf("|");
			}
			printf("\n");
		}
	}
}