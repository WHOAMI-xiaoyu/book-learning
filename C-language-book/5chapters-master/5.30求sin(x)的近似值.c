//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#define eps 1e-6
//int main()
//{
//	int n = 1;
//	float x;
//	double fz, fm = 1, sinx;
//	printf("ÊäÈëxµÄÖµ£º");
//	scanf("%f", &x);
//	fz = x; sinx = x;
//	do
//	{
//		n++;
//		fz = -fz * x * x;
//		fm = fm * (2 * n - 2) * (2 * n - 1);
//		sinx = sinx + fz / fm;
//	} while (fabs(fz / fm) > eps);
//	printf("sin(%f)=%0.6f\n", x, sinx);
//	printf("sin(%f)=%0.6f\n", x, sin(x));
//	return 0;
//}