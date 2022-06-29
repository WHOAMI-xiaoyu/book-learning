//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void input(int a[], int n);
//void choose(int a[], int n);
//void print(int a[], int n);
//int main()
//{
//	int n, a[10];
//	printf("输入变量n的值：（n<=10):");
//	scanf("%d", &n);
//	input(a, n);
//	choose(a, n);
//	printf("排序后：", n);
//	print(a, n);
//	printf("\n");
//	return 0;
//}
//void input(int a[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//}
//void choose(int a[], int n)
//{
//	int i, j, k, t;
//	for (i = 0; i < n-1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//			if (a[j] < a[k])
//				k = j;
//		t = a[i]; a[i] = a[k]; a[k] = t;
//				
//	}
//
//}
//void print(int a[], int n)
//{
//
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%3d", a[i]);
//}