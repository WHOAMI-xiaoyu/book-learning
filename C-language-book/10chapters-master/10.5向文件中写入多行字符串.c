//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char str[80] = {'\0'};
//	FILE* fp;
//	fp = fopen("d:\\file.txt", "w");
//	if (fp == NULL)
//		printf("\n不能打开文件！");
//	printf("输入一行字符串：");
//	gets(str);
//	while (!feof(stdin))
//	{
//		fputs(str,fp);
//		fputs("\n",fp);
//		gets(str);
//	}
//	if (fclose(fp))
//	{
//		printf("can not close the file!\n");
//	}
//	return 0;
//}