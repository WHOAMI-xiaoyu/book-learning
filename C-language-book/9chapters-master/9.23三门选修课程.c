//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#define N 5
//struct stuscore
//{
//	char sno[8];
//	char sname[10];
//	char electivename;
//	union electivescore
//	{
//		float statistics;
//		float maintenance;
//		char tourism;
//	}elective;
//};
//int main()
//{
//	struct stuscore stu[N];
//	int i, j, count[3] = { 0 };
//	char ename[10];
//	float temp;
//	char ch;
//	printf("������ѧ����Ϣ��\n");
//	printf("ѧ�� ���� ѡ�δ��루S,M,T���ɼ�\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("ON.%d:", i + 1);
//		scanf("%s %s %c", stu[i].sno, stu[i].sname, &stu[i].electivename);
//		stu[i].electivename = toupper(stu[i].electivename);
//		if (stu[i].electivename == 'S')
//		{
//			scanf("%f", &temp);
//			stu[i].elective.statistics = temp;
//			count[0]++;
//		}
//		else if (stu[i].electivename == 'M')
//		{
//			scanf("%f", &temp);
//			stu[i].elective.maintenance = temp;
//			count[1]++;
//		}
//		else
//		{
//			scanf(" %c", &ch);
//			stu[i].elective.tourism = ch;
//			count[2]++;
//		}
//	}
//
//
//	printf("\n\t---------------------------------------\n");
//	for (i = 0; i < 3; i++)
//	{
//		if (i == 0)
//			strcpy(ename, "ͳ��ѧ");
//		else if (i == 1)
//			strcpy(ename, "���Ա���");
//		else
//			strcpy(ename, "���ι���");
//		printf("��%d��ѧ��ѡ����%s:\n", count[i], ename);
//		printf("\t\tѧ��\t\t����\t\t�ɼ�\n");
//		for (j = 0; j < N; j++)
//		{
//			if (i == 0 && stu[j].electivename == 'S')
//				printf("\t\t%s\t\t%s\t\t%.lf\n", stu[j].sno, stu[j].sname, stu[j].elective.statistics);
//			if (i == 1 && stu[j].electivename == 'M')
//				printf("\t\t%s\t\t%s\t\t%.lf\n", stu[j].sno, stu[j].sname, stu[j].elective.maintenance);
//			if (i == 2 && stu[j].electivename == 'T')
//				printf("\t\t%s\t\t%s\t\t%c\n", stu[j].sno, stu[j].sname, toupper(stu[j].elective.tourism));
//		}
//		printf("\n\t--------------------------------------\n");
//	}
//	return 0;
//}