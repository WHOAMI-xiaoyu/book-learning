//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, j = 0, * p;
//	float sum = 0;
//	printf("输入要输入的个数：");
//	scanf("%d", &i);
//	p = (int*)malloc(i * sizeof(int));
//	if (p)
//	{
//		while (j++ < i)
//		{
//			printf("第%d个数是：",j);
//			scanf("%d", p++);
//		}
//		for (j = i; j > 0; j--)
//			sum += *(p - j);
//		printf("平均值:%f", (sum / i));
//		free(p - i);
//	}
//	else
//		printf("内存分配错误！");
//	return 0;
//}