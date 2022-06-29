//#include<stdio.h>
//int main()
//{
//	int year, month, days=0;
//	printf("请输入年，月：");
//	scanf("%d,%d", &year, &month);
//	switch (month)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 9:
//	case 10:
//	case 12:
//		days = 31;
//		break;
//	case 4:
//	case 6:
//	case 8:
//	case 11:
//		days = 30;
//		break;
//	case 2:
//		if ((year % 400 == 0) || year % 100 != 0 && year % 4 == 0)
//			days = 29;
//		else
//			days = 28;
//		break;
//	}
//	printf("%d年、%d月有%d天。", year, month, days);
//	return 0;
//}