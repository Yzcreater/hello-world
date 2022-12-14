#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	//int arr[10] = {1,2,3};//不完全初始化，后面默认的是0；局部变量
//	//char arr2[5] = { 'a','b'};
//	//char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n",sizeof(arr4));//7
//	//sizeof 计算arr4所占空间的大小
//	//strlen 求字符串长度
//	printf("%d\n",strlen(arr4));//6
//
//
//	return 0;
//}
//int main() {
//	char arr[] = "abc";
//	char arr1[3] = {'a','b','c'};
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",strlen(arr));
//	printf("%d\n",strlen(arr1));
//	return 0;
//}
//int main() {
//	//char arr[] = "abcdef";
//	////printf("%c\n",arr[3]);
//	//int i = 0;
//	//for ( i = 0; i < 6; i++)
//	//{
//	//	printf("%c ",arr[i]);
//	//}
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("&arr=[%d] = %p\n",i,&arr[i]);
//	}
//
//	return 0;
//}
//int main() {
//	//int arr[3][4] = {1,2,3,4,5};
//
//	int arr1[3][4] = {{1,2,3},{4,5}};
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 4; j++)
//		{
//			printf("%d ",arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//	//int arr2[][4] = {{1,2,3},{4,5}};//行可以省略，列不行
//
//
//	//char ch[5][6];
//
//	return 0;
//}
//int main() {
//	//int arr[3][4] = {1,2,3,4,5};
//
//	int arr1[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr1[%d][%d]=%p\n ", i, j, &arr1[i][j]);
//		}
//
//
//		//int arr2[][4] = {{1,2,3},{4,5}};//行可以省略，列不行
//
//	}
//	//char ch[5][6];
//
//	return 0;
//}
//void bubble_sort(int arr[],int sz) {
//	//确定排序的趟数
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for ( i = 0; i < sz-1; i++)
//	{	
//		int flag = 1;//假设这次的数据已经有序
//		//每一趟冒泡排序的内容
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				int tem = 0;
//				tem = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tem; 
//				flag = 0;//本趟排序的数字其实不完全有序
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//}
//int main() {
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序
//	bubble_sort(arr,sz);//冒泡排序函数
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//
//	return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n",arr);
//	printf("%p\n",&arr[0]);
//	printf("%d\n",*arr);
//
//
//
//	return 0;
//}
//void bobble_sort(int arr[],int sz) {
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				int tem = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tem;
//			
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0,};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bobble_sort(arr,sz);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
