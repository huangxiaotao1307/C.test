////һ������������������ֵ���ṩ�Թ��̵ĵķ�װ��ϸ�ڵ����أ�-�����
//#include<stdio.h>
////int Add(int x, int y)
//{
////	int z = 0;
////	z = x + y;
////	return z;
////}
////int main()
////{
////	int a = 0;
////	int b = 1;
////	int sum=Add(a, b);
////	printf("%d\n", sum);
////	
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//���庯��
//get_max(int x, int y) {
//	if (x > y) 
//		return x;
//	else
//		return y;
	
//}
void Swap1(int x, int y) {//void û�з���ֵ
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int* pa,int* pb) {
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	//char arr1[] = "bit";
	//char arr2[20] = "#############";
	////         bit\0######
	//strcpy(arr2, arr1);
	//printf("%s\n", arr2);
	//strcpy-string-copy-�ַ�������
	//strlen-string-length-�ַ��������й�
	//memset-�ڴ�����
	//memory-�ڴ� set-����
	//char arr[] = "hello world";
	//memset(arr, '*',5);//***** world
	////������-����������ʵ��
	//printf("%s\n", arr);
	/*int a = 10;
	int b = 20;
	int max=get_max(100, 300);
	printf("%d\n", max);*/
	int a = 10;
	int b = 20;
	//int tmp = 0
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	//Swap(a,b);//��ֵ����
	printf("a=%d b=%d\n", a, b);
	//int a = 10;
	//int* pa = &a;//pa��ָ�����
	//*pa = 20;//�����ò���
	//printf("%d\n",a);
	return 0;
 �β�ʵ����֮����ʵ�൱��ʵ�ε�һ����ʱ����
}
#include<stdio.h>
����������1��������������0
int is_prime(int n) {
	int j = 0;
	for (j = 2; j < n; j++) {
		if (n % j == 0)
			return 0;

	}
	return 1;
	
}
int is_leap_year(int y) {
	if ((y % 4 == 0 && y % 100 == 0) || y % 400 == 0)
		return 1;
	else
		return 0;
}
int binary_search(int arr[], int k) {
	
	�㷨��ʵ��
}
int main()
{
	���ֲ��ң���һ�����������в��Ҿ����ĳ����
	����ҵ��ˣ�������������±꣬�Ҳ����Ļ�������-1

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int ret =binary_search(arr,k);
	if (ret == -1) {
		printf("�Ҳ���ָ��������");
	}
	else {
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	int year = 1000;
	for (year = 1000; year <= 2000; year++) {
		//�ж��Ƿ�λ����
		if (is_leap_year(year) == 1); {
			printf("%d\n", year);
		}
	}
	int i = 0;
	for (i = 100; i <= 200; i++) {
		//�ж�i�Ƿ�λ����
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}