#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	//3.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����(ֻ���������������롣���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����)
	int	i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("����������:");
		scanf("%s", password);
		if (strcmp( password ,"123456")==0) {//==���������Ƚ������ַ�����ȣ�Ӧ��ʹ��һ���⺯��-strcmp
			printf("��½�ɹ�\n");
			break;
		}
		else {
			printf("�������\n");
		}
	}
//	if (i == 3) {
//		printf("�����������,���˳�����\n");
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
//		Sleep(1000);//��Ϣ1��
//		system("cls");//ִ��ϵͳ����ĺ���-cls-�����Ļ
//		left++;
//		right--;
//
//
//	}
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//
//	return 0;
//	1.��һ������������Ҿ����ĳ������n����дint binsearch(int x;int v[],int n);���ܣ���v[0]<=v[1]<=v[2]<=...<=v[n]�������в���X\
//	�����㷨
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//��ʾ���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ���:%d\n");
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
//			printf("�ҵ��ˣ��±���:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz) {
//		printf("�Ҳ���:%d\n");
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
//			ret = ret * i;//n�Ľ׳�
//		}
//		sum = sum + ret;
//	}
//	
//	printf("sum=%d", sum);
//	��ϰ��n�Ľ׳�
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
//	do whileѭ��
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
//	for (i = 0; i < 10; i++) {//10�δ�ӡ��10��ѭ����10��Ԫ��
//		printf("%d", arr[i]);
//	}
//	for (i = 1; i <= 10; i++) {
//		������FORѭ�����޸�ѭ����������ֹforʧȥ����
//		 ����for����ѭ�����Ʊ�����ȡֵǰ�պ󿪵�д��
//		��ʼ�� �ж� ��������һ��
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
//				break;//breakֱ����ֹѭ��
//			printf("%d\n", i);
//			i++;*/
//			/*}*/
//			while (i <= 10)
//			{
//				if (i == 5)
//					continue;//continue����ֹ����ѭ���ģ�Ҳ����ѭ����continue��ߵĴ��벻����ִ�У�ֱ������while�����жϲ��ֽ����´�ѭ��������ж�
//				printf("%d\n", i);
//				i=i+1;
//			/*}*/
//	int ch = 0;
//	while (ch = getchar() != EOF) 
//	{//CTRL+z
//		//EOF=end of file--->-�ļ�������־
//
//		putchar(ch);
//	}
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������");
//	scanf("%s", password);
//	��������ʣ��һ����\n��
//	��ȡһ��"\n"
//	while ((ch = getchar) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else {
//		printf("����ȷ��");
//	}
//
