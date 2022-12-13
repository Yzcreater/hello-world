#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//n的阶乘
//int Fac2(int n) {
//	if (n < 1) {
//		return 1;
//	}
//	else {
//		return n * Fac2(n-1);
//		
//	}
//
//
//
//}
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fac2(n);
//	printf("%d\n",ret);
//	return 0;
//}
//
//斐波那契数列
//int Fib(int n) {
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//	
//
//}
int Fib(int n) {
	int a = 1;
	int b = 1;
	int c = 0;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;


}
int main() {
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf("%d\n",ret);
	return 0;
}