#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double weight_on_moon, weight_on_earth;

	printf("�����Ը� �Է��ϼ���(����: kg): ");
	scanf("%lf", &weight_on_earth);

	/* scanf ���ۼ�Ʈ ������ �������� �� ���ֱ� */

	weight_on_moon = weight_on_earth * 0.17;

	printf("�޿����� �����Դ� %lfkg�Դϴ�. \n", weight_on_moon);
	/*����� ����� �� �ĸ� ����� ����� ������ ����
	  �� �������� �ڿ� ���ֱ�!! */

	return 0;
}