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
	ret = Fac1(n);//ѭ���ķ�ʽ
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
	//int len = strlen(arr);//���ַ����ĳ���
	//printf("%d\n", len);
	//ģ��ʵ��һ��strlen����
	int len = my_strlen(arr);//arr�����飬�����Ǵ��Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ��
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
	//�ݹ麯���������������ı�̼��ɳ�Ϊ�ݹ�//�Ѵ��»�С
	//����һ������ֵ������˳���ӡ����ÿһλ��
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//�ݹ�
	pirnt(num);
	return 0;
}