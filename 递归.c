#define _CRT_SECURE_NO_WARNINGS#include<stdio.h>
int Facl(int n) {
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}
int Fac2(int n) {
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}
int main() {
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fac1(n);//循环的方式
	printf("%d\n", ret);
}
int my_strlen(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
int my_strlen(char* str) {
	if (*str != '\0') {
		return 1 + my_strlen(str + 1);
	}
	else {
		return 0;
	}
}
int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);//求字符串的长度
	//printf("%d\n", len);
	//模拟实现一个strlen函数
	int len = my_strlen(arr);//arr是数组，数组是传参，传过去的不是整个数组，而是第一个元素的地址。
	printf("len=%d\n", len);
}
void print(int n) {
	if (n > 9) {
		print(n / 10);

	}
	printf("%d\n", n % 10);
}
int main()
{
	//递归函数：程序调用自身的编程技巧称为递归//把大事化小
	//接受一个整型值，按照顺序打印它的每一位，
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//递归
	pirnt(num);
	return 0;
}