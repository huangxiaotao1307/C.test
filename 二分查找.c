#define _crt_secure_no_warnings
#include<stdio.h>
#include<math.h>
int main()
{
	

	编写1-100所有整数出现的多少个数字9

	int count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
		printf("%d\n", i);
	}
	printf("count=%d\n", count);
	return 0;
	//计算分数求和
int i = 0;
double sum = 0.0;
int flag = 1;
for (i = 1; i <= 100; i++) {
	sum+=flag*1.0 / i;
	flag = -flag;
}//1/1+1/2....
printf("%lf\n", sum);
return 0;
求十个整数最大值
	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];//最大值
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%d\n", max);
	9×9乘法口诀表
	int i = 0;
	确定打印9行
	for (i = 1; i <= 9; i++) {
		打印一行
		int j = 1;
		for (j = 1; j < i; j++) {
			printf("%d*%d=%d", i, j, i * j);
		}
		printf("\n");
	}
	二分查找:编写在一个整形有序数组中查找具体某个数

	return 0;
}
猜数字游戏
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void menu() {
	printf("**********************\n");
	printf("****1.play 0.exit ****\n");
	printf("**********************\n");
}
void game() {
	//1.生成一个1-100随机数
	//2.猜数字	
	//拿时间戳来设置随机数生成起始点
	//time_t time(time_t*timer)

	int guess = 0;
	int red = rand() % 100 + 1;
	while (1) {
		printf("请猜数字:\n");
		scanf("%d", &guess);
		if (guess > red) {
			printf("猜大了\n");
		}
		else if (guess < red) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了");
			break;
		}
	}
}
//rand_max//0-32767之间
int main()
{
	int input = 0;
	srand((unsigned int)time(null));
	do {
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
			//猜数字游戏
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}while(input);
	return 0;
}
goto 语句---可以随意滥用的goto语句和标记跳转的标记
关机程序
#include<stdio.h>
int main() 
{
	char input[20] = { 0 };
	shutdown-s-t-60
	system()来执行系统命令的
	system("shutdown-s-t 60");
again:
	printf("请注意你的电脑将在一分钟过后关系，如果输入我是帅哥取消关机\n请输入>");
	scanf("%s", input);
	if (strcmp(input, "我是帅哥") == 0)//比较两个字符串,strcmp比较两个字符串
	{
		system("shutdown-a");
	}
	else
	{
		goto again;
	}
	return 0;
}
