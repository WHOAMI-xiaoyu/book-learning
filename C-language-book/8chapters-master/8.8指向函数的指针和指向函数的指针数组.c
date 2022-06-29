//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int min(int a, int b)
//{
//	return a > b ? b : a;
//}
//int ave(int a, int b)
//{
//	return (a + b) / 2;
//}
//void main()
//{
//	int a = 10, b = 15, c;
//	int (*pc)(int, int);
//	int (*p[2])(int, int);
//	pc = ave;
//	p[0] = max;
//	p[1] = min;
//	c = (*pc)(a, b);
//	printf("平均值:%d", c);
//	c = (*p[0])(a, b);
//	printf("最大值:%d", c);
//	c = (*p[1])(a, b);
//	printf("最小值:%d", c);
//}