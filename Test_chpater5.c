#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01
/*
int main()
{
	int num1, num2;

	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &num1, &num2);

	printf("��: %d ������: %d\n", num1 / num2, num1 % num2);

	return 0;
}
// */

//02
/*
int main()
{
	double num1, num2;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &num1, &num2);

	printf("%lf %lf %lf %lf", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

	return 0;
}
// */

// 03
/*
int main()
{
	int x, y, z, result;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);

	result = (x > y) ? x : y;
	result = (result > z) ? result : z;
	// ?: ���� ������ ����� ��
	// () ��ȣ �� ���ֱ�

	printf("�ִ�: %d\n", result);

	return 0;
}
// */

// 04

// 05
/*
int main()
{
	int num, ten, one;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	ten = num / 10;
	one = num % 10;

	printf("���� �ڸ�: %d\n", ten);
	printf("���� �ڸ�: %d\n", one);

	return 0;
}
// */

// 06
/*
int main()
{
	int num, result;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	result = ~num + 1;
	
	printf("2�� ����: %d\n", result);

	return 0;
}
// */

// 07
/*
int main()
{
	int num, square, result;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("2�� ���ϰ� ���� Ƚ��: ");
	scanf("%d", &square);

	result = num << square;

	printf("%d<<%d�� ��: %d\n", num, square, result);

	return 0;
}
// */

// 08
/*
int main()
{
	const double PI = 3.14;
	double radius, area, volume;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);

	area = 4 * PI * (radius * radius);
	volume = 4.0 / 3.0 * PI*(radius * radius * radius);

	printf("ǥ������ %lf�Դϴ�.\n", area);
	printf("ü���� %lf�Դϴ�.\n", volume);

	return 0;
}
// */

//09
/*
int main()
{
	double ac, ae, bc, de;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &bc);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &ac);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &ae);

	de = (ae * bc) / ac;

	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.\n", de);

	return 0;
}
// */

// 10
/*
int main()
{
	int x, y;

	printf("x ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("y ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &y);

	(x > 0 && y > 0) ? printf("1��и�") : printf(" ");
	(x < 0 && y > 0) ? printf("2��и�") : printf(" ");
	(x > 0 && y < 0) ? printf("3��и�") : printf(" ");
	(x < 0 && y < 0) ? printf("4��и�") : printf(" ");

	return 0;
}
// */

// 11
/*
int main()
{
	double mile, gat, result;

	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &mile);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &gat);

	result = ((360.0 / gat) * 360.0) / 2.0;

	printf("������ �������� %lf�Դϴ�.\n", result);

	return 0;
}
// */

// 12
/*
int main()
{
	unsigned int a, b, c, d;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &a);
	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &b);
	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &c);
	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &d);

	printf("�����: %d")

	return 0;
}
// */