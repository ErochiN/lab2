#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int N = 7, K = 50;

	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", K);
	printf("�� �������� �������� %d ����� � %d �����\n", N, K);
	printf("� 8.00 ������ %d ������\n", K * 60);
	printf("������� ���  = %f �����  � ������� ������ = %f ����\n", (double)N / 24, (double)K / 60);

	return 0;
}