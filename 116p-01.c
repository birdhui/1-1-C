#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, sum;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &num1);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &num2);

	sum = num1 + num2;

	printf("�μ��� ��: %d", sum);

	return 0;
}