//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a[6] = { 1,3,5,7,9 }, i, n;
//	printf("插入前的数组：");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%4d", a[i]);
//	}
//	printf("输入一个数字：");
//	scanf("%d", &n);
//	for (i = 4; i >= 0; i--)
//	{
//		if (a[i] > n)
//			a[i + 1] = a[i];
//		else
//		{
//			a[i + 1] = n;
//			break;
//		}
//		if (i == 0)
//			a[i] = n;
//	}
//	for (i = 0; i < 6; i++)
//		printf("%4d", a[i]);
//	return 0;
//}