//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void moveone(int* array, int size)
//{
//	int* p = array+size-1, temp;
//	temp = *p;
//	for (; p > array; p--)
//		*p = *(p - 1);
//	*array = temp;
//}
//int main()
//{
//	int a[100], n, m, i;
//	printf("����ĸ�����");
//	scanf("%d", &n);
//	printf("����%d����", n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("����Ҫ�ƶ��ĸ�����");
//	scanf("%d", &m);
//	for (i = 0; i < m; i++)
//		moveone(a, n);
//	printf("�ƶ���");
//	for (i = 0; i < n; i++)
//		printf("%d", a[i]);
//	printf("\n");
//	return 0;
//}