#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	double num3, sum, avg;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &num1);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &num2);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.0;

	printf("���� %lf�̰�, ����� %lf�Դϴ�. \n", sum, avg);

	return 0;
}