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
//复杂对象--结构体--自己创造的
//创建一个结构体类型
//struct BOOK
//{
//	char name[20];
//	short price;
//};
//int main() {
//
//
//	//利用结构体类型创建一个该类型的结构体变量
//	struct BOOK b1 = {"c语言设计",55};
//	strcpy(b1.name, "c++");//string copu--字符串拷贝
//	printf("%s\n",b1.name);
//	 //struct	BOOK* pd = &b1;
//	 //利用pd打印处书名和价格
//	 //.---结构体变量.成员
//	 //->----结构体指针->成员
//	 //printf("%s\n",pd->name);
//	// printf("%d\n",pd->price);
//	/*printf("书名=%s\n",b1.name);
//	printf("价格=%d\n",b1.price);*/
//	return 0;
//}
//int main() {
//	//int a = 13;
//	int i = 1;
//	/*if (a % 2 == 0)
//	{
//		printf("该数为偶数：%d\n",a);
//	}
//	else
//	{
//		printf("该数为奇数：%d\n", a);
//	}*/
//	while (i <= 100)
//	{
//		if (i % 2 == 1);
//		printf("%d\n",i);
//		i++;
//	}
	//int num = 4;
	//if (num = 5)// = 赋值  == 相等
	//{
	//	printf("呵呵\n");
	//}
	/*int age = 100;

	if (age < 18)
		printf("未成年\n");
	else if
		(age >= 18 && age < 28)
		printf("青年\n");
	else if(age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else if (age >= 90)
		printf("老不死\n");*/
	/*if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");*/
	/*if(age < 18)
		printf("未成年\n");
	else if(age > 70)
		printf("大龄青年\n");
	else
		printf("成年\n");*/
//	return 0;
//}

//int main() {
//	int day = 0;
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	default:
//		printf("您输入的数值有误");
//		break;
//		
//	}
	/*if (day ==1)
	{
		printf("星期一\n");
	}
	else if (day == 2)
	{
		printf("星期二\n");
	}
	else if (day == 3)
	{
		printf("星期3\n");
	}
	else if (day == 4)
	{
		printf("星期4\n");
	}
	else if (day == 2)
	{
		printf("星期二\n");
	}
	else if (day == 5)
	{
		printf("星期5\n");
	}
	else if (day == 6)
	{
		printf("星期6\n");
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
	//ctrl + z 停止编译  EOF --end of file--> -1
	while ((ch =getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}