#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main() {
//	char arr1[] = "bit";
//	char arr2[] = "######";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	//strcpy--string copy--字符串拷贝
//	//srtlen--string length--字符串长度有关
//
//	return 0;
//}
//int main() {
//	//memset-memory set--内存设置
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
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作
//
//
//	return 0;
//}
// 写函数判断素数
//是素数返回1，不是返回0
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
//写函数判断闰年
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
//实现一个有限数组的二分查找
//					本质是一个指针
//int binary_search(int arr[],int k,int sz) {
//	//算法的实现
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
//	//下面arr传递的是首元素的地址
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else {
//		printf("找到了，下标是：%d\n",ret);
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
//		printf("没找到");
//	}
//	else
//	
//	printf("找到了，下表是：=%d\n", ret);
//	return 0;
//}