#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//
//	int a = 10;
//	printf("%p\n", &a);
//	return 0;
//}
//int main() {
//	double a = 5.5;
//	  double* pd = &a;
//	  *pd = 3.6;
//	  printf("%lf\n",*pd);
//	  printf("%lf\n",a);
//	return 0;
//}
//���Ӷ���--�ṹ��--�Լ������
//����һ���ṹ������
//struct BOOK
//{
//	char name[20];
//	short price;
//};
//int main() {
//
//
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct BOOK b1 = {"c�������",55};
//	strcpy(b1.name, "c++");//string copu--�ַ�������
//	printf("%s\n",b1.name);
//	 //struct	BOOK* pd = &b1;
//	 //����pd��ӡ�������ͼ۸�
//	 //.---�ṹ�����.��Ա
//	 //->----�ṹ��ָ��->��Ա
//	 //printf("%s\n",pd->name);
//	// printf("%d\n",pd->price);
//	/*printf("����=%s\n",b1.name);
//	printf("�۸�=%d\n",b1.price);*/
//	return 0;
//}
//int main() {
//	//int a = 13;
//	int i = 1;
//	/*if (a % 2 == 0)
//	{
//		printf("����Ϊż����%d\n",a);
//	}
//	else
//	{
//		printf("����Ϊ������%d\n", a);
//	}*/
//	while (i <= 100)
//	{
//		if (i % 2 == 1);
//		printf("%d\n",i);
//		i++;
//	}
	//int num = 4;
	//if (num = 5)// = ��ֵ  == ���
	//{
	//	printf("�Ǻ�\n");
	//}
	/*int age = 100;

	if (age < 18)
		printf("δ����\n");
	else if
		(age >= 18 && age < 28)
		printf("����\n");
	else if(age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else if (age >= 90)
		printf("�ϲ���\n");*/
	/*if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");*/
	/*if(age < 18)
		printf("δ����\n");
	else if(age > 70)
		printf("��������\n");
	else
		printf("����\n");*/
//	return 0;
//}

//int main() {
//	int day = 0;
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	default:
//		printf("���������ֵ����");
//		break;
//		
//	}
	/*if (day ==1)
	{
		printf("����һ\n");
	}
	else if (day == 2)
	{
		printf("���ڶ�\n");
	}
	else if (day == 3)
	{
		printf("����3\n");
	}
	else if (day == 4)
	{
		printf("����4\n");
	}
	else if (day == 2)
	{
		printf("���ڶ�\n");
	}
	else if (day == 5)
	{
		printf("����5\n");
	}
	else if (day == 6)
	{
		printf("����6\n");
	}*/

	//return 0;
//}
//int main() {
//	int i = 1;
//	while (i <= 100)
//	{
//			if (i % 2 == 1)
//				printf("%d\n",i);
//				i++;
//	}
//	return 0;
//}
//int main() {
//	int i = 1;
//	while (i <=10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}
int main() {
	/*int  ch =getchar();
	putchar(ch);
	
	printf("%c\n",ch);*/
	int ch = 0;
	//ctrl + z ֹͣ����  EOF --end of file--> -1
	while ((ch =getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}