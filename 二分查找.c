#define _crt_secure_no_warnings
#include<stdio.h>
#include<math.h>
int main()
{
	

	��д1-100�����������ֵĶ��ٸ�����9

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
	//����������
int i = 0;
double sum = 0.0;
int flag = 1;
for (i = 1; i <= 100; i++) {
	sum+=flag*1.0 / i;
	flag = -flag;
}//1/1+1/2....
printf("%lf\n", sum);
return 0;
��ʮ���������ֵ
	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];//���ֵ
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%d\n", max);
	9��9�˷��ھ���
	int i = 0;
	ȷ����ӡ9��
	for (i = 1; i <= 9; i++) {
		��ӡһ��
		int j = 1;
		for (j = 1; j < i; j++) {
			printf("%d*%d=%d", i, j, i * j);
		}
		printf("\n");
	}
	���ֲ���:��д��һ���������������в��Ҿ���ĳ����

	return 0;
}
��������Ϸ
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
	//1.����һ��1-100�����
	//2.������	
	//��ʱ��������������������ʼ��
	//time_t time(time_t*timer)

	int guess = 0;
	int red = rand() % 100 + 1;
	while (1) {
		printf("�������:\n");
		scanf("%d", &guess);
		if (guess > red) {
			printf("�´���\n");
		}
		else if (guess < red) {
			printf("��С��\n");
		}
		else {
			printf("�¶���");
			break;
		}
	}
}
//rand_max//0-32767֮��
int main()
{
	int input = 0;
	srand((unsigned int)time(null));
	do {
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
			//��������Ϸ
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}while(input);
	return 0;
}
goto ���---�����������õ�goto���ͱ����ת�ı��
�ػ�����
#include<stdio.h>
int main() 
{
	char input[20] = { 0 };
	shutdown-s-t-60
	system()��ִ��ϵͳ�����
	system("shutdown-s-t 60");
again:
	printf("��ע����ĵ��Խ���һ���ӹ����ϵ�������������˧��ȡ���ػ�\n������>");
	scanf("%s", input);
	if (strcmp(input, "����˧��") == 0)//�Ƚ������ַ���,strcmp�Ƚ������ַ���
	{
		system("shutdown-a");
	}
	else
	{
		goto again;
	}
	return 0;
}
