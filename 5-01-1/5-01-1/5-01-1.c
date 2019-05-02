#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF代表‘-1’  end of file ===> ctr+z结束   	ctr+c中断程序
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0' && ch <= '9')
		{

		}
	}
	return 0;
}


/*
int main()
{
	char password[15] = { '0' };  //0  '\0'   NULL  ---   '0'  字符‘0’
	int a = 10;
	//int *p;//野指针   预防野指针的方法？
	int *p = NULL; // 0地址
	*p = 100;
	return 0;
}
*/


/*
#include<string.h>
int main()
{
	char password[15];//局部变量数组没有初始化都是随机值
	int count = 3;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", &password);//password数组名代表数组的首地址，&password代表着数组的地址  值都一样
		if (strcmp(password, "980906") == 0)//strcmp字符串的比较
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			count--;
			printf("你还有%d次机会：", count);
		}
	}
	system("pause");
	return 0;
}
*/


/*
int BinarySearch(int arr[], int left, int right, int key)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] == key)
		{
			return mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//arr在哪里定义，就在哪里使用 sizeof(arr)/sizeof(arr[0]);
	int len = sizeof(arr) / sizeof(arr[0]);
	int index = BinarySearch(arr, 0, len - 1, 4);
	if (index == -1)
	{
		printf("没有找到\n");
	}
	else
	{
		printf("%d\n", index);
	}
	system("pause");
	return 0;
}
*/


/*
//typedef  给类型起别名
// typedef   define   const   的区别？
//加上typedef，会由变量提升为这种类型
typedef int INT;
typedef unsigned int  UINT;
typedef  int Arr[10];
typedef  int(*PFUN)[10];//指向数组的指针  数组指针
typedef  int(*Pfun) (int, int);//函数指针

int main()
{
	INT a = 10;
	UINT b = 20;
	Arr arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	system("pause");
	return 0;
}
*/


/*

#include<time.h>

void menu()
{
	printf("************************\n");
	printf("********1.start**********\n");
	printf("********0.exit***********\n");
	printf("************************\n");
}
void playGame()
{
	int randNum = rand() % 100 + 1;//产生的数范围是“0~99”   rand（）能产生的数的范围为“0~32767”
	int num = 0;
	//printf("randNum == %d\n", randNum);
	while (1)//死循环
	{
		printf("请输入你要猜的数字：");
		scanf("%d", &num);
		if (num == randNum)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		else if (num > randNum)
		{
			printf("恭喜你，猜大了\n");
		}
		else
		{
			printf("恭喜你，猜小了\n");
		}
	}
}

//time_t    time   (time_t *timer );

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			playGame();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("请输入正确的数字\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
*/