//顺序结构，选择结构，循环结构
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		n++;
	case 2:
		m++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
			m++;
			break;
		default:
			break;
	}
	printf("m =%d,n=%d\n", m, n);
	//int day = 0;
	//int n = 1;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	if ( n == 1)
	//		printf("hehe\n");
	//	printf("星期一\n");
	//case 2:
	//	printf("星期二\n");
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//case 5:
	//	printf("星期五\n");
	//	break;
	//default://
	//	printf("输入错误\n");
	//}
	return 0;
	//break是switch的结束
}
	
	//练习：判断1-100之间的奇数
	/*int i = 1;
	while (i <= 100) {
		printf("%d ", i);
		i += 2;*/
		/*if (i % 2 == 1)
			printf("%d ", i);
		i++;*/


	
	//else是离最近的IF匹配的
	/*int age = 45;
	if (age < 18)
		printf("未成年\n");
	else {
		if(age >= 18 && age < 28)
			printf("青年\n");
		else if (age >= 28 && age < 50)
			printf("壮年\n");
		else if (age >= 50 && age < 90)
	printf("老年\n");

		}*/
	/*if (age < 18)
		printf("未成年\n");
	else
		printf("成年");*/