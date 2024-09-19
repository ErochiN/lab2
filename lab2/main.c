#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");

	printf("1\n2\n3\n \n");

	printf("1\n\t2\n\t\t3\n \n");

	printf("%d %125d %125d %125d \n \n", 1, 2, 3, 4);

	printf("%10.3f\n \n", 12.234657);

	printf("%10.5f\n \n", 12.234657);

	printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
	printf("делениt %d на %d равенo %d\n", 7, 5, 7 / 5);
	printf("умножение %d zа %d равенo %d\n\n ", 2000, 4, 2000 * 4);

	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2);

	printf("%d разделить %d равно %d\n ", 5, 2, 5 / 2);
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2);
	printf("%g разделить %g равно %g\n ", 5., 2., 5. / 2);
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2);
	printf("%e разделить %e равно %e\n ", 5., 2., 5. / 2);
}