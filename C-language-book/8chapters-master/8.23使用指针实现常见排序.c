//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
///*—°‘Ò∑®*/
//void selectSort(int* p, int n)
//{
//	int i, j, * pt, temp;
//	for (i = 0; i < n; i++)
//	{
//		pt = p+i;
//		for (j = i+1; j < n ; j++)
//			if (*(p+j) < *pt)
//				pt = p + j;
//		temp = *pt, * pt = *(p + i), * (p + i) = temp;
//	}
//}
//
///*≤Â»Î∑®≈≈–Ú*/
//void insertSort(int* p, int n)
//{
//	int i, j, temp;
//	for (i = 1; i < n; i++)
//	{
//		temp = *(p + i);
//		for (j = i - 1; j >= 0 && temp < *(p + j); j--)
//			*(p + j + 1) = *(p + j);
//		*(p + j + 1) = temp;
//	}
//}
//
///*√∞≈›∑®≈≈–Ú*/
//void bubbleSort(int* p, int n)
//{
//	int i, j, temp;
//	for(i=n-1;i>=0;i--)
//		for (j = 0;j<=i-1; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				temp = *(p + j + 1);
//				*(p + j + 1) = *(p + j);
//				*(p + j) = temp;
//			}
//		}
//}
//
//
//int main()
//{
//	int i, a[10] = { 1,2,3,5,1,6,7,8,9,10 };
//	printf("≈≈–Ú«∞:");
//	for (i = 0; i < 10; i++)
//		printf("%d", a[i]);
////	selectSort(a, 10);
////	insertSort(a, 10);
//	bubbleSort(a, 10);
//	printf("≈≈–Ú∫Û:");
//	for (i = 0; i < 10; i++)
//		printf("%d", a[i]);
//	return 0;
//}