#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>
void chushihua(char arr[ROW][COL]);//初始化
void playarr(char arr[ROW][COL]);//打印九宫格
void peoplemove(char arr[ROW][COL]);//人走
void computermove(char arr[ROW][COL]);//电脑走
char iswin(char arr[ROW][COL]);//判定条件