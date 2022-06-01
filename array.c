//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void bubble_sort(int arr[], int sz) {
//	//确定冒泡排序的趟数
//	int i = 0;
///*	int sz = sizeof(arr) / sizeof(arr[0]);*///10
//	for (i = 0; i <sz-1; i++) {
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一次的冒泡排序
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++) {
//			if (arr[j] >arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//	
//}
//int main()
//{//实现一个冒泡排序将一个整型数组排序
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr,sz);//冒泡排序函数
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
//	//printf("%d\n", sizeof(arr1));//sizeof是计算变量、数组、类型的大小-单位是字节-操作符
//	//printf("%d\n", strlen(arr2));//strlen是求字符串长度的-只能针对字符串求长度-库函数-使用的头文件“\0"之前的字符长度
//	//printf("%d\n", strlen(arr1));
////////	//创建数组-存放10个整型
////////	//int arr[10];
////////	//char arr2[5];
////////	char arr4[] = "abcdef";
////////	printf("%d\n", sizeof(arr4));//sizeof是计算机arr4空间的大小
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
////////	printf("平均值是:%f", avg);
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
////	printf("请输入你喜欢的颜色:(1.red,2.green,3.bule):");
////	scanf("%u", &favorite_color);
////	switch (favorite_color)
////	{
////	case red:
////		printf("你喜欢的颜色是红色");
////		break;
////	case green:
////		printf("你喜欢的颜色是绿色");
////		break;
////	case bule:
////		printf("你喜欢的颜色是蓝色");
////		break;
////	default:
////		printf("没有你喜欢的颜色");
////	}
////	return 0;
////}
//////enum DAY {
//////	MON = 1, TUE, WED, THU, FTI, SAT, SUN
//////}day;
//////int main() {
//////	for (day = MON; day <= SUN; day++) {
//////		printf("枚举元素:%d\n", day);
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