#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	//eof--end of file  �ļ�������־
//	/*int ch = 0;
//	while ((ch=getchar()) != EOF) {
//		putchar(ch);
//	}*/
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s",password);//�������룬�����password������
//	//��������ʣһ�� ��\n�� --10
//	//��ȡ��\n��
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else {
//		printf("����ȷ��\n");
//	}
//
//	return 0;
//}
//int main() {
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch); 
//	}
//	return 0;
//}
//int main() {
//	int i = 0;//��ʼ��
//	while (i<10)//�ж�
//	{
//		i++;//����
//	}
//	return 0;
//}
//int main() {
//	int i = 0;
//	//  ��ʼ�����жϣ�����
//	for ( i = 1; i <= 10; i++)
//	{
//		printf("%d\n",i);
//
//	}
//	return 0;
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)//ǰ�պ����� 
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}
//int main() {
//	for (;;) {
//
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main() {
//	int  i = 1;
//	do
//	{
//		printf("%d ",i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	for ( i = 1; i <= n; i++)
//	{
//		ret = i * ret; 
//	}
//	printf("ret=%d\n",ret);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for ( n= 1; n <=3; n++)
//	{
//		ret = 1;//ÿ�γ�ʼ������Ȼ���ۼ�
//		for (i = 1; i <= n; i++)
//		{
//			ret = i * ret;
//		}
//		sum += ret;
//	}
//	//ret == 1*1
//	//ret == 1*1*2
//	//ret == 1*1*2*3
//
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		
//	
//			ret = n * ret;
//		
//		sum += ret;
//	}
//	
//
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 3;n++) 
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = i * ret;
//		}
//		sum += ret;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}

//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//	//дһ������������(�����)���ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++) {
//		if (k == arr[i]) {
//			printf("�ҵ��ˣ��±���:%d\n",i);
//			break;
//		}
//
//	}
//	if (i == sz)
//		printf("û�ҵ�\n");
//
//	return 0;
//}
int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;//���±�
	int right = sz -1;//���±�
	int mid = (left + right) / 2;
	while (left <= right)
	{
		if (arr[mid] > k) {

			right = mid - 1;
		}
		else if (arr[mid] < k) {
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}