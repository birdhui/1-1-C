#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int krw;
	double num1, usd;

	printf("ȯ���� �Է��Ͻÿ�: ");
	scanf("%lf", &num1);

	/*�������� num1�� krw�� ������ �Ǽ������� ǥ�⸦ �� ������
	  ����ȯ�� ���־�� �� !!
	  
	  �׷��⿡ num1�� krw �� �� �ϳ��� �Ǽ������� ����
	  ������� �Ǽ��� ���������� ���� �� �ְ� �ؾ���
	  
	  ���� ���������� krw�� ������ ǥ���ؾ��ϱ� ������
	  ȯ���� num1�� �Ǽ������� ��ȯ�� �־���
	  
	  ��� krw�� �Ǽ��� ǥ���ϰ� %.0lf <- �̷��� ���� ¥�� ��*/
	

	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &krw);

	usd = krw / num1;

	printf("��ȭ %d���� %lf�޷��Դϴ�.\n", krw, usd);

	return 0;
}