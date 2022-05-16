#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	//3.编写代码实现，模拟用户登录情景，并且只能登录三次(只允许输入三次密码。如果密码正确则提示登录成功，如果三次均输入错误，则退出程序)
	int	i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("请输入密码:");
		scanf("%s", password);
		if (strcmp( password ,"123456")==0) {//==不能用来比较两个字符串相等，应该使用一个库函数-strcmp
			printf("登陆成功\n");
			break;
		}
		else {
			printf("密码错误\n");
		}
	}
//	if (i == 3) {
//		printf("三次密码错误,请退出程序\n");
//	}
//	2,welcome to chengdu!!!!
//	 #################
//	 w####################!
//	 we##################!!
//	 wel....
//	char arr1[] = "welcome to chengdu";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息1秒
//		system("cls");//执行系统命令的函数-cls-清空屏幕
//		left++;
//		right--;
//
//
//	}
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//
//	return 0;
//	1.在一个有序数组查找具体的某个数字n。编写int binsearch(int x;int v[],int n);功能；在v[0]<=v[1]<=v[2]<=...<=v[n]的数组中查找X\
//	二查算法
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//表示左下标
//	int right = sz - 1;//右下标
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			printf("找到了，下标是:%d\n", mid);
//		}
//	}
//	if (left > right) {
//		printf("找不到:%d\n");
//	}
//
//
//}
//
//	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("找到了，下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz) {
//		printf("找不到:%d\n");
//	}*/
//	/*int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++) {
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//	printf("sum=%d", sum);*/
//
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++) {
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;//n的阶乘
//		}
//		sum = sum + ret;
//	}
//	
//	printf("sum=%d", sum);
//	练习：n的阶乘
//	/*int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d", ret);*/
//	
//	do while循环
//	int i = 1;
//	do {
//		printf("%d", i);
//		i++;
//
//	} while (i < 10);
//	/*int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) {
//		k++;
//		return 0;
//	}*/
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++) {//10次打印，10次循环，10个元素
//		printf("%d", arr[i]);
//	}
//	for (i = 1; i <= 10; i++) {
//		不可在FOR循环内修改循环变量，防止for失去控制
//		 建议for语句的循环控制变量的取值前闭后开的写法
//		初始化 判断 调整放在一起
//		if (i == 5) {
//			continue;
//		}
//		printf("%d", i);
//	}
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}*/
//	/*int ch = getchar;
//	putchar(ch);
//	printf("%c\n", ch)*/;
//		/*while (i <= 10) {
//			if (i == 5)
//				break;//break直接终止循环
//			printf("%d\n", i);
//			i++;*/
//			/*}*/
//			while (i <= 10)
//			{
//				if (i == 5)
//					continue;//continue是终止本次循环的，也就是循环中continue后边的代码不会在执行，直接跳到while语句的判断部分进入下次循环的入口判断
//				printf("%d\n", i);
//				i=i+1;
//			/*}*/
//	int ch = 0;
//	while (ch = getchar() != EOF) 
//	{//CTRL+z
//		//EOF=end of file--->-文件结束标志
//
//		putchar(ch);
//	}
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s", password);
//	缓冲区还剩余一个“\n”
//	读取一下"\n"
//	while ((ch = getchar) != '\n')
//	{
//		;
//	}
//
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else {
//		printf("放弃确认");
//	}
//
