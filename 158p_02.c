#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num1);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num2);

	if (num1 % num2 == 0) {
		printf("����Դϴ�.\n");
	}
	else {
		printf("����� �ƴմϴ�.\n");
	}

	return 0;
}