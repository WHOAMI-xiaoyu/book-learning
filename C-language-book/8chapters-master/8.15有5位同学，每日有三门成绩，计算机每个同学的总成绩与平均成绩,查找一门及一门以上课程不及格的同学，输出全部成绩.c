//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//average(int student[5][6])
//{
//	int i, j; 
//	printf("ѧ��       ��ѧ        Ӣ��       �����       �ܷ�       ƽ����\n");
//	for (i = 0; i < 5; i++)
//	{
//		student[i][4] = student[i][1] + student[i][2] + student[i][3];
//		student[i][5] = student[i][4] / 3;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 6; j++)
//			printf("%-12d", student[i][j]);
//		printf("\n");
//	}
//}
//search(int(*pl)[6], int n)
//{
//	int i, j, flag;
//	printf("\n�ɼ���һ�ż����ϲ������ѧ�����£�\n");
//	for (i = 0; i < n; i++)
//	{
//		flag = 0;
//		for (j = 1; j < 4; j++)
//			if (*(*(pl + i) + j) < 60)
//				flag = 1;
//		if (flag == 1)
//		{
//			for (j = 0; j < 6; j++)
//				printf("%-12d", *(*(pl + i) + j));
//			printf("\n");
//		}
//	}
//}
//int main()
//{
//	int score[5][6] = { {1,2,3,4,5},{2,2,3,4,5},{3,2,3,4,5},{4,2,3,4,5},{5,2,3,4,5} };
//	average(score);
//	search(score, 5);
//	return 0;
//}