#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.>
#include"game.h"
int game()
{
	srand((unsigned int)time(NULL));
	char arr[ROW][COL] = { 0 };
	chushihua(arr);
	playarr(arr);
	printf("\n");
	while (1){
		peoplemove(arr);
		playarr(arr);
		if (iswin(arr) == '*')
		{
			printf("YOU WIN!!!\n");
			return 0;
		}
		else if (iswin(arr) == '#')
		{
			printf("YOU LOSE!!!\n");
			return 0;
		}
		else if (iswin(arr) == 'P')
		{
			printf("平局\n");
			return 0;
		}
		computermove(arr);
		playarr(arr);
		if (iswin(arr) == '*')
		{
			printf("YOU WIN!!!\n");
			return 0;
		}
		else if (iswin(arr) == 'P')
		{
			printf("平局\n");
			return 0;
		}
		else if (iswin(arr) == '#')
		{
			printf("YOU LOSE!!!\n");
			return 0;
		}
	}
}
void menu()
{
	printf("********************\n");
	printf("***1.play 0.exit****\n");
	printf("********************\n");
}
int main()
{
	int input;
	do{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:printf("请再次输入：");
			break;
		}
	} while (input);
	return 0;
}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);//首元素的地址(arr数组名是首元素地址)
//	printf("%p\n", &arr);//整个数组的地址
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//arr传过去的是整个数组地址
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3 };
//	char arr2[] = { 'a', 'b', 'c '};
//	char arr3[] = "abc";//c后还有'\0'
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", sizeof(arr3));//sizeof求的是arr3所占空间大小 （单位是字节）
//	printf("%d\n", strlen(arr3));//strlen求的是字符串长度  '\0'之前的字符个数
//	return 0;
//}