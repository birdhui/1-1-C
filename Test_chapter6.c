#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 02
/*
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
	else
		printf("����� �ƴմϴ�.\n");

	return 0;
}
// */

// 03
/*
int main()
{
	int x, y, z, min;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y) {
		if (x < z) {
			min = x;
		}
		else {
			min = z;
		}
	if (y < z) {
		min = y;
	}
	}
	else
		min = z;

	printf("���� ���� ������ %d�Դϴ�.\n", min);

	return 0;
}
// */

// 04

// 05
/*
int main()
{
	int height, age;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);

	if (height >= 140 && age >= 11)
	{
		printf("Ÿ�� �����ϴ�.\n");
	}
	else
		printf("�˼��մϴ�.\n");

	return 0;
}
// */

// 06
/*
int main()
{
	int month;

	printf("����ȣ�� �Է��Ͻÿ�: ");
	scanf("%d", &month);
	
	switch (month)
	{
		case 1:
		printf("1��\n");
			break;

		case 2:
			printf("2��\n");
			break;

		case 3:
			printf("3��\n");
			break;

		case 4:
			printf("4��\n");
			break;

		case 5:
			printf("5��\n");
			break;

		case 6:
			printf("6��\n");
			break;

		case 7:
			printf("7��\n");
			break;

		case 8:
			printf("8��\n");
			break;

		case 9:
			printf("9��\n");
			break;

		case 10:
			printf("10��\n");
			break;

		case 11:
			printf("11��\n");
			break;

		default: 12;
			printf("12��\n");
			break;
	}

	return 0;
}
// */

//07
/*
int main()
{
	double weight, height, result;

	printf("ü�߰� Ű�� �Է��ϼ���(Ű,ü��): ");
	scanf("%lf %lf", &height, &weight);

	result = (height - 100) * 0.9;

	if (weight > result) {
		printf("��ü���Դϴ�.\n");
	}
	else if (weight == result) {
		printf("ǥ���Դϴ�.\n");
	}
	else
		printf("��ü���Դϴ�.\n");

	return 0;
}
// */

//08
/*
int main()
{
	int time, age;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d %d", &time, &age);

	if (time <= 5 && age < 65 || age >= 13) {
		printf("����� 34,000�� �Դϴ�.\n");
		if (time > 5 && age <= 64 || age >= 13) {
			printf("����� 10,000�� �Դϴ�.\n");
			if (time <= 5 && age >= 65 || age >= 3 || age <= 12) {
				printf("����� 25,000�� �Դϴ�.\n");
			}
		}
	}
	else
		printf("����� 10,000�� �Դϴ�.\n");

	return 0;
}
// */

// 08
/*
int main()
{
	int time, age;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d %d", &time, &age);

	if (time <= 5) {
		if (age < 65 || age >= 13) {
			printf("����� 34,000�� �Դϴ�.\n");
		}
		if (3 <= age <= 12 || age >= 65) {
			printf("����� 25,000�� �Դϴ�.\n");
		}
		else {
			printf("10,000���Դϴ�.\n");
		}
	}
	else if (time > 5)
		printf("����� 10,000�� �Դϴ�.\n");

	return 0;
}


// 09
/*
int main()
{
	double x, zero, notzero;

	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	zero = (x * x) - (9 * x) + 2;
	notzero = (7 * x) + 2;

	if (x <= 0) {
		printf("f(x)�� ���� %lf\n", zero);
	}
		if (x > 0) {
			printf("f(x)�� ���� %lf\n", notzero);
		}

	return 0;
}
// */

// 10
/*
int main()
{
	int x, y;

	printf("��ǥ(x,y): ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0) {
		printf("1��и�\n");
	}
	else if (x < 0 && y > 0) {
		printf("2��и�\n");
	}
	else if (x < 0 && y < 0) {
		printf("3��и�\n");
	}
	else if (x > 0 && y < 0) {
		printf("4��и�\n");
	}
	else
	printf("����");

	return 0;
}
// */

// 11
/*
int main()
{
	char text;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &text);

	switch (text)
	{
	case('C'):
	case('c'):
		printf("Circle\n");
		break;

	case('R'):
	case('r'):
		printf("Rectangle\n");
		break;

	case('T'):
	default:('t');
		printf("Triangle\n");
		break;
	}

	return 0;
}
// */