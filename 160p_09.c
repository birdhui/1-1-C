#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, num1, num2;

	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	num1 = (x * x) - (9 * x) + 2;
	num2 = (7 * x) + 2;

	if (x <= 0)
		printf("f(x)�� ���� %lf\n", num1);
	else if (x > 0)
		printf("f(x)�� ���� %lf\n", num2);

	return 0;
}

// ����ڷκ��� x���� �Է¹޾� �Լ����� ����Ͽ�
// ȭ�鿡 ����Ѵ�. x�� �Ǽ���.