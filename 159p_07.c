#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int height, weight, standard;

	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf("%d %d", &height, &weight);

	standard = (height - 100) * 0.9;

	if (weight < standard)
		printf("��ü���Դϴ�.\n");
	else if (weight == standard)
		printf("ǥ���Դϴ�.\n");
	else
		printf("��ü���Դϴ�.\n");

	return 0;
}