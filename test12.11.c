#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
//
//int main() {
//	printf("hehe\n");
//	main();
//	return 0;
//}
// void print(int n) {
//	 if (n > 9) {
//		 print(n/10);
//	 }
//	 printf("%d ",n%10);
//
//}
//int main() {
//	unsigned int num = 0;
//	scanf("%d\n",&num);//1234
//	print(num);
//	return 0;
//}

//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//
//}
// ���ַ��������õݹ�
//int my_strlen(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//
//}
//int main() {
//	char arr[] = "bit12";
//	//int len = strlen(arr);//���ַ�������
//	int len = my_strlen(arr);//arr�����飬���鴫�δ���ȥ�Ĳ�������������ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n",len);
//	return 0;
//}
//��n�ý׳�
//int Fac1(int n) {
//	int i = 0;
//	int ret = 1;
//	for ( i = 1; i <=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n) {
//	if (n <= 1) {
//		return 1;
//	}
//	else {
//		return n * Fac2(n-1);
//	}
//
//
//}
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fac2(n);
//	printf("%d\n",ret);
//
//	return 0;
//}
//������n��쳲���������
int main() {
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf("%d\n",ret);
	return 0;
}