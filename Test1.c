#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//
//	int a = 5;
//	int b = 8;
//	if (a > b)
//	{
//		printf("�ϴ�ֵ�ǣ�%d\n",a);
//	}
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", b);

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
//	int b = ~a;//b���з��ŵ�����
//
//	//~--��λ�������ƣ�ȡ��
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//
//	//ԭ�����λ���䣬����ȡ���䷴��  10010--->11101  �����1��ɲ��� 11101-->11110
//	printf("%d\n",b);//��ӡ�����������ԭ��
//	
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	//int b = a++;//����++����ʹ�ú��1
//	//int b = ++a;//ǰ��++���ȼ�1��ʹ��
//	//int b = a--;//����--����ʹ�ú�-1
//	int b = --a;//ǰ��--����-1��ʹ��
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
//	//�� -- ��0
//	//�� -- 0
//	//&& -- �߼���
//	//|| -- �߼���
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
//	//arr[4];//[]--�±����ò�����
//	int sum = add(40,5);//()--�������ò�����
//	printf("%d\n",sum);
//
//
//	return 0;
//}
//
//int main() {
//	register int a = 10;//��a����ɼĴ�������
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int;
//	unsigned int num = 1;
//
//	//struct --�ṹ��ؼ���
//	//union--������/������
//
//	return 0;
//}
//int main() {
//	//typedef-���Ͷ���-�����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//
//
//
//	return 0;
//}
//static ���ξֲ����������������ӳ���
//void test() {
//
//	 static int a = 1;//��̬�ֲ�����
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

//static ����ȫ�ֱ������ı�������---�þ�̬��ȫ�ֱ���ֻ�����Լ���Դ�ļ���ʹ��
//int main() {
//
//	//extern--�����ⲿ����
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//
//
//	return 0;}

//�����ⲿ����

//static ���κ������ı��˺������������ԣ� �ⲿ��������-->�ڲ���������
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

//#define �����ʶ������
//#define ���Զ����--������
//#define MAX 100;
//int main() {
//
//	int a = MAX;
//	return 0;
//}
//������ʵ��
//int Max(int a, int b) {	
//	if (a > b)
//		return a;
//	else
//		return b;
//
//}
////��Ķ��巽ʽ
//#define  MAX(X,Y) (X>Y?X:Y)
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//�����ķ�ʽ
//	int max = Max(a,b);
//	printf("max=%d\n",max);
//	//��ķ�ʽ
//	max = MAX(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}
//int main() {
//
//	int a = 10;//4���ֽ�
//	int* p =&a;//ȡ��ַa,ָ�����int* p
//	//��һ�ֱ���������ŵ�ַ��--ָ�����
//	*p = 20;//*--�����ò����� 
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