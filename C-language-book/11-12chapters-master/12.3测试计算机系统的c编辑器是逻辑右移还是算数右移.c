#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	short int x;
	x = ~0;
	if ((x >> 5) != x)
		printf("Âß¼­ÓÒÒÆ\n");
	else
		printf("ËãÊıÓÒÒÆ\n");
	return 0;
}