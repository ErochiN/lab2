#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");

	printf("1\n2\n3\n \n");

	printf("1\n\t2\n\t\t3\n \n");

	printf("%1d %3d %5d %7d \n \n", 1, 2, 3, 4);

	printf("%10.3f\n \n", 12.234657);

	printf("%10.5f\n \n", 12.234657);

	printf("������� �� ������� %d �� %d ����� %d\n", 5, 2, 5 % 2);
	printf("������t %d �� %d �����o %d\n", 7, 5, 7 / 5);
	printf("��������� %d z� %d �����o %d\n\n ", 2000, 4, 2000 * 4);

	printf("%g ��������� %e ����� %f\n ", 5., 2., 5. / 2);

	printf("%d ��������� %d ����� %d\n ", 5, 2, 5 / 2);
	printf("%f ��������� %f ����� %f\n ", 5., 2., 5. / 2);
	printf("%g ��������� %g ����� %g\n ", 5., 2., 5. / 2);
	printf("%f ��������� %f ����� %f\n ", 5., 2., 5. / 2);
	printf("%e ��������� %e ����� %e\n ", 5., 2., 5. / 2);
}