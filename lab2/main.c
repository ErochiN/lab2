#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int N = 10, K = 50;

	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", N * 60 + K);
	printf("�� �������� �������� %d ����� � %d �����\n", 23 - N, 60 - K);
	printf("� 8.00 ������ %d ������\n", ((N * 60 + K) * 60) - ((8 * 60) * 60));
	printf("������� ���  = %f �����  � ������� ������ = %f ����\n", N / 24., K / 60.);

	return 0;
}