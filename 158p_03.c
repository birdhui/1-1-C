#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3, min;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 < num2)
		if (num1 < num3)
			min = num1;
		else
			min = num3;
	else if (num2 < num3)
		min = num2;
	else
		min = num3;

	printf("���� ���� ���� %d�Դϴ�.\n", min);
	return 0;
}