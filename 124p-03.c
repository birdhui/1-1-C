#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int base, height, area;

	printf("�ﰢ���� �غ�: ");
	scanf("%d", &base);

	printf("�ﰢ���� ����: ");
	scanf("%d", height);

	area = 0.5 * base * height;

	/* �ﰢ�� ���� ����
	   = 1/2(=0.5)*�غ�*���� */

	printf("�ﰢ���� ����: %lf", area);

	return 0;
}