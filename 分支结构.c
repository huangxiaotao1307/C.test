//˳��ṹ��ѡ��ṹ��ѭ���ṹ
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
	//	printf("����һ\n");
	//case 2:
	//	printf("���ڶ�\n");
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//case 5:
	//	printf("������\n");
	//	break;
	//default://
	//	printf("�������\n");
	//}
	return 0;
	//break��switch�Ľ���
}
	
	//��ϰ���ж�1-100֮�������
	/*int i = 1;
	while (i <= 100) {
		printf("%d ", i);
		i += 2;*/
		/*if (i % 2 == 1)
			printf("%d ", i);
		i++;*/


	
	//else���������IFƥ���
	/*int age = 45;
	if (age < 18)
		printf("δ����\n");
	else {
		if(age >= 18 && age < 28)
			printf("����\n");
		else if (age >= 28 && age < 50)
			printf("׳��\n");
		else if (age >= 50 && age < 90)
	printf("����\n");

		}*/
	/*if (age < 18)
		printf("δ����\n");
	else
		printf("����");*/