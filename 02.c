#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ysalrary, msalrary;

	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf("%d", &ysalrary);

	msalrary = ysalrary / 12;

	printf("�����ɾ�(����: ����): %d\n", msalrary);

	return 0;
}