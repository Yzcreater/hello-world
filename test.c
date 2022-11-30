#include <stdio.h>

//包含一个叫stdio.h的文件
// standard inout output
//main 主函数 --程序的入口--有且只有一个

//int 是整型的意思 
//main前面的int表示main函数调用返回一个整型值

//int num2 = 20;//全局变量-定义在代码{}之外的变量
int main() {
	int num = 21;
	printf("num = %d\n",num);

	return 0;
}
//int main() {


	//int sum = 0;
	//int num1 = 0;
	//int num2 = 0;

	
	//输入数据--使用输入函数scanf_s
	//scanf_s("%d%d",&num1,&num2);//& 取地址符号
	
	//sum = num1 + num2; 
	//printf("sum = %d\n",sum);

	//int num1 = 10;//局部变量
	//short age = 20;//向内存申请两个字节==16bit


	//函数-print function-printf-打印函数
	//库函数-C语言本身提供给我们使用的函数
	//使用别人的东西-打招呼
	//#include
	//printf("mother fuck");

	//char ch = 'a';
	//printf("%c\n",ch);
	//int age = 20;
	//printf("%d\n",age);
	//printf("%d\n",sizeof(char));
	//printf("%d\n",sizeof(short));
	//printf("%d\n",sizeof(int));
	//printf("%d\n",sizeof(long));
	//printf("%d\n",sizeof(long long));
	//printf("%d\n",sizeof(float));
	//printf("%d\n",sizeof(double));
	//return 0;
