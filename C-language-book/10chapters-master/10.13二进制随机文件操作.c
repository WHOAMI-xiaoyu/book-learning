//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 3
//struct student
//{
//	char no[10];
//	char name[15];
//	int score[3];
//};
//void main()
//{
//	int i, j, n;
//	FILE* fp;
//	struct student s, stud[N] = { {"150624301","zhangsan",75,87,0},{"150624302","list",82,88,0},{"150624303","wangwu",79,93,0} };
//	for (i = 0; i < N; i++)
//		for (j = 0; j < 2; j++)
//			stud[i].score[2] += stud[i].score[j];
//	printf("学生信息如下:\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%11s %s %d %d %d", stud[i].no, stud[i].name, stud[i].score[0], stud[i].score[1], stud[i].score[2]);
//		printf("\n");
//	}
//	fp = fopen("d:\\file.txt", "w");
//	if (fp == NULL)
//		printf("open error");
//	for (i = 0; i < N; i++)
//		fwrite(&stud[i], sizeof(struct student), 1, fp);
//	fclose(fp);
//	fp = fopen("d:\\file.txt", "rb");
//	if (fp == NULL)
//		printf("open error!");
//	printf("请输入序号：");
//	scanf("%d", &n);
//	printf("找到以下同学：");
//	fseek(fp, (n - 1) * sizeof(s), 0);
//	fread(&s, sizeof(s), 1, fp);
//	fclose(fp);
//	printf("%11s %s %d %d %d", s.no, s.name, s.score[0], s.score[1], s.score[2]);
//	return 0;
//}