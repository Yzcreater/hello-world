#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//排序
//int  main() {
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3
//	//算法实现
//	//a中放最大，b放中间值，c放最小值
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
// 3的倍数
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
//公约数
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
// 打印闰年
//int main() {
//	int y = 0;
//	int count = 0;
//	for ( y =1000; y <= 2000; y++)
//	{
//		
//		//判断闰年,能被4整除不能被100整除是闰年；能被400整除是闰年
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
//打印素数
//int main() {
//	int i = 0;
//	int count = 0;
//	for ( i = 100; i <=200; i++)
//	{
//		//素数，只能被1和自己整除
//		//1.试除法, 13  2-12
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
//		//素数，只能被1和自己整除
//		//1.试除法, 13  2-12
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//sqrt--开平方
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
//出现9
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
//分数求和
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
// 求10个中整数最大
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
//乘法口诀表
//int main() {
//	int i = 0;
//	//确定打印9行
//	for ( i = 1; i <= 9; i++)
//	{
//		//打印一行
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
//猜数字
#include <time.h>
//void menu() {
//	printf("*******************************\n");
//	printf("*******  1.play  0.exit  ******\n");
//	printf("*******************************\n");
//}
//void game() {
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置随机数的生成起始点
//	//srand((unsigned int)time(NULL));
//	 ret = rand()%100+1;//生成随机数
//	//printf("%d\n",ret);
//	 //2.猜数字
//	 while (1)
//	 {
//		 printf("请猜数字:>");
//		 scanf("%d", &guess);
//		 if (guess > ret) {
//			 printf("猜大了\n，请继续");
//		 }
//		 else if (guess < ret) {
//			 printf("猜小了\n，请继续");
//		 }
//		 else
//		 {
//			 printf("恭喜你，猜中了\n");
//			 break;
//		 }
//
//	 }
//
//
//}
//int main() {
//	int input = 0;
//	//拿时间戳来设置随机数的生成起始点
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break; 
//			case 0:
//				printf("感谢参与\n");
//				break;
//			default:
//				printf("选择错误\n");
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
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("猜大了\n");
//		}
//		else if (guess < ret) {
//			printf("猜小了\n");
//		}
//		else {
//			printf("猜中了\n");
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
//		printf("请选择\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1 :
//			game();
//			break;
//		case 0 :
//			printf("谢谢参与\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include <string.h>
//int main() {
//	char input[20] = {0};
//	//shutdown-s-t 60
//	//system()--执行系统命令
//	system("shutdown-s-t 60");
//again:
//	printf("将在一分钟内关机，取消请输入：我是猪\n请输入:>");
//	scanf("%s",input);
//	if (strcmp(input, "我是猪") == 0) {
//		system("shutdown-a");
//	}
//	else {
//		goto again;
//		
//	}
//	//strcmp()--比较两个字符串
//
//	return 0;
//}