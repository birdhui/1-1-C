#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double radious, area;

	printf("�������� �Է��Ͻÿ�: ");
	scanf("%lf", &radious);

	area = 3.14 * radious * radious;

	printf("���� ����: %lf\n", area);

	return 0;
}