//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//
//{
//
//	int a[100], i = 0, ch = 0, min, j=0;
//	
//	a[0] = NULL;
//	printf("请输入一组数据：");
//
//	do {
//
//		scanf("%d", &a[j++]);
//
//		ch = getchar();
//
//	} while (ch != '\n');
//	
//	if(a[0]==NULL)
//		printf("温度为0。");
//	else
//	{
//		min = a[0];
//		for (i = 1; i < j; i++)
//			if (fabs(a[i]) < fabs(min))
//				min = a[i];
//		printf("温度为%d", min);
//	}
//	return 0;
//
//
//}