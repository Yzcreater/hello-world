#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main() {
//	char arr1[] = "bit";
//	char arr2[] = "######";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	//strcpy--string copy--�ַ�������
//	//srtlen--string length--�ַ��������й�
//
//	return 0;
//}
//int main() {
//	//memset-memory set--�ڴ�����
//	char arr[] = "hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	return 0;
//}
//int get_max(int x, int y) {
//
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//int main() {
//	int a = 15;
//	int b = 20;
//	int max = get_max(a,b);
//	printf("%d\n",max);
//	return 0;
//}
//void Swap1(int x, int y) {
//	int temp = x;
//	x = y;
//	y = temp;
//
//}
//void Swap2(int* pa,int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//
//}
//int main() {
//	int a = 1;
//	int b = 2;
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a,b);
//	Swap2(&a,&b);
//	/*int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;*/
//	printf("a=%d b=%d",a,b);
//
//
//	return 0;
//}
//int main() {
//	int a = 10;
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����ò���
//
//
//	return 0;
//}
// д�����ж�����
//����������1�����Ƿ���0
//int is_prime(int n) {
//	int i = 0;
//	for ( i = 2; i <=n-1 ; i++)
//	{
//		if (n%i==0)
//		{
//			return 0;
//		} 
//	}
//	return 1;
//
//}
//int main() {
//
//	int i = 0;
//	for ( i = 100; i <=200; i++)
//	{
//		if (is_prime(i) == 1) {
//			printf("%d\n",i);
//		}
//		
//	}
//
//	return 0;
//}
//д�����ж�����
// int is_leap_year(int n) {
//	 if ((n % 4 == 0 && n % 100 != 0)||(n%400==0)) {
//		 return 1;
//	 }
//	 else {
//		 return 0;
//	 }
//
//}
//int main() {
//	int  i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d\n",i);
//
//		}
//	}
//
//	return 0;
//}
//ʵ��һ����������Ķ��ֲ���
//					������һ��ָ��
//int binary_search(int arr[],int k,int sz) {
//	//�㷨��ʵ��
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//8/4=2
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) {
//
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	return -1;
//	
//
//
//}
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//8/4=2
//	//����arr���ݵ�����Ԫ�صĵ�ַ
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	}
//	return 0;
//}
//void add(int* p) {
//	(*p)++;
//
//}
//int main() {
//	int num = 0;
//	add(&num);
//	printf("num=%d\n",num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//int main() {
//	int len = 0;
//	//1.
//	len = strlen("asd");
//	printf("%d\n",len);
//	//2.
//	printf("%d\n",strlen("asd"));
//	return 0;
//}
//int main() {
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//#include "add.h"
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}
//int binary_search(int arr[], int k, int sz) {
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//	
//
//}
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("û�ҵ�");
//	}
//	else
//	
//	printf("�ҵ��ˣ��±��ǣ�=%d\n", ret);
//	return 0;
//}