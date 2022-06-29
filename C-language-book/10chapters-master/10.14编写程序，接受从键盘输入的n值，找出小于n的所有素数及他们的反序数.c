//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int prime(int m, int x[], int y[])
//{
//	int i, k = 0, s, n;
//	while (--m)
//	{
//		for (i = 2; i < sqrt(m); i++)
//			if (m % i == 0)
//				break;
//		if (i < sqrt(m))
//			continue;
//		x[k] = m;
//		s = 0;
//		n = m;
//		while (n)
//		{
//			s = s * 10 + n % 10;
//			n = n / 10;
//		}
//		y[k++] = s;
//	}
//	return k-1;
//}
//int main()
//{
//	int n, i, a[100], b[100], m;
//	FILE *fp;
//	fp = fopen("d:\\file.txt", "w");
//	if (fp == NULL)
//		printf("open error!");
//	printf("请输入一个数：");
//	scanf("%d", &n);
//	m = prime(n, a, b);
//	for (i = 0; i < m; i++)
//	{
//		printf("%5d", a[i]);
//		fprintf(fp, "%5d", a[i]);
//	}
//	printf("\n");
//	fprintf(fp, "\n");
//	for (i = 0; i < m; i++)
//	{
//		printf("%5d", b[i]);
//		fprintf(fp, "%5d", b[i]);
//	}
//	if (fclose(fp))
//		printf("close error!");
//	return 0;
//
//
//}
