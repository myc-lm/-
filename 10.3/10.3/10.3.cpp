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
			printf("ƽ��\n");
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
			printf("ƽ��\n");
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
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:printf("���ٴ����룺");
			break;
		}
	} while (input);
	return 0;
}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);//��Ԫ�صĵ�ַ(arr����������Ԫ�ص�ַ)
//	printf("%p\n", &arr);//��������ĵ�ַ
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//arr����ȥ�������������ַ
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3 };
//	char arr2[] = { 'a', 'b', 'c '};
//	char arr3[] = "abc";//c����'\0'
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", sizeof(arr3));//sizeof�����arr3��ռ�ռ��С ����λ���ֽڣ�
//	printf("%d\n", strlen(arr3));//strlen������ַ�������  '\0'֮ǰ���ַ�����
//	return 0;
//}