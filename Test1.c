#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//
//	int a = 5;
//	int b = 8;
//	if (a > b)
//	{
//		printf("较大值是：%d\n",a);
//	}
//	else
//		printf("较大值是：%d\n", b);

//	return 0;
//}
//int MAX(int a, int b) {
//
//
//	if (a > b)
//		return a;
//	else
//		return b;
//} 
//
//	int main()
//	{
//		int a = 10;
//		return 0;
//
//	}

//int main() {
//
//	int a = 0;
//	int b = ~a;//b是有符号的整型
//
//	//~--按位（二进制）取反
//	//负数在内存中存储的时候，存储的是二进制的补码
//
//	//原码符号位不变，其余取反变反码  10010--->11101  反码加1变成补码 11101-->11110
//	printf("%d\n",b);//打印的是这个数的原码
//	
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	//int b = a++;//后置++，先使用后加1
//	//int b = ++a;//前置++，先加1再使用
//	//int b = a--;//后置--，先使用后-1
//	int b = --a;//前置--，先-1再使用
//	printf("a=%d b=%d",a,b);
//
//	return 0;
//}
//int main() {
//
//	int a = (int)3.14;
//	printf("%d\n",a);
//	
//	return 0;
//}
//int main() {
//
//	//真 -- 非0
//	//假 -- 0
//	//&& -- 逻辑与
//	//|| -- 逻辑非
//	int a = 3;
//	int b = 4;
//	int c = a && b;
//	printf("c=%d\n", c);
//	int f = 0;
//	int d = 4;
//	int e = f && d;
//	printf("e=%d\n", e);
//
//	return 0;
//}
//int main() {
//	int a = 5;
//	int b = 6;
//	int c = (a  > b ? a : b);
//	printf("c=%d\n",c);
//
//
//	return 0;
//}
//int add(int a, int b) {
//
//	int c = a + b;
//	return c;
//}
//int main() {
//
//	//int arr[] = {0};
//	//arr[4];//[]--下标引用操作符
//	int sum = add(40,5);//()--函数调用操作符
//	printf("%d\n",sum);
//
//
//	return 0;
//}
//
//int main() {
//	register int a = 10;//把a定义成寄存器变量
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int;
//	unsigned int num = 1;
//
//	//struct --结构体关键字
//	//union--联合体/共用体
//
//	return 0;
//}
//int main() {
//	//typedef-类型定义-类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//
//
//
//	return 0;
//}
//static 修饰局部变量，生命周期延长了
//void test() {
//
//	 static int a = 1;//静态局部变量
//
//	 a++;
//	printf("a=%d\n",a);
//
//}
//int main() {
//
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;

//static 修饰全局变量，改变作用域---让静态的全局变量只能在自己的源文件中使用
//int main() {
//
//	//extern--申明外部符号
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//
//
//	return 0;}

//声明外部函数

//static 修饰函数，改变了函数的链接属性； 外部链接属性-->内部链接属性
//extern int add(int, int);
//int main() {
//
//	int a  = 10;
//	int b = 20;
//	int sum = add(a,b);
//	printf("sum=%d\n",sum);
//
//	return 0;
//}

//#define 定义标识符常量
//#define 可以定义宏--带参数
//#define MAX 100;
//int main() {
//
//	int a = MAX;
//	return 0;
//}
//函数的实现
//int Max(int a, int b) {	
//	if (a > b)
//		return a;
//	else
//		return b;
//
//}
////宏的定义方式
//#define  MAX(X,Y) (X>Y?X:Y)
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	int max = Max(a,b);
//	printf("max=%d\n",max);
//	//宏的方式
//	max = MAX(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}
//int main() {
//
//	int a = 10;//4个字节
//	int* p =&a;//取地址a,指针变量int* p
//	//有一种变量用来存放地址的--指针变量
//	*p = 20;//*--解引用操作符 
//	printf("%p\n",&a);
//	printf("%p\n",p);
//	printf("%p\n",&a);
//	return 0;
//}
int main() {
	char ch = 'a';
	char* pc =&ch;
	printf("%d\n",sizeof(pc));
	*pc = 'c';
	printf("%c\n",ch);
	return 0;
}