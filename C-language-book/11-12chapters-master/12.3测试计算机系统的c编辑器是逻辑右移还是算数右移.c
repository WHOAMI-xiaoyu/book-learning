#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	short int x;
	x = ~0;
	if ((x >> 5) != x)
		printf("�߼�����\n");
	else
		printf("��������\n");
	return 0;
}