#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int n = 3, L = 333;
	int	k = 3, m = 3;

	printf("Дано:\n");
	printf("\t%d\n", n);
	printf("\t%d\n", L);
	printf("       ------\n");

	printf("Oтвет:\n");
	printf("\t%.*d", k, (n / L));
	printf(".%.*d", m, (n % L));

	return 0;
}