#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double mile, meter;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &mile);

	meter = 1609.0 * mile;

	/* 1,609�� ���Ͽ� ���ͷ� ��ȯ�Ѵ�.
	   �Ǽ������� ��Ÿ�����ϱ� ������
	   1609.0���� ǥ���Ѵ�. */

	printf("%.1lf������ %lf�����Դϴ�.", mile, meter);

	return 0;
}