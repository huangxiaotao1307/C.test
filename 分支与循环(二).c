#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	//��ӡ100-200֮�������
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) {
		//�ж�i�Ƿ�Ϊ����
		//�����жϵĹ���
		//1.�Գ���
		//����2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++) {//sqrt()�ǿ�ƽ������ѧ�⺯��
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
	//��ӡ1000��2000������
	//int count = 0;
	//int year = 0;
	//for (year = 1000; year <= 2000; year++) {*/
	//	//�ж�year�Ƿ�λ����
	//	//�ܱ�4���������ܱ�100���������ꣻ�ܱ�400����������
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
	//����������Լ�������������������Լ��
	//int m = 0;
	//int n = 0;
	//int r = 0;
	////շת�����
	//scanf("%d %d ", &m, &n);
	//while (r=m % n) {
	//	//r = m % n;
	//	m = n;
	//	n = r;
	//}
	/*printf("%d\n", n);*/
	//дһ�������ӡ1-100֮������3�ı���������
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
//	//�㷨ʵ�֣�a�����ֵ��b��֮��c��С
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
//	//д���뽫�������Ӵ�С���
//
}
