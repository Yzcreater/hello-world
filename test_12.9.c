#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//����
//int  main() {
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3
//	//�㷨ʵ��
//	//a�з����b���м�ֵ��c����Сֵ
//	if (a < b) {
//
//		int temp = a;
//		 a = b;
//		 b = temp;
//	}
//	if (a < c) {
//		int temp = a;
//		 a = c;
//		 c = temp;
//	}
//	if (b < c) {
//		int temp = b;
//		 b = c;
//		 c = temp;
//		
//	}
//	printf("%d %d %d\n", a, b, c);
//	
//	return 0;
//}
// 3�ı���
//int main() {
//
//	int i = 0;
//	for ( i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0) {
//			printf("%d\n", i);
//		}
//	}
//
//	return	0;
//}
//��Լ��
//int main() {
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d",&m,&n);
//	while (m % n) {
//		r = m % n;
//		m = n;
//		n = r;	
//	}
//	printf("%d\n",n);
//		return 0;
//}
// ��ӡ����
//int main() {
//	int y = 0;
//	int count = 0;
//	for ( y =1000; y <= 2000; y++)
//	{
//		
//		//�ж�����,�ܱ�4�������ܱ�100���������ꣻ�ܱ�400����������
//		if (y % 4 == 0 && y % 100 != 0) {
//			printf("%d\n",y);
//			count++;
//		}
//		else if (y % 400 == 0) {
//			printf("%d\n",y);
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}
//��ӡ����
//int main() {
//	int i = 0;
//	int count = 0;
//	for ( i = 100; i <=200; i++)
//	{
//		//������ֻ�ܱ�1���Լ�����
//		//1.�Գ���, 13  2-12
//		int j = 0;
//		for ( j = 2; j <i; j++)
//		{
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (i == j) {
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("count= %d\n",count);
//
//	return 0;
//}
//#include <math.h>
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//������ֻ�ܱ�1���Լ�����
//		//1.�Գ���, 13  2-12
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//sqrt--��ƽ��
//		{
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j >sqrt(i)) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("count= %d\n", count);
//
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a, &b, &c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d%d%d", a , b, c);
//	return 0;
//}
//int main() {
//	int i = 0;
//	for ( i = 1; i<100 ; i++)
//	{
//		if (i % 3 == 0) {
//			printf("%d\n",i);
//		}
//	}
//	
//	return 0;
//}
//int main() {
//	int y = 0;
//	int c = 0;
//	for ( y = 1000; y <=2000; y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)) {
//			printf("%d\n",y);
//			c++;
//		}
//	}
//	printf("%d\n",c);
//	return 0;
//}
//int main() {
//	int i = 0;
//	for ( i =1; i <=200; i++)
//	{
//		int j = 0;
//		for ( j = 2; j < i; j++)
//		{
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}
//����9
//int main() {
//
//	int i = 0;
//	int c = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 ==9) {
//			printf("%d\n",i);
//			c++;
//		}
//	}
//	printf("c=%d\n",c);
//	return 0;
//}
//�������
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	for ( i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
// ��10�����������
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 1; i < sz; i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("%d\n",max); 
//
//	return 0;
//}
//�˷��ھ���
//int main() {
//	int i = 0;
//	//ȷ����ӡ9��
//	for ( i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 1;
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//int main() {
//	int i = 0;
//	for ( i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//
//	return 0;
//}
//������
#include <time.h>
//void menu() {
//	printf("*******************************\n");
//	printf("*******  1.play  0.exit  ******\n");
//	printf("*******************************\n");
//}
//void game() {
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;
//	//��ʱ����������������������ʼ��
//	//srand((unsigned int)time(NULL));
//	 ret = rand()%100+1;//���������
//	//printf("%d\n",ret);
//	 //2.������
//	 while (1)
//	 {
//		 printf("�������:>");
//		 scanf("%d", &guess);
//		 if (guess > ret) {
//			 printf("�´���\n�������");
//		 }
//		 else if (guess < ret) {
//			 printf("��С��\n�������");
//		 }
//		 else
//		 {
//			 printf("��ϲ�㣬������\n");
//			 break;
//		 }
//
//	 }
//
//
//}
//int main() {
//	int input = 0;
//	//��ʱ����������������������ʼ��
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break; 
//			case 0:
//				printf("��л����\n");
//				break;
//			default:
//				printf("ѡ�����\n");
//				break;
//		}
//	} while (input);
//	return 0;
//
//void game() {
//	int ret = 0;
//	int guess = 0;
//	//srand((unsigned int)time(NULL));
//	ret = rand()%100+1;
//	//printf("ret=%d\n",ret);
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("�´���\n");
//		}
//		else if (guess < ret) {
//			printf("��С��\n");
//		}
//		else {
//			printf("������\n");
//			break;
//		}
//	}
//
//
//}
//void menu() {
//	printf("********************************");
//	printf("********1.play  0.exit *********");
//	printf("********************************");
//
//}
//int main() {
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1 :
//			game();
//			break;
//		case 0 :
//			printf("лл����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include <string.h>
//int main() {
//	char input[20] = {0};
//	//shutdown-s-t 60
//	//system()--ִ��ϵͳ����
//	system("shutdown-s-t 60");
//again:
//	printf("����һ�����ڹػ���ȡ�������룺������\n������:>");
//	scanf("%s",input);
//	if (strcmp(input, "������") == 0) {
//		system("shutdown-a");
//	}
//	else {
//		goto again;
//		
//	}
//	//strcmp()--�Ƚ������ַ���
//
//	return 0;
//}