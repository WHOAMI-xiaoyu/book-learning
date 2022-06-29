//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct man
//{
//	char name;
//	int age;
//}man[2];
//int main()
//{
//	FILE* fp;
//	if ((fp = fopen("d:\\file.dat", "rb")) == NULL)
//		printf("open error!");
//	fread(man, sizeof(struct man), 2, fp);
//	printf("\n%s:%d", man[0].name, man[0].age);
//	printf("\n%s:%d", man[1].name, man[1].age);
//	if (fclose(fp))
//	{
//		printf("close error!");
//		exit(1);
//	}
//	return 0;
//}