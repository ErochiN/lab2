#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int n = 3;

	printf("����:\n");
	printf("\t%d\n", n);
	printf("\t%d\n", 333);
	printf("       ------\n");

	printf("O����:\n");
	printf("%+08.3f", (n / 333.));

	return 0;
}