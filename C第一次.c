////#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////int main()
////{
////	const int n = 10;
////	int arr[n] = { 0 };
////	//n = 20;//n是变量，但是又有常属性，所以我们说n是长变量
////	return 0;
////}
////
////	
//
//
//
////scanf是C语言提供的
////scanf s不是标准C语言提供的是，VS编译器提供的(跨平台性/可移植性)
//// _CRT_SECURE_NO_WARNINGS必须加在源文件的第一行
////常量：C语言中的常量和变量的定义的形式有差距
////const-常属性
//////define 定义的标识符常量
////#include <stdio.h>
////#define MAX 10
////int main()
////{
////	int arr[MAX];
////	printf("%d\n", MAX);
////	return 0;
////}
//////4.枚举常量-enum
////#include <stdio.h>
////enum Sex
////{
////	MALE,
////	FAMALE,
////	SECRET,
////};
////MALE,FAMALE,SECRLT-枚举常量
////int main()
////{
////	//enum Sex s = FAMALE;
////	printf("%d\n", MALE);//0
////	printf("%d\n", FAMALE);//1
////	printf("%d\n", SECRET);//2
////	return 0;
////
////}
////#include <stdio.h>
////enum color
////{
////	RED,
////	YELLOW,
////	BLUE,
////};
////int main()
////{
////	enum color Color = BLUE;
////	return 0;
////}
////字符串+转义字符+注释
////字符串
//////“”
////#include <stdio.h>
////int main()
////{
////	printf("hello world!");
////	return 0;
////}
////
////#include <stdio.h>
////int main()
////{
////	printf("			 @\n                      ");
////	printf("			/\ \n");
////	printf("			* *\n");
////	printf("			* *\n");
////	printf("			* *\n");
////	printf("		* * * * * *\n");
////	printf("	* * * * * * * * * *\n");
////	printf(" * * * * * * * * * * * * * * \n");
////	printf("			* *\n");
////	printf("			* *\n");
////	printf(			 "* * * *");
////	printf("		* * * * * *\n");
////	return 0;
////#include <stdio.h>
////int main()
////{
////	int a;
////	char b;
////	double c;
////	a = 520;
////	  b = 'h';
////	  c = 392.12222;
////
////	printf("情人节的日期是：%d\n", a);
////	printf("My name is %c, but I'm boy\n", b);
////	printf("最喜欢的小数：%4.2f\n", c);
////	return 0;	
////}
////常量：1.字面常量。2.const修饰的常变量
//#include <stdio.h>
////int main()
////{
////	const int num = 4;//const常属性，const修饰的常变量
////	pirntf("%d\n", num);
////	num = 8;
////	printf("%d\n", num);
////}
////#define MAX 10//define 定义的标识符常量
//
////int arr[MAX];
//	//printf("%d\n", MAX);
//	 //const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	//int arr[10] = { 0 };
//
////枚举常量--一一列举
////男，女，保密
////三原色：红 黄 蓝
////星期：1,2,3....7
//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET,
//};
////MALE,FEMALE,SECRET --枚举常量；并且枚举常量是不能更改的
//int main1() {
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//}
//
//
//
//
//
//
//
