#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	//打印100-200之间的素数
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) {
		//判断i是否为素数
		//素数判断的规则
		//1.试除法
		//产生2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++) {//sqrt()是开平方的数学库函数
			if (i % j == 0) {
				break;
			}
		}
		if (j >sqrt(i)) {
			printf("%d  ", i);
			count++;
		}
	}
	printf("\n count = %d\n", count);
	//打印1000到2000的闰年
	//int count = 0;
	//int year = 0;
	//for (year = 1000; year <= 2000; year++) {*/
	//	//判断year是否位闰年
	//	//能被4整除，不能被100整除是闰年；能被400整除是闰年
	//	if (year % 4 == 0 && year % 100 != 0) {
	//		printf("%d ", year);
	//		count++;
	//	}
	//	else if (year % 400 == 0) {
	//		printf("%d ", year);
	//		count++;
	//	}
	/*	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			printf("%d ", year);
			count++;
		}
	}*/
	
	//printf("\count = %d\n", count);
	//给定两个公约数，求这两个数的最大公约数
	//int m = 0;
	//int n = 0;
	//int r = 0;
	////辗转相除法
	//scanf("%d %d ", &m, &n);
	//while (r=m % n) {
	//	//r = m % n;
	//	m = n;
	//	n = r;
	//}
	/*printf("%d\n", n);*/
	//写一个代码打印1-100之间所有3的倍数的数字
	//int i = 0;
	//for (i = 0; i <= 100; i++) {
	//	if (i % 3 == 0) {
	//		printf("%d ", i);
	//	}
	//}
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", & a, &b, &c);
//	//算法实现；a放最大值，b次之，c最小
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
	return 0;
//	//写代码将三个数从大到小输出
//
}
