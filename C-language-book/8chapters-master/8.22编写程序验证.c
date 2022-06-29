//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int invert(long, long*);
//int main()
//{
//	int x, a, * pa = &a;
//	printf("输入一个数字:");
//	scanf("%d", &x);
//	while (!invert(x, pa))
//	{
//		printf("\nx=%d，反序数为%d,和为:%d", x, *pa, x + *pa);
//		x += *pa;
//	}
//	printf("\n整数的回文数字为：%d", x);
//	return 0;
//}
//int invert(int x, long* invertx)
//{
//	int s = x, sum = 0;
//	while (s)
//	{
//		sum *= 10;
//		sum += s % 10;
//		s /= 10;
//	}
//	*invertx = sum;
//	if (x != *invertx)
//		return 0;
//	else
//		return 1;
//}



