//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#define N 5
//struct books
//{
//	int bno;
//	char banme[20];
//	char field[10];
//	char author[10];
//	char publisher[30];
//	float price;
//};
//int main()
//{
//	struct books book[N];
//	int i, j, k;
//	char isc = 'n', isb = 'n';
//	int bno, count[N] = { 0 };
//	float total = 0, pp;
//	printf("������� ���� רҵ���� ���� ������ �۸� \n");
//	/*����ͼ����Ϣ*/
//	for (i = 0; i < N; i++)
//	{
//		printf("NO.%d:", i + 1);
//		scanf("%d %s %s %s %s %f", &book[i].bno, book[i].banme, book[i].field, book[i].author, &book[i].publisher, &pp);
//		book[i].price = pp;
//	}
//	printf("\n----------------------------------------------\n");
//	printf("ͼ�鶩����\n");
//	do {
//		printf("������ź�������\n");
//		scanf("%d %d", &bno, &k);
//		isb = 'n';
//		for (j = 0; j < N; j++)
//			if (bno == book[j].bno)
//			{
//				count[j] += k;
//				isb = 'y';
//			}
//		if (isb == 'n')
//			printf("��Ŵ���\n");
//		printf("����������(y/n):");
//		rewind(stdin);
//		scanf("%c", &isc);
//	} while (isc == 'y');
//	printf("\n---------------------------------------------\n");
//	printf("�����嵥:\n");
//	printf("���\t����\t����\t����\t����\n");
//	for (i = 0; i < N; i++)
//	{
//		if (count[i] != 0)
//		{
//			printf("%d\t%s\t%s\t%.2f\t%d\n", book[i].bno, book[i].banme, book[i].author, book[i].price, count[i]);
//			total += count[i] * book[i].price;
//		}
//	}
//
//	printf("\n-----------------------------\n");
//	printf("\t\t\t�ܼ۸�%.2f\n", total);
//	return 0;
//}