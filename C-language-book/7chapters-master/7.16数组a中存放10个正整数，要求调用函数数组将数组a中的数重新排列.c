//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void judge(int b[], int n)
//{
//	int i, j, k, temp;
//	for (i = 0, j = n - 1; i < j;)
//	{
//		if (b[i] % 2 != 0)
//		{
//			temp = b[i];
//			for (k = i; k < j; k++)
//			{
//				b[k] = b[k + 1];
//			}
//			b[j] = temp;
//			j--;
//		}
//		else
//			i++;
//	}
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	judge(a, 10);
//	for (int i = 0; i < 10; i++)
//		printf("%4d", a[i]);
//	return 0;
//}