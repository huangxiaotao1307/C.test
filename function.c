////一般会有输入参数并返回值，提供对过程的的封装和细节的隐藏，-软件库
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
//定义函数
//get_max(int x, int y) {
//	if (x > y) 
//		return x;
//	else
//		return y;
	
//}
void Swap1(int x, int y) {//void 没有返回值
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
	//strcpy-string-copy-字符串拷贝
	//strlen-string-length-字符串长度有关
	//memset-内存设置
	//memory-内存 set-设置
	//char arr[] = "hello world";
	//memset(arr, '*',5);//***** world
	////函数体-交代函数的实现
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
	//Swap(a,b);//传值调用
	printf("a=%d b=%d\n", a, b);
	//int a = 10;
	//int* pa = &a;//pa是指针变量
	//*pa = 20;//解引用操作
	//printf("%d\n",a);
	return 0;
 形参实例化之后其实相当于实参的一份临时拷贝
}
#include<stdio.h>
是素数返回1，不是素数返回0
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
	
	算法的实现
}
int main()
{
	二分查找：在一个有序数组中查找具体的某个数
	如果找到了，返回这个数的下标，找不到的话，返回-1

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int ret =binary_search(arr,k);
	if (ret == -1) {
		printf("找不到指定的数字");
	}
	else {
		printf("找到了，下标是：%d\n", ret);
	}
	int year = 1000;
	for (year = 1000; year <= 2000; year++) {
		//判断是否位闰年
		if (is_leap_year(year) == 1); {
			printf("%d\n", year);
		}
	}
	int i = 0;
	for (i = 100; i <= 200; i++) {
		//判断i是否位素数
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}