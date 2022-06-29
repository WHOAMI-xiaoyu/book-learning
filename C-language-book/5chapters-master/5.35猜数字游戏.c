//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int count = 0, m, n;
//	m = rand() % (80 - 10 + 1) + 10;
//	printf("请输入一个10-80之间的整数：");
//	while (1)
//	{
//		scanf("%d", &n);
//		count++;
//		if (m == n)
//		{
//			printf("恭喜你猜对了！");
//			break;
//		}
//		else if (m > n && count < 5)
//			printf("对不起，你猜小了！再来一次。");
//		else if (m < n && count < 5)
//			printf("对不起，你猜大了！再来一次。");
//		if (count == 5)
//		{
//			printf("对不起，你已经没机会了\n这个数是：%d", m);
//			break;
//		}
//	}
//	return 0;
//	
//}