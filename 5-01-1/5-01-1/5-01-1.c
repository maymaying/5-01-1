#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF����-1��  end of file ===> ctr+z����   	ctr+c�жϳ���
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
	char password[15] = { '0' };  //0  '\0'   NULL  ---   '0'  �ַ���0��
	int a = 10;
	//int *p;//Ұָ��   Ԥ��Ұָ��ķ�����
	int *p = NULL; // 0��ַ
	*p = 100;
	return 0;
}
*/


/*
#include<string.h>
int main()
{
	char password[15];//�ֲ���������û�г�ʼ���������ֵ
	int count = 3;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", &password);//password����������������׵�ַ��&password����������ĵ�ַ  ֵ��һ��
		if (strcmp(password, "980906") == 0)//strcmp�ַ����ıȽ�
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			count--;
			printf("�㻹��%d�λ��᣺", count);
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
	//arr�����ﶨ�壬��������ʹ�� sizeof(arr)/sizeof(arr[0]);
	int len = sizeof(arr) / sizeof(arr[0]);
	int index = BinarySearch(arr, 0, len - 1, 4);
	if (index == -1)
	{
		printf("û���ҵ�\n");
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
//typedef  �����������
// typedef   define   const   ������
//����typedef�����ɱ�������Ϊ��������
typedef int INT;
typedef unsigned int  UINT;
typedef  int Arr[10];
typedef  int(*PFUN)[10];//ָ�������ָ��  ����ָ��
typedef  int(*Pfun) (int, int);//����ָ��

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
	int randNum = rand() % 100 + 1;//����������Χ�ǡ�0~99��   rand�����ܲ��������ķ�ΧΪ��0~32767��
	int num = 0;
	//printf("randNum == %d\n", randNum);
	while (1)//��ѭ��
	{
		printf("��������Ҫ�µ����֣�");
		scanf("%d", &num);
		if (num == randNum)
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else if (num > randNum)
		{
			printf("��ϲ�㣬�´���\n");
		}
		else
		{
			printf("��ϲ�㣬��С��\n");
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
			printf("��Ϸ����\n");
			break;
		default:
			printf("��������ȷ������\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
*/