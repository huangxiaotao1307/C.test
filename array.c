//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void bubble_sort(int arr[], int sz) {
//	//ȷ��ð�����������
//	int i = 0;
///*	int sz = sizeof(arr) / sizeof(arr[0]);*///10
//	for (i = 0; i <sz-1; i++) {
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ�ε�ð������
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++) {
//			if (arr[j] >arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//	
//}
//int main()
//{//ʵ��һ��ð������һ��������������
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr,sz);//ð��������
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	/*int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("&arr[%d][%d]=%p\n ",&arr[i][j]);
//		}
//		printf("\n");
//		
//	}*/
//	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, arr[i]);
//	}*/
//	/*char arr[] = "abcdef";
//	int i = 0;
//	for ( i = 0; i < 6; i++)
//	{
//		printf("%c", arr[i]);
//	}*/
//	//printf("%c\n", arr[3]);
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c' };
//	//printf("%d\n", sizeof(arr1));
//	//printf("%d\n", sizeof(arr1));//sizeof�Ǽ�����������顢���͵Ĵ�С-��λ���ֽ�-������
//	//printf("%d\n", strlen(arr2));//strlen�����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ�ͷ�ļ���\0"֮ǰ���ַ�����
//	//printf("%d\n", strlen(arr1));
////////	//��������-���10������
////////	//int arr[10];
////////	//char arr2[5];
////////	char arr4[] = "abcdef";
////////	printf("%d\n", sizeof(arr4));//sizeof�Ǽ����arr4�ռ�Ĵ�С
////////	printf("%d\n", strlen(arr4));
////////	
//}
//////#include<string.h>
//////#include<time.h>
//////#include<stdlib.h>
//////#include<stdio.h>
//////int* getRandom() {
//////	static int r[10];
//////	int i;
//////	srand((unsigned)time(NULL));
//////	for (i = 0; i < 10; ++i) {
//////		r[i] = rand();
//////		printf("r[%d]=%d\n", i, r[i]);
//////	}
//////	return r;
//////}
//////int main()
//////{
//////	int* p;
//////	int i;
//////	p = getRandom();
//////	for (i = 0; i < 10; i++) {
//////		printf("*(p+%d):%d\n", i, *(p + i));
//////	}
//////}
////////double getAverage(int arr[], int size);
////////int main()
////////{
////////	int balance[5] = { 1000,2,3,17,50 };
////////	double avg;
////////	avg = getAverage(balance, 5);
////////	printf("ƽ��ֵ��:%f", avg);
////////	return 0;
////////}
////////double getAverage(int arr[], int size) {
////////	int i;
////////	double avg;
////////	double sum = 0;
////////	for (i = 0; i < size; i++) {
////////		sum += arr[i];
////////	}
////////	avg = sum / size;
////////	return avg;
////////}
////#include<stdio.h>
////int main() {
////	enum color{red=1,green,bule};
////	enum color favorite_color;
////	printf("��������ϲ������ɫ:(1.red,2.green,3.bule):");
////	scanf("%u", &favorite_color);
////	switch (favorite_color)
////	{
////	case red:
////		printf("��ϲ������ɫ�Ǻ�ɫ");
////		break;
////	case green:
////		printf("��ϲ������ɫ����ɫ");
////		break;
////	case bule:
////		printf("��ϲ������ɫ����ɫ");
////		break;
////	default:
////		printf("û����ϲ������ɫ");
////	}
////	return 0;
////}
//////enum DAY {
//////	MON = 1, TUE, WED, THU, FTI, SAT, SUN
//////}day;
//////int main() {
//////	for (day = MON; day <= SUN; day++) {
//////		printf("ö��Ԫ��:%d\n", day);
//////	}
//////}
//////int main()
//////{
//////	enum  DAY day;
//////	day = WED;
//////	printf("%d", day);
//////	return 0;
//////}
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	return 0;
}